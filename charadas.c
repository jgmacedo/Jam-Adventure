#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 9
int main()
{
    int vida;
    vida = 100;
    int charada, solucao;
    int charadaNum = 0;
    charada = 0;
    srand(time(NULL)); /*tentar evitar que o rand mande sempre os mesmos valores*/

    while (vida > 0)
    {

        while (charadaNum <= 2)
        {
            charada = rand() % 9 + 0;
            printf("\n%d\n", charada);
            if (charada == 0)
            {

                printf("\nÉ mais útil quando é quebrado.\n");
                printf("1. vidro\n");
                printf("2. ovo\n");
                printf("3. porta\n");
                scanf("%d", &solucao);

                if (solucao == 1)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
                else if (solucao == 2)
                {
                    printf("resposta correta!\n");
                    
                }
                else if (solucao == 3)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
            }

            else if (charada == 1)
            {
                printf("Faz duas pessoas a partir de uma só.\n");
                printf("1. micose\n");
                printf("2. anticoncepcional\n");
                printf("3. espelho\n");
                scanf("%d", &solucao);
                if (solucao == 1)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
                else if (solucao == 2)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
                else if (solucao == 3)
                {
                    printf("resposta correta!\n");
                    
                }
            }
            else if (charada == 2)
            {
                printf("Quanto mais você tira, maior eu fico.\n");
                printf("1. buraco\n");
                printf("2. cafe\n");
                printf("3. neve\n");
                scanf("%d", &solucao);
                if (solucao == 1)
                {
                    printf("resposta correta!\n");
                    
                }
                else if (solucao == 2)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
                else if (solucao == 3)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
            }

            else if (charada == 3)
            {
                printf("Duas coisas que você não pode comer no café da manhã\n");
                printf("1. arroz e feijao\n");
                printf("2. almoço e jantar\n");
                printf("3. sopa e legumes\n");
                scanf("%d", &solucao);
                if (solucao == 1)
                {

                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
                else if (solucao == 2)
                {
                    printf("resposta correta!\n");
                    
                }
                else if (solucao == 3)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
            }

            else if (charada == 4)
            {
                printf("A que pergunta para a qual você nunca responderá “sim”?\n");
                printf("1. “Você já está dormindo?”\n");
                printf("2. “bora no crossfit?”\n");
                printf("3. “Voce quer comprar Omega 3?”\n");
                scanf("%d", &solucao);
                if (solucao == 1)
                {
                    printf("resposta correta!\n");
                    
                }
                else if (solucao == 2)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
                else if (solucao == 3)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
            }

            else if (charada == 5)
            {
                printf("É cheio de furinhos, mas ainda assim consegue segurar a água.\n");
                printf("1. bacia furada\n");
                printf("2. peneira\n");
                printf("3. esponja\n");
                scanf("%d", &solucao);
                if (solucao == 1)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
                else if (solucao == 2)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
                else if (solucao == 3)
                {
                    printf("resposta correta!\n");
                    charadaNum = 0;
                }
            }

            else if (charada == 6)
            {
                printf("É preto quando você o compra, vermelho quando você o usa e cinza quando você o joga fora.\n");
                printf("1. carvao”\n");
                printf("2. tinta”\n");
                printf("3. escova de dentes\n");
                scanf("%d", &solucao);
                if (solucao == 1)
                {
                    printf("resposta correta!\n");
                    
                }
                else if (solucao == 2)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
                else if (solucao == 3)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
            }

            else if (charada == 7)
            {
                printf("Pertence a você, mas as outras pessoas usam mais do que você.\n");
                printf("1. sua carteira de identidade\n");
                printf("2. seu endereco\n");
                printf("3. seu nome\n");
                scanf("%d", &solucao);
                if (solucao == 1)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
                else if (solucao == 2)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
                else if (solucao == 3)
                {
                    printf("resposta correta!\n");
                    
                }
            }

            else if (charada == 8)
            {
                printf("Não é vivo, mas cresce. Não tem pulmões, mas precisa de ar. Não tem boca, mas a água pode matá-lo.\n");
                printf("1. arvore\n");
                printf("2. fogo\n");
                printf("3. peixe\n");
                scanf("%d", &solucao);
                if (solucao == 1)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
                else if (solucao == 2)
                {
                    printf("resposta correta!\n");
                    
                }
                else if (solucao == 3)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
            }

            else if (charada == 9)
            {
                printf("Está sempre a caminho, mas nunca chega.\n");
                printf("1. amanha\n");
                printf("2. onibus\n");
                printf("3. o intervalo na aula do felipe\n");
                scanf("%d", &solucao);
                if (solucao == 1)
                {
                    printf("resposta correta!\n");
                    
                }
                else if (solucao == 2)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
                else if (solucao == 3)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                }
            }
            charadaNum++;
        }
        printf("parabéns, acabou");
        break;
    }

    return 0;
}