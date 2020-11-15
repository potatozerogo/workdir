#include <stdio.h>
#include "mp3.h"

int play()
{
	printf("play music <%s>!\r\n",SONG);
	return 0;
}

int stop()
{
	printf("stop music <%s>!\r\n",SONG);
	return 0;
}

int repeat()
{
	printf("repeat music <%s>!\r\n",SONG);
	return 0;
}


