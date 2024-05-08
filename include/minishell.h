#ifndef MINISHELL_H
# define MINISHELL_H


# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>
# include <dirent.h>
# include <signal.h>
# include <linux/limits.h>
# include <sys/wait.h>
# include <unistd.h>
# include <readline/readline.h>
# include <readline/history.h>
# include "../ft_printf/ft_printf.h"

# define SUCCESS		0
# define FAILURE	1
# define TRUE		1
# define FALSE		0

typedef	enum e_type
{
	EMPTY = 0,
	STR,
	VAR,
	TRUNC,
	APPEND,
	INPUT,
	PIPE,
	END
}	t_type;

typedef enum e_error
{
	SUCCES = 0,
	ERROR = 1,
	DIRECTORY = 126,
	CMD = 127,
	INTERUPT = 130,
	QUIT = 131,
	MALLOC = 256
}	t_error;

typedef enum e_builtin
{
	CD = 0,
	ECHO,
	ENV,
	EXIT,
	EXPORT,
	PWD,
	UNSET
}	t_builtin;

typedef enum e_io
{
	STDIN = 0,
	STDOUT,
	STDERR
}	t_io;

typedef struct s_sig
{
	int				status;
	int				sigint;
	int				sigquit;
	int				exit;
}	t_sig;

typedef struct s_env
{
	char			*name;
	char			*value;
	struct s_env	*next;
}	t_env;

typedef struct s_cmd
{
	char			**args;
	char			*in;
	char			*out;
	int				fd[2];
	int				pid;
	t_builtin		builtin;
	struct s_cmd	*prev;
	struct s_cmd	*next;
}	t_cmd;

typedef struct s_minishell
{
	t_env	env;
	t_cmd	cmd;
	t_sig	sig;
	char	*name;
	t_token	*token;
}	t_minishell;

#endif