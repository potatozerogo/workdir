ARCH?=x86

ifeq ($(ARCH),x86)
	CC=gcc
else
	CC=arm-linux-gnueabihf-gcc
endif

TARGET=mp3
OBJS=main.o mp3.o

$(TARGET):$(OBJS)
	$(CC) $^ -o $@

#main.o:main.c
#	$(CC) -c main.c -o main.o

#mp3.o:mp3.c 
#	$(CC) -c mp3.c -o mp3.o


%.o:%.c
	$(CC) -c $< -o $@

.PHONY:clean

clean:
	rm mp3 *.o 
