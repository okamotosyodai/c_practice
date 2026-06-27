#include <stdio.h>
#include <unistd.h>
#include <pthread.h>   // pthread_*( )
#include <sys/syscall.h> // syscall()

int cnt = 0;

void info()
{
    printf("PID:%d, TID:%ld (%ld)\n",
        getpid(), syscall(SYS_gettid), pthread_self());
}

void *th_hello(void *arg)   // スレッド化できる関数
{
    info();   // プロセスやスレッドのIDを表示する
    while(1) {
        cnt++;
        usleep(1000 * 1);
    }
    return NULL;
}

int main()
{
    pthread_t th1;

    info();  // プロセスやスレッドのIDを表示する
    pthread_create(&th1, NULL, th_hello, NULL);
    pthread_detach(th1);

    while(1) {
        printf("%10d\r", cnt);
        fflush(stdout);
        usleep(1000 * 100);
    }

    return 0;
}
