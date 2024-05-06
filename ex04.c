    #include <stdio.h>

int main()
{
    int d; 
    float e = 4.512; //%f
    double f = 7.6123456; //%lf
    //%c ???
    d = 3;
    printf("somma: %f\n", d+e); // identificatore per int: %d
    float differenza = d-e;
    printf("differnza: %f\n", differenza);
    float divisione = d/e;
    printf("divisione: %f\n", divisione); 
    printf("moltiplicazione: %f\n", d*e);
    float moltiplicazione = d*e;
}