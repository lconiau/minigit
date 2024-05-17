#include "../../include/minishell.h"

int	init_env(t_minishell *shell, char **envp)
{
	int	i;

	i = 0;
	shell->env = malloc(sizeof(t_env));
	if (!shell->env)
		return (FAILURE)
	while (envp && envp[0] && envp[++i])
	{
		if (env_cpy(shell, envp, i))
			return (FAILURE);
	}
	return (SUCCESS);
}

int	env_cpy(t_minishell *shell, char **envp, int i)
{
	char 	*temp;
	t_env	new;

	new = malloc(sizeof(t_env));
	if (!new)
		return (FAILURE);
	temp = ft_strchr(envp[*i], '=');
	if (temp != NULL)
	{
		new->name = ft_strndup(envp[i], temp - envp[i]);
		new->value = ft_strdup(ft_strchr(envp[i], '=') + 1);
	}
	else
	{
		new->name = ft_strdup(envp[i]);
		new->value = NULL;
	}
	new->next = NULL;
	shell->env->next = new;
	shell->env = new;
	shell->env = shell->env-
	return (SUCCESS);
}
int main (int argc, char **argv, char **envp)
{

}