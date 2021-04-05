#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sched.h>
#include <unistd.h>

#define STACK_SIZE 10000
char child_stack[STACK_SIZE+1];

void print(const char *text) {
    for (int i=0; i<10; i++) {
        printf("This is %s \n", text);
        usleep(1000000);
    }
}

int child(void *params) {
    print("a clone");
}

int main() {
    int clone1 = clone(child,child_stack+STACK_SIZE,CLONE_PARENT,0);
    int clone2 = clone(child,child_stack+STACK_SIZE,CLONE_PARENT,0);
    print("main");
    return 0;
}