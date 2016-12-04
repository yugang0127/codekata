#include <stdio.h>
#include <string.h>

void print_reverse(char *s) {
    size_t len = strlen(s);
    char *t = s + len - 1;

    while (t >= s) {
        printf("%c", *t);
        t = t -1;
    }

    puts("");
}

int main() {
    char *juices[] = {
        "Life", "beautiful", "Hello", "interesting"
    };

    print_reverse(juices[2]);

    return 0;
}
