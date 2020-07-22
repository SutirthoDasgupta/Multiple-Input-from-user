#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("Please enter the three numbers you want to add");
    scanf ("%d",&a );
    scanf ("%d",&b );
    scanf ("%d",&c );
    d=a+b+c;
    printf("The sum of %d + %d + %d = %d ",a,b,c,d);

    return 0;
}
