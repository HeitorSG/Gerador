#include <stdio.h>
#include <stdlib.h>

int num;
int potencia;
int aux;
int resultado;

int main() {
scanf("%d", &num);
scanf("%d", &potencia);
if(potencia == 0)
resultado = 1;
else
{
resultado = num;
aux = 1;
while(aux < potencia)
{
resultado = resultado * num;
aux = aux + 1;
}
}
printf("O resultado é:\n");
printf("%d\n",resultado);
}
