#include <stdio.h>

int main()
{
    int num, swapped;
    int first, last, digits;

    printf("Enter any number: ");
    scanf("%d", &num);

    last  = num % 10;

    digits     = (int)log10(num); 

    first = (int)(num / pow(10, digits)); 

    swapped  = last;
    swapped *= (int) pow(10, digits);
    swapped += num % ((int) pow(10, digits));
    swapped -= last;
    swapped += first;

    printf("Original number = %d\n", num);
    printf("Number after swapping first and last digit: %d", swapped);

    return 0;
}