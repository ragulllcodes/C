#include <stdio.h>
int main() {
int cls, age;
int fare = 0;
scanf("%d %d", &cls, &age);
switch(cls){
    case 1:fare=300;
        if(age<12)
        fare/= 2;
        else if(age >= 60) 
        fare = fare * 0.67;
        break;
    case 2: fare = 1000;
        if(age < 12) 
        fare /= 2;
        break;
    }
printf("Fare %d", fare);
return 0;
}
