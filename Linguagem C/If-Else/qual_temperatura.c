//Temperatura suspeita  
//O usuário informa uma temperatura em graus Celsius. O programa deve verificar se está abaixo de zero, entre zero e 30 ou acima de 30, e avisar em qual faixa ela se encontra.

#include<stdio.h>

int main(){

    int temperatura;

    printf("Qual a temperatura (em celcius) ");
    scanf("%i", &temperatura);

    if (temperatura < 0){
        printf("Temperatura abaixo de 0");
    }else if (temperatura >= 0 && temperatura <=30){
        printf("Temperatura entre 0 e 30 graus");
    }else{
        printf("Temperatura acima de 30 graus");
    }
}