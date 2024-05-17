#include "../../include/minishell.h"

int	init_shell(t_minishell *shell, char **envp, char *av)
{
	if (!shell)
		return (FAILURE);
	shell->name = av;
	shell->token = NULL;
	shell->cmd = NULL;
	if (init_env(shell, envp))
		return (FAILURE);
	incr_shell_lvl(gshell->env);
	//INIT_SIG
}
void	incr_shell_lvl(t_env *env)
{
	char	*shell_level_value;
	int		shell_lvl;
	
	while (env->next != NULL)
	{
		shell_level_value = ft_strdup(ft_strnstr(env->name, "SHLVL", 5) + 2);
		if (shell_level_value != NULL)
		{
			shell_lvl = ft_atoi(shell_level_value) + 1;
			ft_memdel(shell_level_value);
			ft_memdel(env->value);
			env->value = ft_itoa(shell_lvl);
			return ;
		}
		else
			ft_memdel(shell_level_value);
		env = env->next;
	}
	return (FAILURE);
}
