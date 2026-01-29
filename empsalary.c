#include <stdio.h>
int main() {
int code;
int exp;
int salary = 0;
scanf("%d %d", &code, &exp);
if(code == 1) salary = 50000;
else salary = 35000;
salary += exp * 5000;
printf("Salary ₹%d", salary);
return 0;
}
