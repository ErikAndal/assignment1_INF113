#include <stdio.h>
#include <stdlib.h>

int fib(int n, int *dp) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
        
    if (dp[n] < 0)
        dp[n] = (fib(n - 1, dp) + fib(n - 2, dp)) % 10;

    return dp[n];
}

int main() {

    int n;
    if (scanf("%d", &n) < 1)
        return 1;

    int *dp = (int *)malloc(sizeof(int) * (n + 1));
    for (int i = 0; i <= n; i++)
        dp[i] = -1;

    printf("%d\n", fib(n, dp));

    free(dp);

    return 0;
}