//Verificação de Triângulo 
//O usuário informa três lados. O programa deve verificar se eles formam um triângulo (a soma de dois lados deve ser maior que o terceiro). Se formar, deve classificar como equilátero, isósceles ou escaleno. 

#include<stdio.h>

int main (){

float primeiro, segundo, terceiro;

printf("Qual o primeiro lado? ");
scanf("%f", &primeiro);

printf("Qual o segundo lado? ");
scanf("%f", &segundo);

printf("Qual o terceiro lado? ");
scanf("%f", &terceiro);

if ( primeiro + segundo > terceiro && primeiro + terceiro > segundo && segundo + terceiro > primeiro){
    printf ("Eh um triangulo ");

    if ( primeiro == segundo && segundo == terceiro){
        printf("Equilatero");
    }else if (primeiro == segundo || primeiro == terceiro || segundo == terceiro){
        printf("Isosceles");
    }else{
        printf("Escaleno");}
}else{
    printf("Nao eh um triangulo");
}

}

