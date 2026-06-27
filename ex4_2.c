#include <unistd.h>    // dup2(), usleep()
#include <fcntl.h>     // O_RDONLY, O_WRONLY, O_CREAT, O_TRUNC
#include <stdio.h>     // printf(), fgets()

int main()
{
    char buf[16];
    int fdi, fdo;
    fdi = open("/etc/os-release", O_RDONLY);
    fdo = open("out.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);
    dup2(fdi, 0);     // 標準入力(FD:0)を /etc/os-release に切り替え
    dup2(fdo, 1);     // 標準出力(FD:1)を ./out.txt に切り替え
    close(fdi);
    close(fdo);
    while ((fgets(buf, 16, stdin)) != NULL) {   // EOFが入力されるまで
        usleep(200*1000);
        printf("%s", buf);
    }

    return 0;
}
