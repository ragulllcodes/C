#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    int quo = a%b;
    int rem = a/b;
    printf("quotient : %d",quo);
    printf("reminder : %d",rem);
    return 0;
}
  