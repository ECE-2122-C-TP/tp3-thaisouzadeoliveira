#include <stdio.h>
#include "exercices.h"

int exercice1(int nb1, int nb2)
{
    if(nb1>nb2)
    {
        return nb1;
    }

    else if (nb1<nb2)
    {
        return nb2;
    }
}

void exercice2(int largeur, int longueur)
{
  printf("Le périmètre du rectangle vaut: %d \n", 2*largeur+2*longueur);
  printf("L'aire du rectangle vaut: %d \n", largeur*longueur);
}

void exercice3(int entier)
{
    const int trois=3;

    (entier % trois == 0)
    ? printf("%d est un multiple de 3 \n", entier)
    : printf("%d n'est pas un multiple de 3 \n", entier);

    (entier >= 10)
    ? printf("%d est supérieur ou égal à 10 \n", entier)
    : printf("%d est inférieur à 10 \n", entier);

}

#define TARIF_ENFANT 4
#define TARIF_JEUNE 6
#define TARIF_SENIOR 6
#define TARIF_PLEIN 9

void exercice4(int age)

{
    int etudiant;
    printf("Etes vous étudiant? Si oui rentrer 1, sinon rentrer 0: \n");
    scanf("%d", &etudiant);

    if (etudiant == 1 && age < 27)
    {
        printf("Le tarif est: %d \n", TARIF_JEUNE);
    }

    else
    {

        if (age < 12)
        {
            printf("Le tarif est: %d \n", TARIF_ENFANT);
        }

        else if (age >= 12 && age <= 17)
        {
            printf("Le tarif est: %d \n", TARIF_JEUNE);
        }

        else if (age >= 65)
        {
            printf("Le tarif est: %d \n", TARIF_SENIOR);
        }

        else
        {
            printf("Le tarif est: %d \n", TARIF_PLEIN);
        }

    }

}

void exercice5()

{   int numeroBoisson;
    printf("Saisissez un numéro de boisson:");
    scanf("%d", &numeroBoisson);

    if (numeroBoisson==1)
    {
        printf("Vous avez choisi la boisson: Coca-Cola");
    }

    else if (numeroBoisson==2)
    {
        printf("Vous avez choisi la boisson: Sprite");
    }

    else if (numeroBoisson==3)
    {
        printf("Vous avez choisi la boisson: Ice-Tea");
    }

    else if (numeroBoisson==10)
    {
        printf("Vous avez choisi la boisson: Café");
    }

    else if (numeroBoisson==11)
    {
        printf("Vous avez choisi la boisson: Thé");
    }

    else
    {
        printf("ERREUR. Veillez saisir 1, 2, 3, 10 ou 11.");
    }

}


void exercice6()
{
    float note1, note2, note3;

    printf("Saisissez 3 notes sur 20:");
    scanf("%f %f %f", &note1, &note2, &note3);

    while (note1>20 || note1<0)
    {
        printf("La note1 saisie n'est pas valide, recommencez.\n");
        scanf("%f", &note1);
    }

    while (note2>20 || note2<0)
    {
        printf("La note2 saisie n'est pas valide, recommencez.\n");
        scanf("%f", &note2);
    }

    while (note3>20 || note3<0)
    {
        printf("La note3 saisie n'est pas valide, recommencez.\n");
        scanf("%f", &note3);
    }

    printf("La moyenne des 3 notes vaut: %f\n", (note1+note2+note3)/3);

}


void exercice7()
{
    int nombreClasses, i, nombreElevesClassei=0 ,nombreTotalEleves;

    printf("Saisir le nombre de classes ouvertes: \n");
    scanf("%d", &nombreClasses);

    for (i=1; i<nombreClasses+1; i++)
    {
       printf("Saisir le nombre d'élèves de la classe n° %d\n", i);
       scanf("%d", &nombreElevesClassei);
       nombreTotalEleves=nombreTotalEleves+nombreElevesClassei;
    }

    printf("Le nombre total d'élèves est de: %d\n", nombreTotalEleves);
}


void exercice8()
{
    int MultipleDe2EtDe7;

    printf("Saisissez un entier multiple de 2 et de 7: \n");
    scanf("%d", &MultipleDe2EtDe7);

    while(MultipleDe2EtDe7 % 2 != 0 || MultipleDe2EtDe7 % 7 != 0)
    {
      printf("L'entier saisi n'est pas valide, recommencez: \n");
      scanf("%d", &MultipleDe2EtDe7);
    }

    printf("L'entier %d est un multiple de 2 et de 7. \n", MultipleDe2EtDe7);
}


void exercice9()
{
    int nombreDePierres, pierresRestantes, pierresUtilisées=0, nombreEtages=1;

    printf("Saisir le nombre de pierres disponibles \n");
    scanf("%d", &nombreDePierres);

    pierresRestantes=nombreDePierres;

    while(pierresRestantes >= nombreEtages*nombreEtages)
    {

           pierresUtilisées = nombreEtages * nombreEtages;
           pierresRestantes = pierresRestantes - pierresUtilisées;
           nombreEtages++;

    }

    nombreEtages--;

    printf("Avec %d pierres on peut réaliser %d étages", nombreDePierres, nombreEtages);

}


void exercice10()
{
    int n=0, ValeursMoyenne=0, nombreValeurs=0;

    do
    {
        printf("Saisissez un entier positif a rajouter à la moyenne \n si vous avez terminé saisir un entier negatif: \n");
        scanf("%d", &n);

        ValeursMoyenne=ValeursMoyenne+n;
        nombreValeurs++;
    }

    while(n>=0);

    ValeursMoyenne=ValeursMoyenne-n;
    nombreValeurs--;

    printf("La moyenne des valeurs rentrées vaut: %d", ValeursMoyenne/nombreValeurs);

}