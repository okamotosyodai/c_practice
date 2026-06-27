#include <unistd.h>
#include <stdio.h>

int main()
{
    int a, b;
    a = getpid();
    b = fork();
    printf("Hello!!\n");
    return 0;
}
