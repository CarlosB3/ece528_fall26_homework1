#include <stdio.h>
int main(){
int a = 0;
int b = 1;
int c = 0;
int n = 0;
printf("ECE 528/L - Carlos Bautista - HW1\n");
printf("Enter N (2 or greater): ");
int scanResult = scanf("%d", &n);
if (scanResult != 1 || n < 2)
{
    printf("Invalid input. Please enter an integer 2 or greater.\n");
    return 0;
}
printf("Fibonacci sequence up to %d terms:\n", n);
    printf("%d ", a);
    printf("%d ", b);
for(int i = 0; i < n - 1; i++){
    c = a + b;
    a = b;
    b = c;
    printf("%d ", c);
}
printf("\n");
return 0;
}