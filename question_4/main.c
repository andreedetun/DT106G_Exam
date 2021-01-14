#include<stdio.h>
#include <stdlib.h>

int main() {
    int *x = malloc(sizeof(int));
    scanf("%d", x);
    *x = *x * 10;
    printf("%d", *x);

    free(x);
    return 0;
}

/* the code that was failing.
 int main() {
    int *x;
    scanf("%d", x);
    *x = *x * 10;
    printf("%d", *x);
    return 0;
}*/