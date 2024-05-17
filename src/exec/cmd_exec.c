#include "../../include/minishell.h"

void	cmd_exec(t_minishell *shell)
{
	shell->cmd = shell->h_cmd;
	ft_pipe(shell, shell->h_cmd);
	while(/*nb de cmd*/)
	{
		waitpid();
		close_fds;
		shell->cmd = shell->cmd->next;
	}
	
}

void	ft_pipe(t_minishell *shell, t_cmd cmd)
{
	int		pipefd[2];
	
	while (/*NB de cmd*/)
	{
		handle_fd(shell->cmd);
		if (!cmd->out && cmd->next && !cmd->next->in)
		{
			pipe(cmd->fd);
			if (!cmd->in)
				cmd->fd[0] = pipefd[0];
			else
				close(pipefd[0]);
			cmd->fd[1] = pipefd[1];
		}
		nxt = shell->cmd->next;
		shell->cmd->pid = exec(shell, cmd);

	}	
}

pid_t	exec(t_minishell *shell, t_cmd cmd)
{
	pid_t pid;

	pid = fork()
	if  (!pid)
		return ();
	if (pid == 0)
	{
		close(cmd->fd[0]);
		dup2(cmd->fd[1], 1);
		close(cmd->fd[1]);
		if (shell->cmd->builtin == NONE)
		{
			execve(cmd->cmd[0], cmd->cmd, shell->env)
		}
	}
}
