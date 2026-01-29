#include <stdio.h>
int main() {
int cat;
int age;
scanf("%d %d", &cat, &age);
if(cat == 1) {
    if(age <= 5) 
    printf("₹1500");
    else 
    printf("₹2500");
} else {
    if(age <= 5) 
    printf("₹4000");
    else 
    printf("₹6000");
    }
    return 0;
}
