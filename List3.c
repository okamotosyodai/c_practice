#include <unistd.h> //read(), write()
#include <stdio.h> //sprintf()

int main()
{
    char wbuf[256];
    int n, cnt=15;
    while(cnt--){
         n=sprintf(wbuf,"...%d", cnt);
         write(1, wbuf, n);
         usleep(1000*200);
    }
    write(1, "\n", 1);
    return 0;
}
