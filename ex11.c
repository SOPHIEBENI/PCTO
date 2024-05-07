#include <stdio.h>
int main()
{
    int a = 19;
    
    printf("il tuo numero è:%d\n", a);
    
    if((a>18 && a<30))
    {
        printf("giovane ");
    }
    else if(a>60 && a<100)
    {
        printf("vecchio");
    }

}