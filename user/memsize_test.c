#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{

    int curr_memory = memsize();
    printf("current memeory: %d \n", curr_memory);
    int *allocate_memory = (int *)malloc(20000);
    curr_memory = memsize();
    printf("memeory after allocation: %d \n", curr_memory);
    free(allocate_memory);
    curr_memory = memsize();
    printf("memeory after free: %d \n", curr_memory);
    exit(0, "");
}