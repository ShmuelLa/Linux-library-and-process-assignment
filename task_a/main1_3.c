#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <dlfcn.h>

void (*hello_message)(const char *);

bool init_library(){
    void *hdl = dlopen("./libHello.so", RTLD_LAZY);
    if (hdl == NULL) {
        printf("dlopen error \n");
        return false;
    }
    hello_message = (void(*)(const char *))dlsym(hdl,"hello_message");
    if (hello_message == NULL) {
        printf("dlsym error \n");
        return false;
    }
    return true;
}

int main() {
    if (init_library()) hello_message("SamSam");
    else printf("Error loading library\n");
    return 0;
}