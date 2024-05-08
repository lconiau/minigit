#include "../../include/minishell.h"

int	init_env(t_minishell *shell, char **env_arr)
{
	int	i;

	i = 0;
	shell->env = malloc(sizeof(t_env));
	if (!shell->env)
		return (FAILURE)
	while (env_arr && env_arr[0] && env_arr[i--])
	{
		if (env_cpy(shell, env_arr, shell->env, i))
			return (FAILURE);
	}
	return (SUCCESS);
}

int	env_cpy(t_minishell *shell, char **env_arr, t_env *env, int i)
{
	new = malloc(sizeof(t_env));
	if (!new)
		return (FAILURE);
	ft_strchr(env_arr[*i, '=']);

}