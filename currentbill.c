#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    switch (a){
        case 1:
        if (b<100)
        {
            int amount = b*3;
            printf("Bill : %d",amount);
        }
        else if(b>100)
        {
            int new = b-100;
            int amount = new*5;
            int ct = b-new;
            int total = amount + ct*3;
            printf("Bill : %d",total);
        }
        break;
        case 2:
        if (b<100)
        {
            int amount = b*7;
            printf("Bill : %d",amount);
        }
        else if(b>=100)
        {
            int new = b-100;
            int amount = new*10;
            int ct = b-new;
            int total = amount + ct*7;
            printf("Bill : %d",total);
        }
        break;
    }
    }