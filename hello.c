#include <stdio.h>

#define DIVIDOR 10
#define M 1000

int main()
{
    printf("Hello, world!\n");
    
    int a[M] = {0};
    for (int i = 0; i < M; i++) {
        a[i] = i % DIVIDOR;
        printf("%4d", a[i]);
        if ((i + 1) % 20 == 0) printf("\n");
    }

    return 0;
}