// Exercicio 9 - CMAC04
// Felipe Alves Gregorio - 2022008250
// Nícolas de Souza Moreira - 2022014472
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Função para calcular a distância percorrida em uma caminhada aleatória
double DistanciaCaminhada(int passos) {
    int x = 0, y = 0;

    for (int i = 0; i < passos; i++) {
        // Sorteio para as direções
        int dx = (rand() % 2 == 0) ? 1 : -1;
        int dy = (rand() % 2 == 0) ? 1 : -1;

        x += dx;
        y += dy;
    }

    // Distância do ponto final à origem
    return sqrt(x * x + y * y);
}

// Função para calcular a distância média em múltiplas caminhadas aleatórias
double mediaDistanciaCaminhada(int passos, int numTestes) {
    double somaDistancia = 0.0;

    for (int i = 0; i < numTestes; i++) {
        somaDistancia += DistanciaCaminhada(passos);
    }

    return somaDistancia / numTestes;
}

int main() {
    int numPassos = 100;
    int numSimulacoes = 100;
    double distancia;

    // Inicialização do gerador de números aleatórios
    srand(time(NULL));

    // Abrindo o arquivo CSV para escrita
    FILE *file = fopen("distancias.csv", "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    // Escrevendo o cabeçalho no arquivo CSV
    fprintf(file, "Passos,Distancia Media\n");

    // Cálculo da distância média e escrita no CSV
    for (int passos = 1; passos <= numPassos; passos++) {
        distancia = mediaDistanciaCaminhada(passos, numSimulacoes);
        fprintf(file, "%d,%f\n", passos, distancia);
    }

    // Fechando o arquivo CSV
    fclose(file);

    printf("Resultados salvos no arquivo 'distancias.csv'.\n");

    return 0;
}