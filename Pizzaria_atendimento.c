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
          printf("\n--- Novo Pedido ---\n");
            Lista[i].pedido = i + 1;
            adicionarNome(Lista[i].cliente);
            adicionarSabor(Lista[i].sabor);
            selecionarTamanho(Lista[i].tamanho);
            Lista[i].atendido = 0;
            printf("Pedido %d registrado com sucesso!\n", lista[i].pedido);
            i++;
        }
        else if(atendimento==2){

        }
         else if(atendimento==3){
         for(int j= 0;j<=i;j++){
            printf("Pedido %d: %s - %s - %s\n",
       Lista[j].pedido, Lista[j].cliente, Lista[j].sabor, Lista[j].tamanho);

         }
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
void adicionarNome(char nome[30]) {
    printf("Digite o nome: ");
    getchar();
    fgets(nome, 30, stdin);
    nome[strcspn(nome, "\n")] = '\0';
}

void adicionarSabor(char sabor[40]) {
    printf("Digite o sabor da pizza: ");
    getchar();
    fgets(sabor, 40, stdin);
    sabor[strcspn(sabor, "\n")] = '\0';
}

void selecionarTamanho(char tamanho[10]) {
    int op;
    printf("Para o tamanho digite:\n[1] Pequena\n[2] Media\n[3] Grande\n");
    scanf("%d", &op);

    switch (op) {
        case 1: strcpy(tamanho, "Pequena"); break;
        case 2: strcpy(tamanho, "Media"); break;
        case 3: strcpy(tamanho, "Grande"); break;
        default: strcpy(tamanho, "Invalido"); break;
    }
}



