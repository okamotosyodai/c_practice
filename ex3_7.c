
#include <stdio.h>   // fopen,fclose,fgets,fputs
#include <limits.h>  // LINE_MAX
#include <unistd.h>  // usleep

int main(int argc, char *argv[]){
    char buf[LINE_MAX];
    FILE *fp;

    fp = (argc==1) ? stdin : fopen(argv[1], "rb");
    while(1){
        if (fgets(buf, LINE_MAX, fp) == NULL){ // ファイルから1行読む
            break;
        }
        fputs(buf, stdout); // printf("%s",buf);やputs(buf);と同じ
        usleep(500*1000);
    }
    fclose(fp);
    return 0;
}
