#include <stdio.h>

int main() {
    int fact=1;
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is:%d",n,fact);

    return 0;
}