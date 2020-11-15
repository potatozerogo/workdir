#include <unistd.h>
#include <stdio.h>

int main(void)
{
	pid_t result;
	result = fork();
	if(result == 0){
		execlp("ls","-l",NULL);
		printf("error!\r\n");
		return -1;
	}
	return 0;

}
