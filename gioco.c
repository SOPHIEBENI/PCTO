#include <stdio.h>
int main()
{
char nome[5]= {'s','a','r','a','\0'};
int i= '0';
while(nome[i]!='\0' )
{
    printf("%C", nome [i]);
    i=i+1;
}
printf("%s",  nome);
char nome2[]="ciao come stai";
int utente;
char nomeutente [50];
scanf("%s", nomeutente);
printf("il tuo nome utente è: %s", nomeutente);
}