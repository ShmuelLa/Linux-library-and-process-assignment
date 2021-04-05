#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define STACK_SIZE 10000
char child_stack[STACK_SIZE+1];

int main2_1(void *param) {
    char *args[]={"./main2_1", NULL};
    execvp(args[0], args);
    return 0;
}

int main2_2(void *param) {
    char *args[]={"./main2_2", NULL};
    execvp(args[0], args);
    return 0;
}

int main2_3(void *param) {
    char *args[]={"./main2_3", NULL};
    execvp(args[0], args);
    return 0;
}

int main()
{
    clone(main2_1, child_stack+STACK_SIZE, 0, 0);
    clone(main2_2, child_stack+STACK_SIZE, 0, 0);
    clone(main2_3, child_stack+STACK_SIZE, 0, 0);
    usleep(10000000);
    return 0;
}