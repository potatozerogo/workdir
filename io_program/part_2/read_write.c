#include <sys/types.h>//open()依赖的库
#include <sys/stat.h>//open()依赖的库
#include <fcntl.h>//open()依赖的库
#include <unistd.h>//read()write()close()依赖的库
#include <stdio.h>

int main(int argc,char** argv)
{
	int fd1,fd2;
	char buff[512];
	int read_size;
	
	if(argc != 3)
	{
		printf("Parameter Error !!\r\n");
		return -1;
	}

	fd1 = open(argv[1],O_RDONLY);
	fd2 = open(argv[2],O_WRONLY | O_CREAT,0666);
	if(fd1 < 0 || fd2 < 0 )
	{
		printf("Open file error!!\r\n");
		return -1;
	}
	
	while(1)
	{
		read_size = read(fd1,buff,512);
		if(read_size == 0)
			break;
		write(fd2,buff,read_size);
	}
	
	close(fd1);
	close(fd2);
	return 0;
	
}

