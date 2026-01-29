#include <stdio.h>
int main() {
int cat;
int dist;
scanf("%d %d", &cat, &dist);
if(cat == 1) {
    if(dist <= 30) 
    printf("Eligible");
    else 
    printf("Eligible with Extra Fee");
    }
     else {
    if(dist <= 30) 
    printf("Eligible");
    else printf("Not Eligible");
    }
    return 0;
}
