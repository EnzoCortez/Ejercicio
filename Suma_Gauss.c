#include <stdio.h>
int num;
int i;
int s;



int main(){

printf("Ingrese un número");
scanf("%d",&num);

if (num<1)
{
    printf("Valor no valido");
}
else{
    for (i=1;i<=num; i++)
    {
        s=s+i;   
    }
    
}

printf("Su sumatoria de Gauss es %d", s);

}