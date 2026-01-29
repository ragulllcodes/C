#include <stdio.h>
int main() {
int type;
int score;
scanf("%d %d",&type,&score);
if(type==1) {
if(score >= 700) printf("Approved");
    else if(score >= 650) printf("Manual Review");
    else printf("Rejected");
} else {
    if(score >= 700) printf("Approved");
    else printf("Rejected");
}
return 0;
}
