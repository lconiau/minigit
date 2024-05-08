#include "../include/minishell.h"

t_ast_node	*parseCommand(char **tok)
{
	t_ast_node	*command_node;
	t_ast_node	*pipe_node;
	t_ast_node	*redir_node;

	pipe_node = NULL;
	command_node = NULL;
	if (*tok == NULL)
		return (NULL);
	while (*tok != NULL)
	{
		if (ft_strcmp(*tok, "|" ) == 0)
		{
			pipe_node = malloc(sizeof(t_ast_node));
			pipe_node->type = NODE_PIPE;
			pipe_node->left = command_node;
			pipe_node->right = parseCommand((tok + 1));
			return (pipe_node);
		}
		else if (ft_strcmp(*tok, ">") == 0 || ft_strcmp(*tok, "<") == 0)
		{
			redir_node = malloc(sizeof(t_ast_node));
			redir_node->type = NODE_REDIRECT_APPEND;
			redir_node->left = command_node;
			redir_node->right = parseCommand((tok + 1));
			return (redir_node);
		}
		else
		{
			if (command_node == NULL)
			{
				command_node = malloc(sizeof(t_ast_node));
				command_node->type = NODE_COMMAND;
				command_node->args = tok;
				command_node->left = command_node->right = NULL;
			}
		}
		(tok)++;
	}
	return (command_node);
}
