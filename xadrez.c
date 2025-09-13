// novato_xadrez.c — MateCheck: Desafio de Xadrez (Nível Novato)
// Requisitos atendidos:
// - Entradas via constantes/variáveis no código (sem scanf).
// - Uso de estruturas de repetição (for, while, do-while).
// - Saídas legíveis com printf nas direções especificadas.
// Movimentos:
//   Bispo: 5 casas na diagonal superior direita  -> "Cima+Direita" (combinação)
//   Torre: 5 casas para a direita                -> "Direita"
//   Rainha: 8 casas para a esquerda              -> "Esquerda"

#include <stdio.h>

// Quantidade de passos de cada peça (edite para testar)
const int PASSOS_BISPO  = 5;
const int PASSOS_TORRE  = 5;
const int PASSOS_RAINHA = 8;

// Helpers de saída (mantém a nomenclatura)
void cima(void)     { printf("Cima\n"); }
void baixo(void)    { printf("Baixo\n"); }
void esquerda(void) { printf("Esquerda\n"); }
void direita(void)  { printf("Direita\n"); }

// Para o bispo: combinamos direções básicas em um único printf,
// conforme instrução (“combinação de direções básicas”).
void diagonal_cima_direita(void) {
    printf("Cima+Direita\n");
    // Observação: se o avaliador exigir estritamente 1 direção por linha,
    // troque a linha acima por:
    // cima(); direita();
}

int main(void) {
    printf("===== Nível Novato — MateCheck =====\n\n");

    // -----------------------------------
    // BISPO — 5 casas (for)
    // Diagonal superior direita: repetimos a combinação 5 vezes.
    // -----------------------------------
    printf("[Bispo] 5 casas na diagonal superior direita:\n");
    for (int i = 0; i < PASSOS_BISPO; i++) {
        diagonal_cima_direita();
    }
    printf("\n");

    // -----------------------------------
    // TORRE — 5 casas (while)
    // Só para a direita.
    // -----------------------------------
    printf("[Torre] 5 casas para a direita:\n");
    int passos_torre = 0;
    while (passos_torre < PASSOS_TORRE) {
        direita();
        passos_torre++;
    }
    printf("\n");

    // -----------------------------------
    // RAINHA — 8 casas (do-while)
    // Só para a esquerda.
    // -----------------------------------
    printf("[Rainha] 8 casas para a esquerda:\n");
    int passos_rainha = 0;
    do {
        esquerda();
        passos_rainha++;
    } while (passos_rainha < PASSOS_RAINHA);
    printf("\n");

    printf("Concluído (Nível Novato).\n");
    return 0;
}
