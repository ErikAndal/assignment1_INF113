#include <ctype.h>
#include <stdio.h>

int main() {
    char *s = NULL;
    size_t n = 0, l;

    l = getline(&s, &n, stdin);
    for (int i = 0; i < l; i++)
        s[i] = toupper(s[i]);
    printf("%s", s);

    return 0;
}