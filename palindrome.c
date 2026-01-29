#include<stdio.h>
int main(){
int n;
int temp;
int rev=0;
scanf("%d",&n);
for(temp=n;temp>0;temp=temp/10){
rev=rev*10+(temp%10);
}
if(rev==n)
printf("Yes");
else
printf("No");
return 0;
}
