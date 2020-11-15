#include <stdio.h>
#include <unistd.h>
#include "beep.h"

int main(int argc, char *argv[])
{
    char buf[10];
    int res;
    printf("This in the beep demo!!\n");

    res = beep_init();
    if(res){
            printf("beep init error,code = %d\n",res);
            return 0;
    }

    while(1){
        printf("Please input the value : 0--off 1--on 1--exit\n");
        scanf("%10s",buf);

        switch (buf[0]){
            case '0':
                beep_off();
                break;

            case '1':
                beep_on();
                break;
            case 'q':
                beep_deinit();
                printf("Exut\n");
                return 0;
            default:
                break;
        }
    }


}
