#include<stdio.h>
int main(){
int n;
int count=0;
scanf("%d",&n);
for(int i=2;i<=n;i=i+1){
int c=0;
for(int j=1;j<=i;j=j+1){
if(i%j==0)
c=c+1;
}
if(c==2)
count=count+1;
}
printf("%d",count);
return 0;
}
