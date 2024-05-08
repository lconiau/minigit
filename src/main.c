#include "../include/minishell.h"

// void	print_ast(t_ast_node *node, int level)
// {
// 	if (node == NULL)
// 		return ;
// 	int i = 0;
// 	while (i < level)
// 	{
// 		printf(" ");
// 		i++;
// 	}
// 	switch (node->type)
// 	{
// 	case NODE_COMMAND:
// 		printf("CMD: %s\n", node->args);
// 		for (int i = 0; i < node->; i++)
// 		{
// 			/* code */
// 		}
		
// 		break;
	
// 	default:
// 		break;
// 	}
	
// }

int main(int argc, char **argv, char **envp)
{
    char	*line;
	int		exec;
	t_command *cmd;
	t_ast_node	*node;

	node = NULL;
	exec = 1;
    while (exec)
    {
		cmd = new_command();
		line = readline("lconiau>");
		if (line == NULL)
			exec = 0;
		else if (line && *line)
			add_history(line);
		parse_input(line, cmd);
		int i = 0;
		while (cmd->args[i] != NULL)
		{
			printf("arg %d,%s\n", i, cmd->args[i]);
			i++;
		}
		if (cmd->args[0] != NULL)
		{
			node = parseCommand(cmd->args);
			if (node->type != NODE_PIPE)
				printf("argNode :%s\n", node->args[0]);
		}
		free(line);
		free(cmd);
	    // executer_commande(commande)
    }
	return (0);
}
