#include <stdio.h>
#include <stdlib.h>
int main()
{
int exponente, numero, i, operacion=1;

printf("\tIngrese el numero\n");
scanf("\t%d",&numero);
printf("\tIngrese el numero del exponente\n");
scanf("\t%d",&exponente);
for(i=1;i<=exponente;i++)
    {
    operacion = operacion * numero;
    }
printf("\t\t%d\n",operacion);
system("pause");
return 0;
}
