#include <stdio.h>
int main() {
int type;
int trips;
scanf("%d %d", &type, &trips);
if(type == 1) {
if(trips == 1) printf("₹100");
    else printf("₹800");
} else {
    printf("₹%d", trips * 240);
}
    return 0;
}
