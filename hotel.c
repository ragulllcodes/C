#include <stdio.h>
int main() {
int room;
char season;
scanf("%d %c", &room, &season);
if(room == 1) {
    if(season == 'A') printf("₹2500");
        else printf("₹2000");
    } else {
        if(season == 'C') printf("₹4000");
        else printf("₹3000");
    }
    return 0;
}
