#include<stdio.h>
int main(){
    int a;
    int temp=0;
    int count=1;
    int next;
    scanf("%d", &a);
    for(int i=0; i<=5; i++){
        if(i<=1){
            next = i;
        }
        else{
            next = temp + count;
            temp = count;
            count = next;
        }
        printf("%d ", next);


    }

}