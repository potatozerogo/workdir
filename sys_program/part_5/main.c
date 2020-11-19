
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

#define MAXFILE 3

int main()
{
    pid_t pid;
    int fd,len,i,num;
    char *buf = "the daemon is running\n";

    len = strlen(buf)+1;

    /*创建子进程，干掉父进程*/
    pid = fork();
    if(pid < 0)
    {
        printf("fork fail\n");
        exit(1);
    }

    if(pid > 0)
        exit(0);

    /*创建新对话，拍拖终端的影响*/
    setsid();

    /*改变当前工作目录*/
    chdir("/");

    /*重设文件权限掩码*/
    umask(0);

    /*关系默认的文件描述符*/
    for ( i = 0; i < MAXFILE; i++)
    {
        close(i);
    }

    /*实现守护进程的功能*/
    while (1)
    {
        fd = open("/var/log/daemon/log",O_CREAT|O_WRONLY|O_APPEND,0666);
        write(fd,buf,len);
        close(fd);
        sleep(5);
    }
    
    


}
