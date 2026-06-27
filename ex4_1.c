#include <unistd.h>

int main()
{
    char buf[256];
    int len;
    dup2( 0, 10);
    dup2( 1, 11);
    close(0);
    close(1);
    while((len=read(10,buf,256))!=0){
        usleep(500*1000);
        write(11,buf,len);
    }
    return 0;
}
