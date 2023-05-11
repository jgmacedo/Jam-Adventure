#include <stdio.h>

int main(){
   char charName[20], charBio[400];
   int raceNum = 0, alignNum = 0, jobNum = 0, objectiveNum = 0, originNum = 0, sizeNum = 0;
   {
      /*NAME STRING*/
   
   printf("Qual o nome de seu Personagem?\n\n");
   fgets(charName, 20, stdin);
   
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
   
   if (alignNum == 3)/*bom = não incluir opção 3*/
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
   printf("[3] - Destruir a raiz do mal para todo o sempre\n\n");
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

/* Falta adicionar as restrições */
/* 
1. Quando um personagem for da raça anão, ele so podera escolher o porte como medio ou pequeno.
2. Quando um personagem for de alinhamento Bom, ele nao podera escolher a classe Ladino.
3. Se a classe Ladino for escolhida, o meio em que o personagem vive n˜ao pode ser tribal.
4. Se o alinhamento do personagem for Mal, ele n˜ao poder´a ter a meta destruir o mal.
*/
}