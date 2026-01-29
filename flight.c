#include <stdio.h>
int main() {
int cls; 
int weight;
scanf("%d %d", &cls, &weight);
if(cls == 1)
    printf("Extra Baggage Charge %d", weight * 300);
else {
    if(weight <= 3)
        printf("Free");
else
    printf("Extra Baggage Charge %d", (weight - 3) * 300);
    }
    return 0;
}
