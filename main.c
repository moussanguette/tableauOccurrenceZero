/*
    Ecrire un programme qui lit la dimension N d'un tableau T du type int (dimension maximale: 50 composantes), 
    remplit le tableau par des valeurs entrées au clavier et affiche le tableau.

    Effacer ensuite toutes les occurrences de la valeur 0 dans le tableau T et 
    tasser les éléments restants. Afficher le tableau résultant.
*/
#include<stdio.h>
#include"header.h"

int main(){
    int N;// la variable pour stocker la dimensiondu tableau
    printf("Donner la taille du tableau :\n");
    N=dimensionTableau();// appel a la fonction dimension
    int T[N];// declaration du tableau de N dimension
    remplirTableau(T,N);// appel a la fonction remplirTableau
    afficheTableau(T,N);// appel a la fonction aficherTableau
    int somme=sommeTableau(T,N);//appel a la fonction somme
    printf("tableau finale :\n");
    zeroOccurence(T,N);// appel a la fonction zeroOccurence
    printf("la somme est %d\n",somme);// affichage de la somme du tableau
    //testOccurence(T,N);
}