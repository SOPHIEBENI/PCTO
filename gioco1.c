#include <stdio.h>
int main()

{
char nomeutente[50];
int scelta;

printf("inserisci il tuo nome\n");
scanf(" %s", nomeutente);

printf("ALLA RICERCA DEL TESORO PERDUTO\nIn un antico tempio nascosto nella giungla dei Maya si dice che sia custodito un tesoro insetimabile. Tu, giovane archeologo esperto di civiltà antiche, decidi di addentrarti nella giungla per trovarlo.\nArrivato nella giungla ti trovi davanti ad un bivio: quale strada sceglierai?\n1) strada di destra\n2) strada di sinistra\n");
scanf(" %d", &scelta);

if(scelta==1)
{
    printf("Arrivi direttamente davnti all'entrata del tempio\n");
}
else if(scelta==2)//scelta 2
{
    printf("Trovi la strada bloccata, decidi di tornare indietro e passare per la strada secondaria\n");
}

printf("Arrivi al tempio ma davanti alla porta trovi un serpente velenoso\nCosa fai?\n1) fuggi\n2) combatti\n");
scanf(" %d", &scelta);

if(scelta==1)
{
    printf("Spaventato mentre fuggi nella giungla vieni divorato da un branco di macachi\nGAME OVER\n");
}
else if(scelta==2)//scelta 2
{
    
    printf("Ipnotizzi il serpente velenoso con la tua arma segreta, un flauto magico e prosegui nel tempio. Ti trovi davanti a due portali\nCosa scegli?\n1) Il portale d'oro\n2) Il portale d'argento\n");
    scanf(" %d", &scelta);
    
    if(scelta==1)
    {
        
        printf("Incontri il dio azteco Kamal.\nLui ti pone il seguente quesito: laddove l'acqua scorre ma non scappa, li troverai il tesoro perduto di Kartam\nProvi a risolvere il quesito nella speranza di trovare il tesoro\n1) Cerchi in una fontana\n2) Cerchi in un ruscello\n3) Cerchi in un pozzo\n");
        scanf(" %d", &scelta);

        if(scelta==1)
        {
            printf("Trovi il tesoro e diventi l'archeologo più stimato del mondo\nCONGRATULAZIONI HAI VINTO\n");
        }
        else if(scelta==2)
        {
            printf("Cercando il tesoro ti sporgi troppo e cadi nel ruscello\nGAME OVER\n");
        }
        else //scelta 3
        {
            printf("Scendi nel pozzo ma vieni mangiato dal guardiano del tesoro di Kartam\n");
        }
    
    }
    else if(scelta==2)
    {
        printf("La stanza è piena di sabbie mobile in cui affondi\nGAME OVER\n");
    }
}

}