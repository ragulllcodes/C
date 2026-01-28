#include <stdio.h>
int main() {
    int num;
    int count = 0;
    scanf("%d", &num);
    for (count = 0; num != 0; count++) {
        num /= 10;
        }
    printf("%d", count);
    return 0;
}