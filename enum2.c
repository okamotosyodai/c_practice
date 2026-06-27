#include <stdio.h>
int main(void) {
     enum {SEP=9,OCT,NOV,DEC,JAN=1,FEB,MAR,APR};
     printf("SEP : %d\n",SEP);
     printf("OCT : %d\n",OCT);
     printf("NOV : %d\n",NOV);
     printf("DEC : %d\n",DEC);
     printf("JAN : %d\n",JAN);
     printf("FEB : %d\n",FEB);
     printf("MAR : %d\n",MAR);
     printf("APR : %d\n",APR);
}
