#include "../include/minishell.h"

static void	env_print(t_env *env)
{
	if (!env->is_empty)
		ft_printf("%s=%s\n", env->key, env->val);
}

int	ft_env(t_list *cmd)
{
	if ((t_token *)cmd->next)
	{	
	}
}