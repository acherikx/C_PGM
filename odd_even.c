#include <stdio.h>
 
void main()
{
    int ival, remainder;
 
    printf("Enter an integer : ");
    scanf("%d", &ival);
    remainder = !(ival & 1);
    if (remainder == 0)
        printf("%d is an even integer\n", ival);
    else
        printf("%d is an odd integer\n", ival);
}