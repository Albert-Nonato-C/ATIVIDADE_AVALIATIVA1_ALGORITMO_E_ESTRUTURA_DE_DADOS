#include <stdio.h>

int main() {
    //Discentes: Arthur Johann Costa Silva e Albert Nonato Costa Albuquerque
    //Criação de CRUD

    // Vetor para armazenar as notas
    int notas[100];

    // Variaveis de controle
    int quantidade = 0;
    int opcao = 0;
    int nota;
    int posicao;
    int i;

    //Menu
    while (opcao != 5) {
        printf("\n===== MENU CRUD =====\n");
        printf("1. Inserir nota\n");
        printf("2. Listar notas\n");
        printf("3. Atualizar nota\n");
        printf("4. Deletar nota\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        //CREATE
        if (opcao == 1) {
            if (quantidade < 100) {
                printf("Digite a nota: ");
                scanf("%d", &nota);

                notas[quantidade] = nota;
                quantidade++;

                printf("Nota inserida com sucesso!\n");
            } else {
                printf("Vetor cheio!\n");
            }
        }

        //READ
        else if (opcao == 2) {
            if (quantidade == 0) {
                printf("Nenhuma nota cadastrada.\n");
            } else {
                printf("\nNotas cadastradas:\n");

                for (i = 0; i < quantidade; i++) {
                    printf("Posicao %d: %d\n", i, notas[i]);
                }
            }
        }

        //UPDATE
        else if (opcao == 3) {
            if (quantidade == 0) {
                printf("Nenhuma nota para atualizar.\n");
            } else {
                printf("Digite a posicao da nota (0 ate %d): ",
                       quantidade - 1);
                scanf("%d", &posicao);

                if (posicao >= 0 && posicao < quantidade) {
                    printf("Digite a nova nota: ");
                    scanf("%d", &nota);

                    notas[posicao] = nota;

                    printf("Nota atualizada!\n");
                } else {
                    printf("Posicao invalida!\n");
                }
            }
        }

        //DELETE
        
