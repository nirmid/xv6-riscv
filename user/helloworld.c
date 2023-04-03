#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{

    write(1, "hello world\n", strlen("hello world\n"));
    int pr = set_ps_priority(7);
    printf("priority: %d \n", pr);
    exit(0, "");
}