#include<stdio.h>
int main(){
    int size=7;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i==0 || j==0 || i==6 || j==6){
                printf("4 ");
            }
            else if(i==1 || j==1 || i==5 || j==5){
                printf("3 ");
            }
            else if(i==2 || j==2 || i==4 || j==4){
                printf("2 ");
            }
            else{
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}