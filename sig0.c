#include <unistd.h>
#include <signal.h>
#include <stdio.h>

int cnt = 0;

void myfunc00(int signum)
{
    printf("(*_*) %d\n", cnt);
}

void myfunc01(int signum)
{
    cnt = 0;
    printf("(0_0)\n");
}

int main()
{
    signal(SIGINT,  myfunc00);
    signal(SIGUSR1, myfunc01);

    printf("PID:%d\n", getpid());

    while (1) {
        cnt++;
        usleep(100 * 1000);
    }
    return 0;
}
