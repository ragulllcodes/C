#include <stdio.h>
int main() {
int type, hours;
scanf("%d %d", &type, &hours);
if(type == 1)
    printf("Parking Fee ₹%d", hours * 10);
else
    printf("Parking Fee ₹%d", hours * 20);
    return 0;
}
