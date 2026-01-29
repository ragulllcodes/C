#include <stdio.h>
int main() {
int mode;
char cat;
scanf("%d %c", &mode, &cat);
if(mode == 1) {
    if(cat == 'R') 
    printf("₹5000");
    else 
    printf("₹3000");
} else {
    if(cat == 'R') 
    printf("₹9000");
    else 
    printf("₹7000");
}
return 0;
}
