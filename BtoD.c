#include<stdio.h>
int main(){
int a;
int b;
int dec=0;
int tot=1;
scanf("%d",&a);
for(int i=a;i>0;i=i/10){
b=i%10;
dec=dec+b*tot;
tot=tot*2;
}
}
printf("%d",dec);
return 0;
}
