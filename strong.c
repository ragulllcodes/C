#include<stdio.h>
int main(){
int n;
int temp;
int d;
int sum=0;
scanf("%d",&n);
temp=n;
for(temp=n;temp>0;temp=temp/10){
d=temp%10;
int fact=1;
for(int i=1;i<=d;i=i+1){
fact=fact*i;
}
sum=sum+fact;
}
if(sum==n)
printf("Yes");
else
printf("No");
return 0;
}
