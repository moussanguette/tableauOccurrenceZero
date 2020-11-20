#include<stdio.h>
int i,resultatScanf;/* declaration de deux valeurs ; i pour parcourir nos tableau et 
                        resultatScanf pour stocker la valeur de retour de la fonction scanf */
char c;//declaration d'une variable c de type caractere pour stocker le contenu de notre memoire afin de le vider
// la fonction permettant de saisir la dimension du tableau
int dimensionTableau(){
    int dimension,j=0;// la variable dimensin permet de stocker la dimension de notre tableau et la variable j est incrementé si on entre une valeur inatendue
    do
    {
        if (j!=0)//lorqu'on reviens dans la boucle pour une deuxieume fois j sera donc different de 0
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
// cette permet d'afficher les elements d'un tableau
void afficheTableau(int tab[],int dimension){
        for (i = 0; i < dimension; i++)
        {
            printf("%d\t",tab[i]);
        }
        printf("\n");
}

// cette foction permet de calculer la somme des element d'un tableau
int sommeTableau(int tab[], int dimension){
    int somme=0;
    for (i = 0; i < dimension; i++)
    {
        somme=somme+tab[i];
    }
    return somme;
}
// cette permet de supprimer les occurences de 0 dans tableau
int zeroOccurence(int tab[],int dimension){
    int j=0;
    for (int i = 0; i < dimension; i++)
    {
        tab[j]=tab[i];
        if (tab[i]!=0)
            j++;        
    }
    return j;
}

// cette fonction permet d'inverser les element du tableau entrer en paramettre
void inverseTableau(int tab[],int dimension){
    for(i=dimension-1;i>=0;i--)
        printf("%d\t",tab[i]);
    printf("\n");
}

// cette fonction permet de separer les nombres negatifs et positifs et les rapartir dans deux tableaux differents
void separationTableau(int tab[],int  dimension){
    int dimensionTableauPositive=0, dimensionTableauNegative=0, TPos[50], TNeg[50];
    for(i=0;i<dimension;i++){
        if (tab[i]>0)
        {
            TPos[dimensionTableauPositive]=tab[i];
            dimensionTableauPositive++;//cette variable initialié a 0 ne sera pas incrementée tant que TPos ne recois un valeur. donc c'est dimension du tableau TPos
        }
    }

    for(i=0;i<dimension;i++){
        if (tab[i]<0)
        {
            TNeg[dimensionTableauNegative]=tab[i];
            dimensionTableauNegative++;//cette variable initialié a 0 ne sera pas incrementée tant que TNeg ne recois un valeur. donc c'est dimension du tableau TNeg
        }
    }
    printf("les valeur positives du tableau :\n");
    afficheTableau(TPos, dimensionTableauPositive);// appel de la fonction afficherTablau pour afficher TPos
    printf("les valeur negative du tableau :\n");
    afficheTableau(TNeg, dimensionTableauNegative);// appel de la fonction afficherTablau pour afficher TNeg
}