/* C Program to Print Sum of Odd Numbers from 1 to N */
 
#include<stdio.h>
 
int main()
{
  int i, number;
 
  printf("\n Please Enter the Maximum Limit Value : ");
  scanf("%d", &number);
  
  printf("\n Odd Numbers between 0 and %d are : ", number);
  for(i = 1; i <= number; i++)
  {
  	if ( i%2 != 0 ) 
  	{
  		printf("%d  ", i);
  	}  
 }
  return 0;
}