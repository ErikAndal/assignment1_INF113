#include <stdio.h>
#include <stdlib.h>

int main() {

    int l, h;
    if (scanf("%d %d", &l, &h) < 2 || h < 2)
        return 1;

    int *A = (int *)malloc(sizeof(int) * h);
    A[0] = 0, A[1] = 0;
    for (int i = 2; i <= h; i++)
        A[i] = 1;

    for (int i = 2; i * i <= h; i++) {
        if (A[i]) {
            for (int j = i * i; j <= h; j += i) {
                A[j] = 0;
            }
        }
    }

    for (int i = l; i <= h; i++) {
        if (A[i])
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}