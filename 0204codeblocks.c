#include<stdio.h>

int main (){

float nota1;
float peso1;
float nota2;
float peso2;
float nota3;
float peso3;
float nota;

printf("Qual a primeira nota e o peso dela? ");
scanf("%f %f", &nota1, &peso1);

printf("Qual a segunda nota e o peso dela? ");
scanf(" %f %f", &nota2, &peso2);

printf("Qual a terceira nota e o peso dela? ");
scanf(" %f %f", &nota3, &peso3);

nota = (nota1*peso1)+(nota2*peso2)+(nota3*peso3)/ (peso1 + peso2 + peso3);

if (nota >= 7){
    printf("Nota: %.2f, Aprovado", nota);
}else if (nota >=5 && nota <= 6.9){
printf("Nota: %.2f, Recuperacao", nota);
}else{
printf("Nota: %.2f, Reprovado", nota);
}

}


