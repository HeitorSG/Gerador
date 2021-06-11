#include <stdio.h>
#include <stdlib.h>

int numero1;
int numero2;
int numero3;
int aux;

int main() {
scanf("%d", &numero1);
scanf("%d", &numero2);
scanf("%d", &numero3);
if(numero1 > numero2)
{
aux = numero2;
numero2 = numero1;
numero1 = aux;
}
if(numero1 > numero3)
{
aux = numero3;
numero3 = numero1;
numero1 = aux;
}
if(numero2 > numero3)
{
aux = numero3;
numero3 = numero2;
numero2 = aux;
}
printf("%d\n",numero1);
printf("%d\n",numero2);
printf("%d\n",numero3);
}
