//Senha simples  
//O usuário digita um número inteiro como “senha” e outro como código. 
//O programa deve verificar se a senha e o código são iguais a um valor pré-definido (por exemplo, 1234) e dizer se o acesso está liberado ou não.

#include<stdio.h>

int main(){

int senha;
int codigo;

printf("Digite sua senha: \n");
scanf("%i", &senha);

printf("Digite o codigo: \n");
scanf("%i", &codigo);

if(senha == 1234 && codigo == 456){
    printf("Acesso Liberado");
}else{
printf("Acesso Negado");
}

}