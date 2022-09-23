#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int *a = NULL, *b = NULL, x, y;

    if (scanf("%d %d", &x, &y) < 2)
        return 1;

    a = &x, a = &y;
    swap(a, b);

    printf("%d %d\n", *a, *b);

    return 0;
}