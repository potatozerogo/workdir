#include <unistd.h>
#include <stdio.h>

int main(void)
{
	pid_t result;
	char *arg[] = {"env",NULL};
	char *env[] = {"PATH=/tmp","name=fire",NULL};
	result = fork();
	if(result == 0){
		execve("/usr/bin/env",arg,env);
		printf("error!\r\n");
		return -1;
	}
	return 0;

}
