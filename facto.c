#include<stdio.h>
int main(){
    int a;
    int sum = 1;
    scanf("%d", &a);
    for(int i=a; i>=1;i--){
        sum *= i;
    }
    printf("%d",sum);

}