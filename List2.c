#include <unistd.h>
#include <stdio.h>
int main()
{
    char wbuf[256];
    int n;
    n=sprintf(wbuf, "(o_o)"); //メモリ上に文字列を書き出し
    write(1, wbuf, n);
    n=sprintf(wbuf, "...bye\n"); //メモリ上に文字列を書き出し
    write(1, wbuf, n);
    return 0;
}
