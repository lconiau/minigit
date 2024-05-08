NAME    = minisheh

CC      = gcc

CFLAGS  = -lreadline -Wall -Werror -Wextra -g3 -MMD -MP

SRC_PATH = src/

OBJS = $(SRCS:.c=.o)
LIBFT_PATH = libft/

HEAD    = include/minishell.h

CFLAGS += -I$(LIBFT_PATH)

LDFLAG = -L$(LIBFT_PATH) -lft


COMMANDS_DIR    =       $(SRC_PATH)parsing.c \
                        	$(SRC_PATH)main.c \
                       		$(SRC_PATH)string_utils.c \
							$(SRC_PATH)abst_syn_tree.c\

SRCS    =       $(COMMANDS_DIR)

DEPS = $(OBJS:.o=.d)

all: libs $(NAME)


$(NAME): $(OBJS) libft/libft.a
	$(CC) $(OBJS) $(CFLAGS) $(LDFLAG) -o $@

-include $(DEPS)

libs:
		make -C $(LIBFT_PATH)

clean:
				rm -rf $(OBJS)
				rm -f $(DEPS)
				make -C $(LIBFT_PATH) clean

fclean: clean
				make -C $(LIBFT_PATH) fclean
				rm -f $(NAME)

re: fclean all

.PHONY : all, clean, re, fclean                                               