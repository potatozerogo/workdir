#include <unistd.h>
#include <stdio.h>

int main()
{
	pid_t i;
	printf("before fork!\r\n");
	i = fork();
	printf("after fork,pid=%d.\r\n",i);
	return 0;

}
