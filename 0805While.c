#include<stdio.h>

//funcao para mostrar o menu. Ele vai ficar se repetindo.

void mostrarMenu(){

printf("\n == MENU == \n");
printf (" 1 - somar pedido \n");
printf(" 0 - sair \n");
printf ("Escolha: ");

}


float somar(float a, float b){

//parametro: uma base de comparacao. Declarar parametro dentro dos parenteses. Nesse caso, os parametros sao float a e float b

return a + b;

}


int main(){

//aparecer primeiro o menu para o usuario. Colocamos -1 pois de 0 pra cima eh opcao que o usuario vai digitar e se futuramente quiser colocar mais opcoes, nao precisa mudar o codigo.
int opcao = -1;

while( opcao != 0){
    mostrarMenu();
    scanf("%d", &opcao);

    //cria o if para usuario escolher apenas entre 1 e 0, o que ele escrever fora disso, caira no else if.
    if (opcao == 1){
     float valor1, valor2, resultado;

printf("Digite o primeiro valor: ");
scanf("%f", &valor1);

printf("Digite o segundo valor: ");
scanf("%f", &valor2);

//parametro vai se espelhar nos valores:

resultado = somar(valor1, valor2);

printf("Total: %.2f\n", resultado);


    }else if(opcao == 0){
    printf("Sistema Encerrado \n");
}else {
printf("Opcao Invalida \n");
}
}

}
