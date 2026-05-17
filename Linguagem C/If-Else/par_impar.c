//Par ou Ímpar  
//Leia um número e diga se ele é par ou ímpar.

#include<stdio.h>

int main(){

int numero;

printf("Qual o numero? ");
scanf("%i", &numero);

if (numero %2==0){
    printf("Numero: %i - par", numero);
}else{
    printf("Numero: %i - impar", numero);
}

}