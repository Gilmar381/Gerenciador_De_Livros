#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    char nomeLivro[100];
    char nomeSolicitante[100];
    char cpf[15];
    char dataEmprestimo[20];
} RegistroLivro;

void registrarEmprestimo(RegistroLivro *registro) {
    printf("Digite o nome do livro: ");
    fgets(registro->nomeLivro, 100, stdin);
    registro->nomeLivro[strcspn(registro->nomeLivro, "\n")] = '\0'; // Remove o '\n'

    printf("Digite o nome do solicitante: ");
    fgets(registro->nomeSolicitante, 100, stdin);
    registro->nomeSolicitante[strcspn(registro->nomeSolicitante, "\n")] = '\0';

    printf("Digite o CPF do solicitante: ");
    fgets(registro->cpf, 15, stdin);
    registro->cpf[strcspn(registro->cpf, "\n")] = '\0'; // Remove o '\n'

    printf("Digite a data do emprestimo (dd/mm/aaaa): ");
    fgets(registro->dataEmprestimo, 20, stdin);
    registro->dataEmprestimo[strcspn(registro->dataEmprestimo, "\n")] = '\0';
}

void exibirRegistro(const RegistroLivro *registro) {
    printf("\n--- Registro de Emprestimo ---\n");
    printf("Nome do Livro: %s\n", registro->nomeLivro);
    printf("Nome do Solicitante: %s\n", registro->nomeSolicitante);
    printf("CPF: %s\n", registro->cpf);
    printf("Data do Emprestimo: %s\n", registro->dataEmprestimo);
}

int main() {
    RegistroLivro registro;

    registrarEmprestimo(&registro);
    exibirRegistro(&registro);

    return 0;
