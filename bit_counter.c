#include <stdio.h>
#include <stdint.h>
int main(){
uint32_t num = 0;
int n = 0;
printf("ECE 528/L - Carlos Bautista - HW1\n");
printf("Enter a non-negative integer: ");
int scanResult = scanf("%d", &n);
if (scanResult != 1 || n < 0)
{
    printf("Invalid input. Please enter a non-negative integer.\n");
    return 0;
}
num = (uint32_t) n;
int count = 0;
while (num != 0){
    num &= (num-1);
    count++;
}
printf("Number of bits set in %d: %d", n, count);
return 0;
}