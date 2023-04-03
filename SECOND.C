#include <stdio.h>

int main() {
    int a, b, c;
    printf("请输入三个数");
    scanf("%d%d%d", &a, &b, &c);

    int min = a < b ? (a < c ? a : c) : (b < c ? b : c);
    int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    int mid = (a + b + c) - min - max;

    printf("%d %d %d\n", min, mid, max);

    return 0;
}
