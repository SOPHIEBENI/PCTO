#include <stdio.h>
int main()
{
    int a;
    
    scanf("%d", &a);
    
    if (a==1969)
    {
    printf("l'utente è nato l'anno in cui l'uomo è andato sulla luna");
    }

    else if (a>1969)
    {
    printf("l'utente è nato %d anni dopo l'anno in cui l'uomo è andato sulla luna", a-1969);
    }

    else
    {
    printf("l'utente è nato %d anni prima dell'anno in cui l'uomo è andato sulla luna ", 1969-a);
    }
}