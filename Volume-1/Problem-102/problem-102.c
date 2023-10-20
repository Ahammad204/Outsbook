#include <stdio.h>

int main() {
    int D, Q, R;
    scanf("%d %d %d", &D, &Q, &R);

    int divisor = (D - R) / Q;
    printf("%d\n", divisor);

    return 0;
}
