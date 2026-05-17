//Cálculo de Média Ponderada  
//O usuário informa três notas e seus respectivos pesos. O programa deve calcular a média ponderada e informar se o aluno foi aprovado (média ≥ 7), em recuperação (média entre 5 e 6.9) ou reprovado (média < 5).

#include<stdio.h>

int main (){

float nota1, peso1, nota2, peso2, nota3, peso3, nota;


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


