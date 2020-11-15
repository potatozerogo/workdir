#include <unistd.h>
#include <stdio.h>

int main(void)
{
	pid_t result;
	char *arg[] = {"ls","-l",NULL};
	result = fork();
	if(result == 0){
		execv("/bin/ls",arg);
		printf("error!\r\n");
		return -1;
	}
	return 0;

}
