#include<stdio.h>
int main(){
    int a;
    int sum;
    scanf("%d", &a);
    for(int i=a; i>=10;i=i/10){
            sum = i/10;
         
    }
    printf("%d",sum);
}