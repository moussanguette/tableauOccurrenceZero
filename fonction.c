#include<stdio.h>
int i,resultatScanf;/* declaration de deux valeurs ; i pour parcourir nos tableau et 
                        resultatScanf pour stocker la valeur de retour de la fonction scanf */
char c;//declaration d'une variable c de type caractere pour stocker le contenu de notre memoire afin de le vider
// la fonction permettant de saisir la dimension du tableau
int dimensionTableau(){
    int dimension,j=0;// la variable dimensin permet de stocker la dimension de notre tableau et la variable j est incrementé si on entre une valeur inatendue
    do
    {
        if (j!=0)//lorqu'on reviens dans la boucle pour une deuxieume fois j sera different de 0
        {
            printf("vous devez entrer un entier compris entre 2 et 50 \n");//ce message sera afficher si l'utisateur n'a pas un nombre valable
        }
        
        resultatScanf=scanf("%d",&dimension);
        while ( ((c = getchar()) != '\n') && c != EOF);// on vide la memoire cache
        j++;
    } while (resultatScanf!=1 || dimension<2 || dimension>50);
    
    
    return dimension;
}

//la fonction permettant de parcourir et remplir le tableau 
void remplirTableau(int tab[],int dimension){
    for (i = 0; i < dimension; i++)
    {
        do
        {
            printf("donner l'element %d du tableau\n",i+1);
            resultatScanf=scanf("%d",&tab[i]);
            while ( ((c = getchar()) != '\n') && c != EOF);
        } while (resultatScanf!=1);
        
        
    }
}

void afficheTableau(int tab[],int dimension){
        for (i = 0; i < dimension; i++)
        {
            printf("%d\t",tab[i]);
        }
        printf("\n");
}

int sommeTableau(int tab[], int dimension){
    int somme=0;
    for (i = 0; i < dimension; i++)
    {
        somme=somme+tab[i];
    }
    return somme;
}

void zeroOccurence(int tab[],int dimension){
    for (i = 0; i < dimension; i++)
    {
        if (tab[i]!=0)
            printf("%d\t",tab[i]);
    }
    printf("\n");
}
/*
void testOccurence(int tab[],int dimension){
    for (int i = 0; i < dimension; i++)
    {
        for (int j = 1; j<dimension; j++)
        {
            if (tab[i]!=tab[j])
            {
                printf("%d",tab[i]);break;--
            }
            
        }
        
    }
    
}
*/