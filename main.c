#include <stdio.h>

//header
#define MAX_AGE 100
#define MIN_AGE 0
#define MAJOR 18
 
 
void afficher_resultat(int x);
int calculer_somme(int x, int y);
int majeur(int age);
void afficher_age(int age);
 
// test if x is greater
int est_plus_grand(int x, int y);
// test if x is smaller
int est_plus_petit(int x, int y);
// test if x is equal
int est_egal(int x, int y);
// return max value
int le_plus_grand(int x, int y);
// return min
int le_plus_petit(int x, int y);

int est_impaire(int x);
 
 
 
int main()
{
    int g = 6;
    int f = 24;
    int a = 5;
 
    afficher_resultat(calculer_somme(5, 10));
 
    afficher_resultat(calculer_somme(g, f));
 
    afficher_age(18);
    afficher_age(17);
    afficher_age(100);
    afficher_age(-10);
    
    if(est_impaire(a) == 0)
      printf("%d est paire \n", a);
    else
      printf("%d est impaire \n", a);
}
 
 
 
 
void afficher_resultat(int x)
{
    printf("le résultat est de : %d\n", x);
}
 
int calculer_somme(int x, int y)
{
    return x + y;
}
 
int majeur(int age) {
    if(age >=18 && age < MAX_AGE)
      return 1;
    else if(age <= MAJOR && age > MIN_AGE)
      return 0;
    else
      return -1;
}
 
void afficher_age(int age)
{
    if (majeur(age)==1)
      printf("%d : majeur\n", age);
    else if(majeur(age)==0)
      printf("%d : mineur\n", age);
    else
      printf("%d : erreur\n", age);
}

int est_impaire(int x) {
  return x % 2;
}



