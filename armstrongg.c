#include<stdio.h>
int main(){
int n;
int temp;
int d;
int sum=0;
scanf("%d",&n);
for(temp=n;temp>0;temp=temp/10){
d=temp%10;
sum=sum+d*d*d;
}
if(sum==n)
printf("Yes");
else
printf("No");
return 0;
}
