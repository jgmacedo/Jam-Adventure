#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Variáveis Globais*/
   char charName[20], charBio[400];
   char letsPlay;
   int raceNum = 0, alignNum = 0, jobNum = 0, objectiveNum = 0, originNum = 0, sizeNum = 0;
/*Funções para o menu e limpeza do código*/
void cleanScreen() {
#ifdef _WIN32
    system("cls"); /*Limpar tela no Windows*/
#elif __linux__
    system("clear"); /*Limpar tela no Linux*/ 
#elif __APPLE__
    system("clear"); /*Limpar tela no macOS*/ 
#endif
}
/*========================================================================*/
void clearBuffer(){
   char c;
   while ((c = getchar()) != '\n' && c != EOF) { }
}
/*========================================================================*/
void charCreation(){
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
   }else
   {
   printf("Todos em Plim Plim precisam ser treinados em combate. Como você foi treinado?\n\n");
   printf("[1] - Guerreiro, habilidoso com a espada e escudo\n[2] - Mago, inteligente e apto nas artes arcanas\n");
   printf("[3] - Ladino, habilidoso com facas e arcos, e rápido com suas mãos\n\n");
   scanf("%d", &jobNum);
   printf("\n---------------------\n");
   }
   
   /*GOAL*/
   if (alignNum == 1)/*não mostrar destruir o mal se o personagem for do mal*/
   {
   printf("Você tem uma meta e apenas você pode cumpri-la. Qual é sua vontade no reino de Plim Plim?\n\n");
   printf("[1] - Assumir o comando do reino\n[2] - Enriquecer como ninguém\n");
   scanf("%d", &objectiveNum);
   printf("\n---------------------\n");
   }else{
   printf("Você tem uma meta e apenas você pode cumpri-la. Qual é sua vontade no reino de Plim Plim?\n\n");
   printf("[1] - Assumir o comando do reino\n[2] - Enriquecer como ninguém\n");
   printf("[3] - Destruir a raiz do mal para todo o sempre\n\n");
   scanf("%d", &objectiveNum);
   printf("\n---------------------\n");
   }

   /*ORIGIN PLACE*/   
   if (jobNum == 3)/*ladino não pode vir das tribos*/
   {
   printf("De que região do continente de Plim Plínia você veio?\n\n");
   printf("[1] - Da cidade de Flam Flam?\n[2] - Das planícies rurais de Gub\n");
   scanf("%d", &originNum);
   printf("\n---------------------\n");
   }else
   {
   printf("De que região do continente de Plim Plínia você veio?\n\n");
   printf("[1] - Da cidade de Flam Flam?\n[2] - Das planícies rurais de Gub\n");
   printf("[3] - Das tribos de Jajalajá\n\n");
   scanf("%d", &originNum);
   printf("\n---------------------\n");
   }
   /*ORIGIN STORY*/

   printf("Todo mundo tem uma história. Qual é a de %s?\n(digite até 400 caracteres)\n\n",charName);
   getchar(); /*Necessário limpar o buffer para a entrada de texto funcionar*/
   fgets(charBio, 400, stdin);
   charName[strcspn(charBio, "\n")] = '\0';

   printf("\n---------------------\n");

   /*SIZE*/

if (raceNum == 2) { /*anão = não incluir opção 3*/
   printf("Qual o tamanho do seu Personagem?\n\n");
   printf("[1] - Mitinho de 1,30m\n[2] - Guri de 1,50m\n");
   scanf("%d", &sizeNum);
   printf("\n---------------------\n");
}else if (raceNum != 2)
{
   printf("Qual o tamanho do seu Personagem?\n\n");
   printf("[1] - Mitinho de 1,30m\n[2] - Guri de 1,50m\n");
   printf("[3] - Gigante de 2m\n\n");
   scanf("%d", &sizeNum);
   printf("\n---------------------\n");
}

   printf("Suas opções de personagem foram: \n nome: %s \n raça: %d \n alinhamento: %d\n job: %d\n objetivo: %d\n origem: %d\n tamanho: %d\n história: %s",charName,raceNum,alignNum,jobNum,objectiveNum,originNum,sizeNum, charBio);
   printf("Você já pode começar o jogo.\n");
   printf("Iniciar sua jornada?\n(digite s para começar o jogo e n para refazer seu personagem.)\n");
   
   clearBuffer();
   char play;
   play = getchar(); 

   if (play == 'n')
   {
      printf("Vamos criar seu personagem novamente.\n");
   } else if (play == 's'){
      letsPlay = 's';
   }else{
      printf("Opção inválida");
   }

   }
  
}
/*=================================================================================================*/

/*=========================================================================*/


/*Função principal*/
   
int main()
{
   /* Menu Inicial */
   
   cleanScreen();
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
      charCreation();
      
      goto inicio;

   case 2:
      if (letsPlay == 's'){
         printf("\nVocê escolheu começar o jogo");  
      }else{
         printf("\nCrie seu personagem primeiro\n\n");
      }
      goto inicio;
   case 3:
      printf("voce escolheu sair");
      exit(0);
   default:
      printf("Opção inválida.");
      break;
   }
   int i;

   scanf("%d", &menuOption);
      if (menuOption == 1)
   {
      charCreation();/*código para criar personagem*/
   }
      else if (menuOption == 2)
      {
         printf("opção2"); /*código para iniciar o jogo*/

      }
      else if (menuOption == 3)
      {
         printf("opção3");/*código de saida do terminal*/
      }
      else
      {
         printf("Opção invalida!");
      }
   
   /*Início do jogo*/
   
   printf("Você, %s, acorda no reino de PlimPlim, ",charName);
   
   return 0;
}
