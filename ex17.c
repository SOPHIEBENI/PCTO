#include <stdio.h>
int main()
{
    int num;
    int div;
    int c=0;
    printf("inserisci un numero:\n");
    scanf("%d", &num);
    
    div=num-1;
    while( div > 1 )
    {
        if(num%div==0)
        {
            c=c+1;
        }
        div=div-1;

    }
    if(c==0)
    {
        printf("il tuo numero è primo\n");
    }
    else
    {
        printf("il tuo numero non è primo\n");
    }
}