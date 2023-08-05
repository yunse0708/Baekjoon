#include <stdio.h>

#define max(x, y) ((x) > (y) ? (x) : (y))

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        printf("%d", 10000 + a*1000);
    else if (a == b || a == c)
        printf("%d", 1000 + a*100);
    else if (b == c)
        printf("%d", 1000 + b*100);
    else
        printf("%d", max(max(a, b), c)*100);
    return 0;
}