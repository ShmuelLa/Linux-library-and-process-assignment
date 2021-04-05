#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void print(const char *text) {
    for (int i=0; i<10; i++) {
        printf("This is %s \n", text);
        usleep(1000000);
    }
}

int main(){
    pid_t pid = fork();
    if (pid == 0) {
        print("nested process 1 ");
    }
    else {
        pid_t pid = fork();
        if (pid == 0) {
            print("nested process 2 ");
        }
        else print("main");
    }
    return 0;
}