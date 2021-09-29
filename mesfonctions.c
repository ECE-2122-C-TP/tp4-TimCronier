//
// Created by supti on 27/09/2021.
//

#include <stdio.h>
#include "mesfonctions.h"

/* Fonction qui renvoie le plus grand entier parmi 2 entiers.
 * Paramètres :
 * - IN : nombre1 et nombre2, 2 entiers.
 * - OUT : l'entier le plus grand parmi les 2.
 */
int getMax(int nombre1,int nombre2) {
    if (nombre1 > nombre2) { return nombre1; }
    else { return nombre2; }
}

/* Fonction qui permet à l'utilisateur de saisir un entier.
 * Paramètres :
 * - OUT : la valeur de l'entier rentré.
 */
int saisirEntier() {
    int entier = 0;
    printf("Veuillez saisir un entier :\n>");
    scanf("%d" , &entier);
    return entier;
}

/* Fonction qui donne l'aire d'un rectangle.
 * Paramètres :
 * - IN : longueur et largeur, respectivement la longueur et la largeur du rectanle étudié.
 * - OUT : son aire.
 */
int calculAire(int longueur, int largeur) {
    return longueur*largeur;
}

/* Fonction qui donne le périmètre d'un rectangle.
 * Paramètres :
 * - IN : longueur et largeur, respectivement la longueur et la largeur du rectanle étudié.
 * - OUT : son périmètre.
 */
int calculPerimetre(int longueur, int largeur) {
    return 2*longueur + 2*largeur ;
}

/* Fonction qui vérifie qu'un entier soit multiple d'un autre.
 * Paramètres :
 * - IN : entier1, le nombre dont la multiplicité avec entier2 nous intéresse.
 * - OUT : 1 si entier1 est multiple de entier2, 0 sinon.
 */
int multipleDe(int entier1, int entier2) {
    if (entier1 % entier2 == 0) { return 1; }
    else { return 0; }
}

/* Fonction qui donne la moyenne de 3 notes.
 * Paramètres :
 * - IN : note1, note2 et note3, les 3 notes dont la moyenne nous intéresse.
 * - OUT : la moyenne des 3 notes.
 */
float moyenne(int note1, int note2, int note3) {
    return (note1 + note2 + note3)/3 ;
}

/* Fonction qui vérifie qu'un entier est multiple de 7 ou de 2.
 * Paramètres :
 * - IN : n, le nombre (entier) dont on veut vérifier la multiplicité avec 7 ou 2.
 * - OUT : 1 si le nombre est multiple de 7 ou 2, 0 sinon.
 */
int multiple2ou7(int n) {
    if (n%7 == 0 && n%2 == 0) { return 1; }
    else { return 0; }
}

/* Fonction qui donne le nombre de pierres sur une pyramide de i étage(s).
 * Paramètres :
 * - IN : i, le nombre d'étages que l'on souhaite sur notre pyramide. (entier)
 * - OUT : total, le nombre de pierre sur la pyramide de i étage(s). (entier)
 */
int nombrePierreTotal(int i) {
    int total = 0, k = 0;
    for (k=1; k<i; k++) { total = total + k*k; }
    return total;
}

/* Fonction qui donne la moyenne de N valeurs.
 * Paramètres :
 * - IN : somme, la somme des N valeurs | N, le nombre de valeur dans la somme
 * - OUT : la moyenne des N valeurs.
 */
float moyenneN(float somme, int N) {
    return somme/N;
}