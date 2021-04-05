#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    char * args[2] = {"./main1_1",NULL};
    execvp(args[0],args);
    return 0;
}