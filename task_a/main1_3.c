#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <dlfcn.h>

void (*hello_ariel)(const char *);

bool init_library(){
    void *hdl = dlopen("./libHello.so", RTLD_LAZY);
    if (NULL == hdl) {
        printf("dlopen error \n");
        return false;
    }
    hello_ariel = (void(*)(const char *))dlsym(hdl,"hello_ariel");
    if (NULL == hello_ariel) {
        printf("dlsym error \n");
        return false;
    }
    return true;
}

int main() {
    if (init_library()) hello_ariel("SamSam");
    else printf("Error loading library\n");
    return 0;
}