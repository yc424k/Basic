#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int pid, gid, child, status;
    pid = fork();
    if (pid == 0)
    {
        printf("CHILD: PID = %d GID = %d\n", getpid(), getpgrp());
    }
    else
    {
        wait(&status);
        printf("PARENT: PID = %d GID = %d \n", getpid(), getpgrp());
    }
}