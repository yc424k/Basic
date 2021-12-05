#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    int pid, gid, status;
    printf("PARENT: PID = %d GID = %d \n", getpid(), getpgrp());
    pid = fork();
    if (pid == 0){
        setpgid(0, 0);
        printf("CHILD: PID = %d GID = %d \n", getpid(), getpgrp());
    }
    wait(&status);
}