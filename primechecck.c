#include<stdio.h>
int main(){
int n;
int count=0;
scanf("%d",&n);
for(int i=1;i<=n;i=i+1){
if(n%i==0)
count=count+1;
}
if(count==2)
printf("Prime");
else
printf("Not Prime");
return 0;
}
