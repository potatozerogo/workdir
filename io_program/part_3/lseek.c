#include <sys/types.h>//open()依赖的库
#include <sys/stat.h>//open()依赖的库
#include <fcntl.h>//open()依赖的库
#include <unistd.h>//read()write()close()lseek()依赖的库

int main()
{
	int fd;
	fd = open("file.txt",O_RDWR | O_CREAT,0666);
	write(fd,"abc",3);
	lseek(fd,100,SEEK_CUR);
	write(fd,"123",3);
	sync();
	close(fd);
	return 0;

}


