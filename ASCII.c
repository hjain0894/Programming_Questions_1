#include <stdio.h>
int main() 
{  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    printf("ASCII value of the character %c = %d", c, c);
    
    return 0;
}