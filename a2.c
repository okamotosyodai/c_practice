#include <stdio.h>
int main(void) {
    int N, X;
    int A;
    int found = 0;
    scanf("%d %d", &N, &X);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A);
        if (A == X) {
            found = 1;
        }
    }
    if (found == 1) {
        printf("Yes\n");
    }else {
        printf("No\n");
    }

    return 0;
}

