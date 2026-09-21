#include <stdlib.h>
#include <stdio.h>
int main(){

int num = 0;
printf("ECE 528/L - Carlos Bautista - HW1\n");
printf("Enter an integer: ");

scanf("%d", &num);

if(num > 0)
{
    printf("%d is positive\n", num);
}
else if(num < 0)
{
    printf("%d is negative\n", num);
}
else 
{
    printf("%d is zero\n", num);
}
int absolute = abs(num);
printf("Absolute value: %d \n", absolute);

    return 0;
}
