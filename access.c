#include <stdio.h>
int main() {
int role;
int time;
scanf("%d %d", &role, &time);
if(role == 1)
    printf("Full Access");
else {
    if(time >= 9 && time <= 18)
        printf("Limited Access");
    else
        printf("Access Denied");
    }
    return 0;
}
