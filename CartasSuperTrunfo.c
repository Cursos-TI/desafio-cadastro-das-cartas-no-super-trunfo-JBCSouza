#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    int populacao;
    float area;
    float pib;
    int nDpontos;
    char[3] codigo;  
    char[10] nome;

    printf("Informe o nome da cidade./n");
    scanf(%s, &nome);
    printf("Informe o códdigo da cidade./n");
    scanf(%s, &codigo);
    printf("Informe a população da cidade./n");
    scanf(%d, &populacao);
    printf("Informe a área da cidade./n");
    scanf(%f, &area);
    printf("Informe o PIB da cidade./n");
    scanf(%f, &pib);
    printf("Informe o numeros de pontos turisticos da cidade./n");
    scanf(%d, &nDpontos);

    
    




    

    return 0;
}
