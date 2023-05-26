#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

/*Variáveis Globais*/
char charName[20], charBio[400];
char letsPlay;
int raceNum = 0, alignNum = 0, jobNum = 0, objectiveNum = 0, originNum = 0, sizeNum = 0;
/*Funções para o menu e limpeza do código*/
void cleanScreen()
{
#ifdef _WIN32
   system("cls"); /*Limpar tela no Windows*/
#elif __linux__
   system("clear"); /*Limpar tela no Linux*/
#elif __APPLE__
   system("clear"); /*Limpar tela no macOS*/
#endif
}
/*========================================================================*/
void clearBuffer()
{
   char c;
   while ((c = getchar()) != '\n' && c != EOF)
   {
   }
}
/*========================================================================*/

/*=================================================================================================*/

/*=========================================================================*/

/*Função principal*/

int main()
{
   /* Menu Inicial */

inicio:
   printf("======= Bem-vindo ao Jam Adventure =======\n\n");
   printf("Esta é uma aventura por João Gabriel Macedo e Matheus Lobo\n");
   printf("\nAproveite nosso jogo e divirta-se!\n\n");
   printf("           [1] Criar Personagem\n");
   printf("           [2] Iniciar Jogo\n");
   printf("           [3] Sair\n");
   printf("(digite a sua escolha)\n");

   int menuOption;
   scanf("%d", &menuOption);

   switch (menuOption)
   {
   case 1:
      clearBuffer(); /* necessário limpar o buffer do teclado, usar função para limpar o buffer */
      /* -------------------------CRIAÇÃO DE PERSONAGEM----------------------- */
      char letsPlay = 0;
      while (letsPlay != 's')
      {
         /*NAME STRING*/

         printf("Qual o nome de seu Personagem?\n\n");
         fgets(charName, 20, stdin);
         charName[strcspn(charName, "\n")] = '\0';
         printf("\n---------------------\n");

         /*RACE*/

         printf("Qual a raça de seu Personagem?\n\n");
         printf("[1] - Humano\n[2] - Anão\n[3] - Elfo\n\n");
         scanf("%d", &raceNum);
         printf("\n---------------------\n");

         /*ALIGNMENT*/

         printf("O reino de Plim Plim está em caos. De que lado você está?\n\n");
         printf("[1] - Mal\n[2] - Neutro\n[3] - Bom\n\n");
         scanf("%d", &alignNum);
         printf("\n---------------------\n");

         /*JOB TYPE*/

         if (alignNum == 3) /*bom = não incluir opção 3*/
         {
            printf("Todos em Plim Plim precisam ser treinados em combate. Como você foi treinado?\n\n");
            printf("[1] - Guerreiro, habilidoso com a espada e escudo\n[2] - Mago, inteligente e apto nas artes arcanas\n");
            scanf("%d", &jobNum);
            printf("\n---------------------\n");
         }
         else
         {
            printf("Todos em Plim Plim precisam ser treinados em combate. Como você foi treinado?\n\n");
            printf("[1] - Guerreiro, habilidoso com a espada e escudo\n[2] - Mago, inteligente e apto nas artes arcanas\n");
            printf("[3] - Ladino, habilidoso com facas e arcos, e rápido com suas mãos\n\n");
            scanf("%d", &jobNum);
            printf("\n---------------------\n");
         }

         /*GOAL*/
         if (alignNum == 1) /*não mostrar destruir o mal se o personagem for do mal*/
         {
            printf("Você tem uma meta e apenas você pode cumpri-la. Qual é sua vontade no reino de Plim Plim?\n\n");
            printf("[1] - Assumir o comando do reino\n[2] - Enriquecer como ninguém\n");
            scanf("%d", &objectiveNum);
            printf("\n---------------------\n");
         }
         else
         {
            printf("Você tem uma meta e apenas você pode cumpri-la. Qual é sua vontade no reino de Plim Plim?\n\n");
            printf("[1] - Assumir o comando do reino\n[2] - Enriquecer como ninguém\n");
            printf("[3] - Destruir a raiz do mal para todo o sempre\n\n");
            scanf("%d", &objectiveNum);
            printf("\n---------------------\n");
         }

         /*ORIGIN PLACE*/
         if (jobNum == 3) /*ladino não pode vir das tribos*/
         {
            printf("De que região do continente de Plim Plínia você veio?\n\n");
            printf("[1] - Da cidade de Flam Flam?\n[2] - Das planícies rurais de Gub\n");
            scanf("%d", &originNum);
            printf("\n---------------------\n");
         }
         else
         {
            printf("De que região do continente de Plim Plínia você veio?\n\n");
            printf("[1] - Da cidade de Flam Flam?\n[2] - Das planícies rurais de Gub\n");
            printf("[3] - Das tribos de Jajalajá\n\n");
            scanf("%d", &originNum);
            printf("\n---------------------\n");
         }
         /*ORIGIN STORY*/

         printf("Todo mundo tem uma história. Qual é a de %s?\n(digite até 400 caracteres)\n\n", charName);
         getchar(); /*Necessário limpar o buffer para a entrada de texto funcionar*/
         fgets(charBio, 400, stdin);
         charName[strcspn(charBio, "\n")] = '\0';

         printf("\n---------------------\n");

         /*SIZE*/

         if (raceNum == 2)
         { /*anão = não incluir opção 3*/
            printf("Qual o tamanho do seu Personagem?\n\n");
            printf("[1] - Mitinho de 1,30m\n[2] - Guri de 1,50m\n");
            scanf("%d", &sizeNum);
            printf("\n---------------------\n");
         }
         else if (raceNum != 2)
         {
            printf("Qual o tamanho do seu Personagem?\n\n");
            printf("[1] - Mitinho de 1,30m\n[2] - Guri de 1,50m\n");
            printf("[3] - Gigante de 2m\n\n");
            scanf("%d", &sizeNum);
            printf("\n---------------------\n");
         }

         printf("Suas opções de personagem foram: \n nome: %s \n raça: %d \n alinhamento: %d\n job: %d\n objetivo: %d\n origem: %d\n tamanho: %d\n história: %s", charName, raceNum, alignNum, jobNum, objectiveNum, originNum, sizeNum, charBio);
         printf("Você já pode começar o jogo.\n");
         printf("Iniciar sua jornada?\n(digite s para começar o jogo e n para refazer seu personagem.)\n");

         clearBuffer();
         char play;
         play = getchar();
         clearBuffer();
         if (play == 'n')
         {
            printf("\nVamos criar seu personagem novamente.\n\n");
         }
         else if (play == 's')
         {
            letsPlay = 's';
         }
         else
         {
            printf("Opção inválida");
         }
      }
      goto inicio;

   case 2:
      if (letsPlay == 's')
      {
         printf("\nVocê escolheu começar o jogo\n");
         break;
      }
      else
      {
         printf("\n===========Crie seu personagem primeiro=============\n\n");
         goto inicio;
      }

   case 3:
      printf("case 3");
      exit(0);
   default:
      printf("Opção inválida.");
      exit(0);
   }
   int i;

   /* Transformando escolhas em strings */

   char raceNumStr[50], alignNumStr[50], jobNumStr[50], objectiveNumStr[50], originNumStr[50], sizeNumStr[50];
   if (raceNum == 1)
   {
      strcpy(raceNumStr, "humano");
   }
   else if (raceNum == 2)
   {
      strcpy(raceNumStr, "anão");
   }
   else if (raceNum == 3)
   {
      strcpy(raceNumStr, "elfo");
   }

   if (alignNum == 1)
   {
      strcpy(alignNumStr, "mal");
   }
   else if (alignNum == 2)
   {
      strcpy(alignNumStr, "neutro");
   }
   else if (alignNum == 3)
   {
      strcpy(alignNumStr, "bom");
   }

   if (jobNum == 1)
   {
      strcpy(jobNumStr, "guerreiro");
   }
   else if (jobNum == 2)
   {
      strcpy(jobNumStr, "mago");
   }
   else if (jobNum == 3)
   {
      strcpy(jobNumStr, "ladino");
   }

   if (objectiveNum == 1)
   {
      strcpy(objectiveNumStr, "assumir o comando do reino");
   }
   else if (objectiveNum == 2)
   {
      strcpy(objectiveNumStr, "enriquecer como ninguém");
   }
   else if (objectiveNum == 3)
   {
      strcpy(objectiveNumStr, "destruir a raiz do mal para todo o sempre");
   }

   if (originNum == 1)
   {
      strcpy(originNumStr, "cidade de Flam Flam");
   }
   else if (originNum == 2)
   {
      strcpy(originNumStr, "das planícies rurais de Gub");
   }
   else if (originNum == 3)
   {
      strcpy(originNumStr, "das tribos de Jajalajá");
   }

   if (sizeNum == 1)
   {
      strcpy(sizeNumStr, "tenho 130 cm de altura");
   }
   else if (sizeNum == 2)
   {
      strcpy(sizeNumStr, "tenho 150 cm de altura");
   }
   else if (sizeNum == 3)
   {
      strcpy(sizeNumStr, "sou grandão, pô");
   }

   /*Início do jogo*/
   sleep(1);

   printf("\n\nNo mundo de Flim Flam, onde reinos e criaturas fantásticas coexistem, surge uma ameaça sombria que promete\nmergulhar toda a terra na escuridão eterna. O mal se espalha lentamente, corrompendo a natureza, as almas\ne tudo o que toca. ");
   sleep(1);
   printf("\n\n%s, advindo de %s, não se acovarda e aproveita a oportunidade de %s, já que estava à toa em casa. ", charName, originNumStr, objectiveNumStr);
   sleep(1);
   printf("\nPara isso, %s, que não é bobo nem nada, traça um plano: \"preciso, primeiro, catar minhas coisas\" ", charName);
   sleep(1);

pergunta1:
   printf("\n\n - O que eu preciso levar?\nEscolha:\nEscova de dentes\nÓculos escuros\nCopo Stanley\n(escreva exatamente como está escrito)");
   char carryOne[20];
   clearBuffer();
   fgets(carryOne, 20, stdin);
   carryOne[strcspn(carryOne, "\n")] = '\0';

   printf("%s", carryOne);
   if (strcmp(carryOne, "Escova de dentes") == 0)
   {
      printf(" - Não posso %s sem escovar os meus dentes.\n", objectiveNumStr);
      printf("\nVocê escolheu escova de dentes.\n");
      printf(" - Não posso %s sem escovar os meus dentes.\n", objectiveNumStr);
      sleep(1);
   }
   else if (strcmp(carryOne, "Óculos escuros") == 0)
   {
      printf(" - Preciso estar no hype enquanto estiver tentando %s\n", objectiveNumStr);
      printf("\nVocê escolheu óculos escuros.\n");
      sleep(1);
   }
   else if (strcmp(carryOne, "Copo Stanley") == 0)
   {
      printf("Vai que eu sinto sede? Não consigo %s com sede\n", objectiveNumStr);
      printf("\nVocê escolheu o Copo Stanley.\n");
      sleep(1);
   }
   else
   {
      printf("\nNão entendi. Favor escrever novamente.\n");
      goto pergunta1;
   }
   if (strcmp(carryOne, "Escova de dentes") == 0)
   {
      printf("\nAgora, com minha poderosa %s, posso seguir com meu objetivo.\n", carryOne);
      sleep(1);
   }
   else
   {
      printf("\nAgora, com meu poderoso %s, posso seguir com meu objetivo.\n", carryOne);
   }
   printf("\n - Continuarei minha jornada para %s, vou sair de casa.\n", objectiveNumStr);
   printf("\nSaindo de sua casa, %s se depara com uma senhora andando pela rua. Ela aparenta estar indo comprar mantimentos para sua pobre família.", charName);
   printf("\n%s cogita o que fazer à respeito da pobre senhora.\n\n", charName);

   int viagem, delegacia, lady;

   if (alignNum == 1)

   loop1:
      printf("1. Chutar\n");
   printf("2. Ajudar\n");
   printf("3. Empurrar\n");

   scanf("%d", &lady);
   if (lady == 1)
   {
      printf("voce a chutou\n");
      printf("quando você a chutou ela caiu e quebrou o quadril\n");
      printf("a policia chegou te levou para prestar queixa na prisão\n");
   loop3:
      if (jobNum == 2)
      {
         printf("Quer seguir sua jornada ou voltar no tempo com um seu feitiço especial de volta no tempo?\n");
         printf("1. voltar\n");
         printf("2. ir para cadeia\n");
         scanf("%d", &viagem);
         if (viagem == 1)
         {
            printf("uma fumaça preta te consumiu\n");
            goto loop3;
         }
      loop4:
         if (viagem == 2)
         {
            printf("voce foi levado a cadeia para prestar queixa do ocorrido\n");
            printf("quando voce chegou la percebeu que trouce sua poçao de teleportar com voce, voce deseja usar-la e teleportar para longe de la ou esperar e ver o que decidem fazer com voce?\n");
            printf("1. teleportar\n");
            printf("2. esperar\n");
            scanf("%d", &delegacia);
            if (delegacia == 1)
            {
               printf("voce se teleportou ate a esquina e conseguiu fugir\n voce continuou com seu dia\n");
            }
            else if (delegacia == 2)
            {
               printf("voce esperou la por 1 hora, porem pelo fato de nao existir provas voce se safou e foi solto\n voce continuou com seu dia\n");
            }
         }
         if (viagem > 2 || viagem < 1)
         {
            printf("opçao invalida\n");
            goto loop3;
         }
      }
      else if (jobNum == 1 || jobNum == 3)
      {
         printf("voce foi prestar queixa\n");
         printf("quando chegou na delegacia voce chegou clamando ser inocente, e sem provas a policia foi obrigada a te liberar\n Você continuou com seu dia\n");
      }
   }
   else if (lady == 2)
   {
      printf("voce ajudou a senhora a atravessar a rua e ganhou uma maça como recompensa.\nVocê seguiu em frente com seu dia\n");
   }
   else if (lady == 3)
   {
      printf("voce empurrou a senhora para dentro de uma cratera gigante e ela sumiu lá dentro e\nVocê continuou com seu dia\n");
   }

   printf("\nDepois de alguns minutos andando por ai, um estranho te chama para um grande duelo de jokempo\n");
   int escolha, computador, recompensa, empate, perde;
loop5:
   printf("qual é a sua escolha\n");
   printf("1. pedra\n");
   printf("2. papel\n");
   printf("3. tesoura\n");
   srand(time(NULL));
   computador = rand() % 3 + 1;
   scanf("%d", &escolha);
   if (escolha > 3 || escolha < 1)
   {
      printf("opçao invalida\n");
      goto loop5;
   }
   printf("o computador escolheu: %d\n", computador);
   if (escolha == computador)
   {
   loop8:
      printf("voces empataram, voce quer tentar ganhar ou deseja sair com um empate?\n");
      printf("1. jogar novamente\n");
      printf("2. sair\n");
      scanf("%d", &empate);
      if (empate == 1)
      {
         goto loop5;
      }
      else if (empate == 2)
      {
         printf("voce virou as costas e foi embora\n");
      }
      else if (empate > 2 || empate < 1)
      {
         printf("opçao invalida\n");
         goto loop8;
      }
   }
   else if (escolha == 1 && computador == 3 || escolha == 2 && computador == 1 || escolha == 3 && computador == 2)
   {
   loop6:
      printf("Parabéns. Você ganhou.\n");
      printf("Qual será sua recompensa?\n");
      printf("1. Maça mordida\n");
      printf("2. Vara de pesca sem linha\n");
      printf("3. Havaianas estourada\n");
      scanf("%d", &recompensa);
      if (recompensa > 3 || recompensa < 1)
      {
         printf("opçao invalida\n");
         goto loop6;
      }
      printf("voce pegou sua recompensa e continuou sua jornada\n");
   }
   else if (escolha == 1 && computador == 2 || escolha == 2 && computador == 3 || escolha == 3 && computador == 1)
   {
   loop7:
      printf("Você perdeu, quer tentar novamente?\n");
      printf("1. sim\n");
      printf("2. nao\n");
      scanf("%d", &perde);
      if (perde == 1)
      {
         goto loop5;
      }
      else if (perde == 2)
      {
         printf("Você foi embora derrotado\n");
      }
      else if (perde > 2 || perde < 1)
      {
         printf("Opção Inválida\n");
         goto loop7;
      }
      
   }
   exit(0);
   return 0;
}
