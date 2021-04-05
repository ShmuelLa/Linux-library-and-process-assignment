#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        chdir("/");
        setsid();
        printf("Daemon started working in the background");
        close(stdout);
        close(stderr);
        close(stdin);
        openlog("myDaemon", LOG_PID, LOG_DAEMON);
        syslog(LOG_NOTICE, "First daemon task");
        usleep(1000000);
        syslog(LOG_NOTICE, "Second daemon task");
        usleep(1000000);
        syslog(LOG_NOTICE, "Third daemon task");
    }
    else {
        printf("Daemon PID %d \n", pid);
    }
    return 0;
}