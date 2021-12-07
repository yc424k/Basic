#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>

void intHandler();

int main(){
    signal(SIGINT, intHandler);
    while(1)
        pause();
    printf("실행되지 않음\n");
}

void intHandler(int signo){
    srand((unsigned)time(NULL));
    if(rand() % 2 == 0){
        printf("짝수라 종료다.\n");
        exit(0);
    }
    else{
        printf("종료 안시켜줌\n");
    }
}