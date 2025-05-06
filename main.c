#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int forca;
    int velocidade;
    int inteligencia;
} Carta;

void mostrarCarta(Carta c) {
    printf("Carta: %s\n", c.nome);
    printf("Força: %d\n", c.forca);
    printf("Velocidade: %d\n", c.velocidade);
    printf("Inteligência: %d\n", c.inteligencia);
}

int compararAtributo(Carta c1, Carta c2, int escolha) {
    switch(escolha) {
        case 1: return c1.forca - c2.forca;
        case 2: return c1.velocidade - c2.velocidade;
        case 3: return c1.inteligencia - c2.inteligencia;
        default: return 0;
    }
}

int main() {
    Carta jogador = {"Dragão", 90, 60, 70};
    Carta oponente = {"Fênix", 85, 65, 80};

    printf("Sua carta:\n");
    mostrarCarta(jogador);

    int escolha;
    printf("Escolha o atributo para jogar (1-Força, 2-Velocidade, 3-Inteligência): ");
    scanf("%d", &escolha);

    int resultado = compararAtributo(jogador, oponente, escolha);

    printf("\nCarta do oponente:\n");
    mostrarCarta(oponente);

    if (resultado > 0)
        printf("\nVocê venceu!\n");
    else if (resultado < 0)
        printf("\nVocê perdeu!\n");
    else
        printf("\nEmpate!\n");

    return 0;
}
