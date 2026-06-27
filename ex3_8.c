
#include <stdio.h>   // fopen, fclose, fgetc, fputc
#include <unistd.h>  // usleep

int main(int argc, char *argv[]){
    FILE *fp;
    int ch;

    fp = (argc==1) ? stdin : fopen(argv[1], "rb");
    while(1){
        ch = fgetc(fp);
        if (ch == EOF){       // ファイルから1行読む
            break;
        }
        fputc(ch, stdout);    // printf("%c", ch); や putchar(ch); と同じ
        fflush(stdout);       // ここをコメントアウトすると....
        usleep(500*1000);
    }
    fclose(fp);
    return 0;
}
