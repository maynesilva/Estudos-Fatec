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
