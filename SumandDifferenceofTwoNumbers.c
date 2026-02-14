#include <stdio.h>

int main() {
    int n, m;
    float x, y;

    scanf("%d %d", &n, &m);
    
    scanf("%f %f", &x, &y);

    printf("%d %d\n", n + m, n - m);
    
    printf("%.1f %.1f\n", x + y, x - y);

    return 0;
}