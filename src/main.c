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
    int resultat = 0;
    printf("Veuillez choisir le nombre entier de votre choix.\n");
    scanf("%d", &nombre_utilisateur);
    resultat += nombre_utilisateur;
    while (i < nombre_utilisateur){
        resultat += i;
        i++;
    }
    printf("Resultat : %d.\n", resultat);
}

///Exercice 3

#include <stdio.h>

int main(void)
{
    int nombre_utilisateur;
    printf("Veuillez choisir un nombre entier.\n");
    scanf("%d", &nombre_utilisateur);
    for (int i = 1; i <= 10; i++){
        printf("%d X %d = %d\n", nombre_utilisateur, i, nombre_utilisateur * i);
    }
}

//Exercice 4

int main(void)
{
    for (int i = 10; i >= 1; i--){
        printf("%d\n", i);
        if (i == 1){
            printf("Décollage !\n");
        }
    }
    return 0;
}

//Exercice 5

#include <stdio.h>

int main(void)
{
    int i = 1;
    while (i <= 50){
        if (i % 2 == 0){
            printf(" %d --", i);
        }
        i++;
    }
    return 0;
}

//Exercice 6

#include <stdio.h>

int main(void)
{
    int n;
    int resultat = 1;

    printf("Veuillez choisir un entier n.\n");
    scanf("%d", &n);

    for (int i = n; i > 0; i--){
        resultat = resultat * i;
    }
    printf("Resultat : %d\n", resultat);
}

//Exercice 7
