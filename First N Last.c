#include <stdio.h>
#include <math.h>

int main()
{
    int n, first, last, digit;

    
    printf("Enter any number: ");
    scanf("%d", &n);

    
    last = n % 10;     

    
    digit = (int)log10(n); 

    first = (int)(n / pow(10, digit)); 

    printf("First digit = %d\n", first);
    printf("Last digit = %d\n", last);

    return 0;
}