ARCH?=x86

ifeq ($(ARCH),x86)
	CC=gcc
else
	CC=arm-linux-gnueabihf-gcc
endif

TARGET=read_write
#OBJS=main.o mp3.o
BUILD_DIR=build

SRC_DIR=.

INC_DIR=.

CFLAGS=$(patsubst %,-I%,$(INC_DIR))

SOURCES=$(foreach dir,$(SRC_DIR),$(wildcard $(dir)/*.c))

INCLUDES=$(foreach dir,$(INC_DIR),$(wildcard $(dir)/*.h))

OBJS=$(patsubst %.c,$(BUILD_DIR)/%.o,$(notdir $(SOURCES)))

VPATH=$(SRC_DIR)


$(BUILD_DIR)/$(TARGET):$(OBJS)
	$(CC) $^ -o $@

#main.o:main.c
#	$(CC) -c main.c -o main.o

#mp3.o:mp3.c 
#	$(CC) -c mp3.c -o mp3.o


$(BUILD_DIR)/%.o:%.c $(INCLUDES) | create_build
	$(CC) -c $< -o $@ $(CFLAGS)

.PHONY:clean create_build

clean:
	rm -r $(BUILD_DIR)
	
create_build:
	mkdir -p $(BUILD_DIR)
	
	
