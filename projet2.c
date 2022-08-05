#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,fact, nb;
    fact=1;
    printf("entrez le numéro \n :");
    scanf("%d", &nb);
    if(nb<0)
        printf("le factoriel est impossible!");
    else
        for(i=1;i<=nb;i++){
            fact*=i;
            printf(" le factoriel de numero est : %d \n",fact);
        }

    return 0;
}
