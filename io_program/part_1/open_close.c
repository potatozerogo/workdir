#include <sys/types.h>//open()依赖的库
#include <sys/stat.h>//open()依赖的库
#include <fcntl.h>//open()依赖的库
#include <unistd.h>//close()依赖的库
#include <stdio.h>

int main()
{
	int fd;
	fd = open("./b.txt",O_RDONLY|O_CREAT,0666);
	if(fd < 0)
	{
		printf("open file error!!\r\n");
	
	}
	printf("FD: %d !!\r\n",fd);
	close(fd);
	return 0;
}

