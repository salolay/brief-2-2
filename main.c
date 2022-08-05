#include <stdio.h>
#include <stdlib.h>

int factorielle(int nb){
    int fact, i;
    fact=1;
  for(i=1;i<=nb;i++){
   fact=fact*i;}
  return fact;
  }
  int main()
{
int nb;
do {
   printf("entrez un nombre nb\n ");
   scanf("%d", &nb);
}while(nb<0);
printf("la factorielle de %d!=%d \n",nb , factorielle(nb));

}
