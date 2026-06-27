#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main()
{
  int a=100, b=200, c=300,d=400;
  b = open("/etc/passwd",O_RDONLY);
  c = fork();
  a = getpid();
  if ( c == 0){
       d++;
       printf("Hello\n");
  }
  printf("a:%d, b:%d, c:%d, d:%d\n",a,b,c,d);
  printf("World!\n");
  close(b);
  return 0;
}

