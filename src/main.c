//Exercice 1
#include <stdio.h>

int main(void)
{
    for (int i = 10; i >= 1; i--){
        printf("%d\n", i);
    }
    return 0;
}

#include <stdio.h>

//Exercice 2 

#include <stdio.h>

int main(void)
{
    int i = 0;
    int nombre_utilisateur;
    int resultat;
    printf("Veuillez choisir le nombre entier de votre choix.\n");
    scanf("%d", &nombre_utilisateur);
    resultat += nombre_utilisateur;
    while (i < nombre_utilisateur){
        resultat += i;
        i++;
    }
    printf("Resultat : %d.\n", resultat);
}
