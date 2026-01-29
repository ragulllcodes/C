#include <stdio.h>
int main() {
int plan;
int pay;
int amount;
scanf("%d %d", &plan, &pay);
if(plan == 1) amount = 199;
else amount = 399;
if(pay == 11 || pay == 12)
amount -= 20;
printf("%d", amount);
return 0;
}
