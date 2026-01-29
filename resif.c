#include <stdio.h>
int main() {
int marks, att;
scanf("%d %d", &marks, &att);
if(att < 75)
    printf("Fail");
else if(marks >= 75)
    printf("Distinction");
else if(marks >= 50)
    printf("Pass");
else
    printf("Fail");
    return 0;
}
