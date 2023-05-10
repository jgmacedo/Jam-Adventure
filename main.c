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

   int menuOption,i;
   scanf("%d", &menuOption  );
      if (menuOption == 1)
   {
      printf("opção1");/*código para criar personagem*/
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
   
int main()
{
   mainMenu();
   
   return 0;
}
