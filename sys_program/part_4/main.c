
#include <sys/wait.h>
#include <sys/type.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    pid_t result;
    int status;
    result = fork();

    if(result == -1)
        printf("error!\r\n");

    if (result == 0)
    {
        printf("son!\r\n");
        exit(0);
    }
    else
    {
        wait(&status);
        if (WIFEXITED(status) == 1)
        {
            printf("exit value:%d\r\n",WEXITSTATUS(status));
        }
        return 0;
    }
    

}