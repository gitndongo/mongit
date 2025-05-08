#include <stdio.h>
int main () {
    int a,b,c;
    c=9;
    printf( "je suis la %-7d nice\n", c);
    float t=7.8 ;
    printf ("vous avez une moyenne de %f \n", t) ;
    printf ("vous avez une moyenne de %.2f\n", t) ;
    printf("ce ci est mon programme pour verifier mes connaissance sur les structure de controle \n");
    printf ("veillez entrer un nombre compris entre 0-10");
    scanf("%d", &b);
    if ( b < 0 || b > 10 )
    {  printf("le nombre doit etre compris entre 0 et 10 ") ; }
        else 
        { printf("vous avez reuissi "); 
    printf ("toi aussi do ngaka 0 ba 10 tu mets %d\n", b);}
    printf("veillez entrer le numeeero du mois: ");
    scanf ("%d", &c);
    switch (c)
    {
    case 1:
        printf("le mois est janvier");
        break;
    case 2: printf("le mois est fevrier");
        break;
    case 3: 
            printf("le mois est mars");
        break;
    case 4:
            printf("lemois est avril");
        break;
        case 5:
        printf("lemois est mai");
        break;
    default: printf("toi tu vis le futur");
        break;
    }
    return 0;
}