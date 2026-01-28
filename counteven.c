#include<stdio.h>
int main(){
    int a;
    int count = 0;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
         a = a/10;
        if(a%2==0){
            count = count + 1;
        }
    }
    printf("%d", count);
    return 0;
}