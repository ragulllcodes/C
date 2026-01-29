#include<stdio.h>
int main(){
int a;
int b;
int lcm;
scanf("%d",&a);
scanf("%d",&b);
for(lcm=1;lcm<=a*b;lcm=lcm+1){
if(lcm%a==0&&lcm%b==0){
printf("%d",lcm);
break;
}
}
return 0;
}
