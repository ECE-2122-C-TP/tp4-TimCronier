//
// Created by supti on 27/09/2021.
//
#include "exercice.h"
#include <stdio.h>
#include "mesfonctions.h"

void exo1() { printf("Le nombre le plus grand est %d" , getMax(14,17));}

void exo1DeuxiemeVersion() {
    int n1 = 0, n2 = 0;
    printf("l'entier 1 vaut : ");
    scanf("%d",&n1);
    printf("l'entier 2 vaut : ");
    scanf("%d",&n2);
    printf("Le nombre le plus grand est %d" , getMax(n1,n2));
}

void exo2() {
    int nombre = saisirEntier();
    printf("%d" , nombre);
}

void exo3() {
    int largeur = saisirEntier(), longueur = saisirEntier();
    printf("L'aire de ce rectangle vaut %d et son perimetre vaut %d" , calculAire(longueur,largeur) , calculPerimetre(longueur,largeur));
}

void exo4() {
        int n = saisirEntier(), test = 10;
        if (multipleDe(n,3) && n >= test) { printf("L'entier saisi est un multiple de 3 et est superieur ou egal a %d" , test); }
        else { printf("L'entier saisi n'est pas un multiple de 3 et superieur ou egal a %d." , test); }
}

void exo5() {
    int note1 = saisirEntier(), note2 = saisirEntier(), note3 = saisirEntier();
    if (note1 > 20 || note1 < 0 || note2 > 20 || note2 < 0 || note3 > 20 || note3 < 0) { printf("Erreur"); }
    else { printf("La moyenne est %f." , moyenne(note1,note2,note3)); }
}

void exo8up() {
    int n = saisirEntier();
    while (!multiple2ou7(n)) {
        printf("Ce nombre n'est pas valable. Veuillez recommencer : \n>");
        n = saisirEntier();
    }
    printf("Ce nombre est valable.");
}

void exo9up() {
    int nombrePierre = saisirEntier(), i = 1;
    while (nombrePierre > nombrePierreTotal(i)) {
        i++;
    }
    printf("Avec %d pierres, vous pouvez construire une pyramide de %d etages", nombrePierre, i - 2);
}


void exo10up() {
    int n = 0, nombreSaisi = 0, total = 0, nombrePositif = 1;

    while (nombrePositif) {
        printf("Veuillez saisir un nouveau nombre :\n>");
        scanf("%d", &nombreSaisi);
        if (nombreSaisi >= 0) {
            total = total + nombreSaisi;
            n++;
        } else { nombrePositif = 0; }
    }
    printf("La moyenne vaut %f." , moyenneN(total,n));
}

