#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    int stat;
    int rc = fork();

    if (rc == 0) {
        printf("I am a child. My status is %d\n", 5);
        exit(5);
    } else if (rc > 0) {
        int cpid = wait(&stat);

        if (WIFEXITED(stat)) {
            printf("Child %d terminated with status: %d\n", cpid, WEXITSTATUS(stat));
        }
    }
    return 0;
}