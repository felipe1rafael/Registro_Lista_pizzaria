#include <stdio.h>
#include <string.h>

int main (){
    int  atendimento;
    int i =0;
    int final =0;
    char lista[1000][5];

    do{
        printf("[1] Novo pedido\n[2] Atender Pedido\n[3] Ver fila\n[4]Encerrar progama\n");
        scanf("%d",&atendimento);
        if(atendimento == 1){

        }
        else if(atendimento==2){

        }
         else if(atendimento==3){
            for(int j=0;j<=i &&lista[j][5]== 0;j++){

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
char adicionarNome(char nome[50]){
printf("Digite o nome:");
gets(nome);
return nome;
}
char adicionarsabor(char Sabor[30]){
printf("\nDigite o sabor:");
gets(Sabor);
return Sabor;
}
char SelecionarTamanho(int Ntamanho){
char Tamanho[7];
Tamanho[6] ='\0';
printf("para o tamanho digite:\n[1]Pequena\n[2]Media\n[3]Grande\n");
scanf("%d",&Ntamanho);
for(int i=1;i>0;i++){
if(Ntamanho==1){
    Tamanho [0] ='P';
    Tamanho [1] ='e';
    Tamanho [2] ='q';
    Tamanho [3] ='u';
    Tamanho [4] ='e';
    Tamanho [5] ='n';
    Tamanho [6] ='a';
    break;
}
else if(Ntamanho==2){
    Tamanho [0] ='M';
    Tamanho [1] ='e';
    Tamanho [2] ='d';
    Tamanho [3] ='i';
    Tamanho [4] ='a';
    break;
}
else if(Ntamanho==3){
    Tamanho [0] ='G';
    Tamanho [1] ='r';
    Tamanho [2] ='a';
    Tamanho [3] ='n';
    Tamanho [4] ='d';
    Tamanho [5] ='e';
    break;
}
else{

}
}
}

