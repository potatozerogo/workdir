#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    pid_t result;
    result = fork();

    if(result == -1)
        printf("fork error!\r\n");
    if(result == 0)
    {
        printf("parent");
        _exit(0);
    }
    else
    {
        printf("son");
        exit(0);
    }
}

