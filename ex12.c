#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("è un triangolo");
    }
    else
    {
        printf("non è un triangolo");
    }
    if ((a==b) && (b==c) && (c==a))
    {
        printf(" equilatero");
    }
    else if ((a==b) || (b==c) || (c=a))
    {
    printf(" isoscele");
    }
    else
    {
    printf(" scaleno");
    }
    

}