#include <stdio.h>
#include <string.h>
struct Lista{
    int pedido;
    char cliente[30];
    char sabor[40];
    char tamanho[10];
    int atendido;
};
struct Lista Lista[200] ;

int main (){
    int  atendimento;
    int i =0;
    int final =0;
    do{
        printf("[1] Novo pedido\n[2] Atender Pedido\n[3] Ver fila\n[4]Encerrar progama\n");
        scanf("%d",&atendimento);
        if(atendimento == 1){

        }
        else if(atendimento==2){

        }
         else if(atendimento==3){

        }
         else if(atendimento==4){
            printf("\nProgama encerrado");
        }
        else{
                printf("\nNumero incorreto tente novamente ");
            }
    }while (atendimento!= 4);
    return 0;
}
void adicionarNome(char nome[50]){
printf("Digite o nome:");
fgets(nome,sizeof(nome),stdin);
fflush(stdin);
}
void adicionarsabor(char Sabor[30]){
printf("\nDigite o sabor:");
fgets(Sabor,sizeof(Sabor),stdin);
fflush(stdin);
}
void selecionarTamanho(char tamanho[10]) {
    int op;
    printf("Para o tamanho digite:\n[1] Pequena\n[2] Media\n[3] Grande\n");
    scanf("%d", &op);

    switch (op) {
        case 1:
            strcpy(tamanho, "Pequena");
            break;
        case 2:
            strcpy(tamanho, "Media");
            break;
        case 3:
            strcpy(tamanho, "Grande");
            break;
        default:
            strcpy(tamanho, "Invalido");
            break;
    }
}



