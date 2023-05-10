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

void mainMenu() {
    limparTela();
    printf("======= Bem-vindo ao Jam Adventure =======\n\n");
    printf("Esta é uma aventura por João Gabriel Macedo e Matheus Lobo\n");
    printf("\nAproveite nosso jogo e divirta-se!\n\n");
    printf("           [1] Iniciar Jogo\n");
    printf("           [2] Carregar Jogo\n");
    printf("           [3] Criar Personagem\n");
    printf("           [4] Sair\n\n");
   int menuOption,i;
   scanf("%d", &menuOption  );
   for ( i = 1 ; i > 4; i++)
   {
      if (menuOption == 1)
   {
      printf("opção1");/*código para começar o jogo*/
   }
   else if (menuOption == 2)
   {
      printf("opção2");/*código para carregar jogo salvo*/
   }
   else if (menuOption == 3)
   {
      printf("opção3");/*código para criar personagem*/
   }
   else if (menuOption == 4)
   {
      printf("opção4");
   }
   else
   {
      printf("Opção invalida!");
   }
   }
   
   
      

}


int main()
{
   mainMenu();
   
   return 0;
}
