#include <stdio.h>
#include <stdlib.h>

/*Funções para o menu e limpeza do código*/
void limparTela() {
#ifdef _WIN32
    system("cls"); /*Limpar tela no Windows*/
#elif __linux__
    system("clear"); /*Limpar tela no Linux*/ 
#elif __APPLE__
    system("clear"); /*Limpar tela no macOS*/ 
#endif
}
/*=================================================================================================*/
void mainMenu() {
    limparTela();
    printf("======= Bem-vindo ao Jam Adventure =======\n\n");
    printf("Esta é uma aventura por João Gabriel Macedo e Matheus Lobo\n");
    printf("\nAproveite nosso jogo e divirta-se!\n\n");
    printf("           [1] Criar Personagem\n");
    printf("           [2] Iniciar Jogo\n");
    printf("           [3] Sair\n");
    printf("(digite a sua escolha)\n");

   int menuOption,i;
   scanf("%d", &menuOption  );
      if (menuOption == 1)
   {
      characterCreation();/*código para criar personagem*/
   }
   else if (menuOption == 2)
   {
      printf("opção2");/*código para iniciar o jogo*/
   }
   else if (menuOption == 3)
   {
      printf("opção3");/*código de saida do terminal*/
   }
   else
   {
      printf("Opção invalida!");
   }
   }
/*=========================================================================*/
void characterCreation();
void characterCreation(){
   limparTela();
   char charName[20];
   int raceNum,alignNum, objectiveNum, originNum, sizeNum;
   printf("Qual o nome de seu Personagem?\n\n");
   puts(charName);
   
   printf("Qual a raça de seu Personagem?\n\n");
   printf("[1] - Humano\n[2] - Anão\n[3] - Elfo\n\n");
   scanf("%d", &raceNum);
   
   printf("O reino de Plim Plim está em caos. De que lado você está?\n\n ");
   printf("[1] - Mal\n[2] - Neutro\n[3] - Bom\n\n");
   scanf("%d", &alignNum);

   printf("Todos em Plim Plim precisam ser treinados em combate. Como você foi treinado?\n\n");
   printf("[1] - Guerreiro, habilidoso com a espada e escudo\n[2] - Mago, inteligente e apto nas artes arcanas\n");
   printf("[3] - Ladino, habilidoso com facas e arcos, e rápido com suas mãos\n\n");
   scanf("%d", &alignNum);

   printf("Você tem uma meta e apenas você pode cumpri-la. Qual é sua vontade no reino de Plim Plim?\n\n");
   printf("[1] - Assumir o comando do reino\n[2] - Enriquecer como ninguém\n");
   printf("[3] - Destruir a raiz do mal para todo o sempre\n\n");
   scanf("%d", &objectiveNum);

   printf("De que região do continente de Plim Plínia você veio?\n\n");
   printf("[1] - Da cidade de Flam Flam?\n[2] - Das planícies rurais de Gub\n");
   printf("[3] - Nas tribos de Jajalajá\n\n");
   scanf("%d", &originNum);

   printf("Todo mundo tem uma história. Qual é a de %s?\n(digite até 400 caracteres)\n\n",charName);
   char originStory[400];
   scanf("%d", &originStory);

   printf("E por fim, qual o seu tamanho?\n\n");
   printf("[1] - Mitinho de 1,30m\n[2] - Guri de 1,70m\n");
   printf("[3] - Gigante de 2,50m\n\n");
   scanf("%d", &sizeNum);   
/*Falta adicionar as restrições*/
/*1. Quando um personagem for da rac¸a an˜ao, ele s´o poder´a escolher o porte como m´edio ou pequeno.
2. Quando um personagem for de alinhamento Bom, ele n˜ao poder´a escolher a classe Ladino.
3. Se a classe Ladino for escolhida, o meio em que o personagem vive n˜ao pode ser tribal.
4. Se o alinhamento do personagem for Mal, ele n˜ao poder´a ter a meta destruir o mal.*/
}

/*========================================================================*/

/*Função principal*/
   
int main()
{
   mainMenu();
   
   return 0;
}
