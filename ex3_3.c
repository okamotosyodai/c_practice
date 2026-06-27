#include <stdio.h>
#include <unistd.h>
int main()
{
    char wbuf[256];
    int n, cnt=15;
    while (cnt--){
        n=sprintf(wbuf,"...%d", cnt);
        fwrite(wbuf, 1,n,stdout);
        fflush(stdout);
        usleep(1000*200);
    }
    fwrite("\n",1,1,stdout);
    return 0;
}
