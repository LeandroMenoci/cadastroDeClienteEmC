#include <stdio.h>

struct dados {
    int codigo;
    char nome[50];
    int idade;
    char sexo;
    float salario;
};

struct dados cliente[5];

void imprimirDados(struct dados c[]) {
    printf("\n--- DADOS DOS CLIENTES ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Cliente %d\n", i + 1);
        printf("Código: %d\n", c[i].codigo);
        printf("Nome: %s\n", c[i].nome);
        printf("Idade: %d\n", c[i].idade);
        printf("Sexo: %c\n", c[i].sexo);
        printf("Salário: R$ %.2f\n\n", c[i].salario);
    }
}

int somarIdades(struct dados c[]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += c[i].idade;
    }
    return soma;
}

int main() {
    printf("CADASTRO DE 5 CLIENTES:\n");

    for (int i = 0; i < 5; i++) {
        printf("\nCliente %d:\n", i + 1);

        printf("Código: ");
        scanf("%d", &cliente[i].codigo);

        printf("Nome: ");
        scanf(" %[^\n]", cliente[i].nome);

        printf("Idade: ");
        scanf("%d", &cliente[i].idade);

        printf("Sexo (M/F): ");
        scanf(" %c", &cliente[i].sexo);

        printf("Salário: ");
        scanf("%f", &cliente[i].salario);
    }

    imprimirDados(cliente);

    int somaIdades = somarIdades(cliente);
    float mediaIdade = somaIdades / 5.0;

    printf("Média de idade dos clientes: %.2f anos\n", mediaIdade);

    return 0;
}
