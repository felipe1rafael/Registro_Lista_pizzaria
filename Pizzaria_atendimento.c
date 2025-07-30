#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Lista {
    int pedido;
    char cliente[30];
    char sabor[40];
    char tamanho[10];
    int atendido;
};

struct Lista Lista[200];

void adicionarNome(char nome[30]) {
	printf("Digite o nome: ");
    getchar();
    fgets(nome, 30, stdin);
    nome[strcspn(nome, "\n")] = '\0';
}

void adicionarSabor(char sabor[40]) {
    int op;
    printf("Escolha o sabor da pizza:\n");
    printf("[1] Calabresa\n");
    printf("[2] Mussarela\n");
    printf("[3] Frango\n");
    printf("[4] Portuguesa\n");
    printf("[5] Carne seca\n");
    scanf("%d", &op);

    switch (op) {
        case 1: strcpy(sabor, "Calabresa"); break;
        case 2: strcpy(sabor, "Mussarela"); break;
        case 3: strcpy(sabor, "Frango"); break;
        case 4: strcpy(sabor, "Portuguesa"); break;
        case 5: strcpy(sabor, "Carne seca"); break;
        default: strcpy(sabor, "Invalido"); break;
    }
}

void selecionarTamanho(char tamanho[10]) {
    int op;
    printf("Selecione o tamanho:\n[1] Pequena\n[2] Media\n[3] Grande\n");
    scanf("%d", &op);

    switch (op) {
        case 1: strcpy(tamanho, "Pequena"); break;
        case 2: strcpy(tamanho, "Media"); break;
        case 3: strcpy(tamanho, "Grande"); break;
        default: strcpy(tamanho, "Invalido"); break;
    }
}

int main() {
    int atendimento;
    int i = 0;
    int final = 0;
    int l;
    int j;

    for (l = 0; l < 200; l++) {
        Lista[l].atendido = 0;
    }

    do {
        system("cls");
        printf("==== MENU PIZZARIA ====\n");
        printf("[1] Novo pedido\n");
        printf("[2] Atender pedido\n");
        printf("[3] Ver fila\n");
        printf("[4] Encerrar programa\n");
        printf("=======================\n");
        scanf("%d", &atendimento);
        system("cls");

        if (atendimento == 1) {
            printf("=== Novo Pedido ===\n");
            Lista[i].pedido = i + 1;
            adicionarNome(Lista[i].cliente);
            adicionarSabor(Lista[i].sabor);
            selecionarTamanho(Lista[i].tamanho);
            printf("\nPedido %d registrado com sucesso!\n", Lista[i].pedido);
            i++;
            system("pause");
        } else if (atendimento == 2) {
            printf("=== Atender Pedido ===\n");
            int encontrado = 0;
            for (j = 0; j < i; j++) {
                if (!Lista[j].atendido) {
                    Lista[j].atendido = 1;
                    printf("Pedido %d de %s atendido!\n", Lista[j].pedido, Lista[j].cliente);
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado) {
                printf("Nenhum pedido na fila.\n");
            }
            system("pause");
        } else if (atendimento == 3) {
            printf("=== Fila de Pedidos ===\n");
            int vazio = 1;
            for (j = 0; j < i; j++) {
                if (!Lista[j].atendido) {
                    printf("Pedido %d: %s | %s | %s\n", Lista[j].pedido, Lista[j].cliente, Lista[j].sabor, Lista[j].tamanho);
                    vazio = 0;
                }
            }
            if (vazio) {
                printf("Não ha pedidos na fila.\n");
            }
            system("pause");
        } else if (atendimento == 4) {
            printf("Programa encerrado.\n");
        } else {
            printf("Opção invalida. Tente novamente.\n");
            system("pause");
        }

    } while (atendimento != 4);

    return 0;
}
