#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#define ARRAY_SIZE 9


   char charName[21], charBio[400];
   char letsPlay;
   int raceNum = 0, alignNum = 0, jobNum = 0, objectiveNum = 0, originNum = 0, sizeNum = 0, lady;

void cleanScreen() {
#ifdef _WIN32  
    system("cls");
#elif linux
    system("clear"); 
#elif APPLE
    system("clear");
#endif
}
/*========================================================================*/
/* Limpador de buffer para corrigir entradas de fgets e não atrapalhar a próxima entrada. */
void clearBuffer(){
   char c;
   while ((c = getchar()) != '\n' && c != EOF) { }
}
/*========================================================================*/

   
int main()
{
   cleanScreen();
  int vida;
  vida = 100;
  int go;
  
 
   /* Menu Inicial */
   

  
   inicio:
  
     loop10:
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
      clearBuffer();/* limpar buffer para receber o char */
      /* -------------------------CRIAÇÃO DE PERSONAGEM----------------------- */
      char letsPlay = 0;
      while (letsPlay != 's')
      {
      
      
      printf("Qual o nome de seu Personagem?\n\n");
      fgets(charName, 21, stdin);
      charName[strcspn(charName, "\n")] = '\0';
      printf("\n---------------------\n");
  
      
      printf("Qual a raça de seu Personagem?\n\n");
      printf("[1] - Humano\n[2] - Anão\n[3] - Elfo\n\n");
      scanf("%d", &raceNum);
      printf("\n---------------------\n");
      
      
      
      printf("O reino de Plim Plim está em caos. De que lado você está?\n\n");
      printf("[1] - Mal\n[2] - Neutro\n[3] - Bom\n\n");
      scanf("%d", &alignNum);
      printf("\n---------------------\n");
      
  
      
      if (alignNum == 3) 
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
      
      
      if (alignNum == 1)
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

        
      if (jobNum == 3){
        
      printf("De que região do continente de Plim Plínia você veio?\n\n");
      printf("[1] - Da cidade de Flam Flam?\n[2] - Das planícies rurais de Gub\n");
      scanf("%d", &originNum);
      printf("\n---------------------\n");
      }else
      {
      printf("De que região do continente de Plim Plínia você veio?\n\n");
      printf("[1] - Da cidade de Flam Flam\n[2] - Das planícies rurais de Gub\n");
      printf("[3] - Das tribos de Jajalajá\n\n");
      scanf("%d", &originNum);
      printf("\n---------------------\n");
      }
      
      printf("Todo mundo tem uma história. Qual é a de %s?\n(digite até 400 caracteres)\n\n",charName);
      getchar(); 
      fgets(charBio, 400, stdin);
      charName[strcspn(charBio, "\n")] = '\0';

      printf("\n---------------------\n");

      

   if (raceNum == 2) { 
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
      clearBuffer();
      if (play == 'n')
      {
         printf("\nVamos criar seu personagem novamente.\n\n");
      } else if (play == 's'){
         letsPlay = 's';
      }else{
         printf("Opção inválida");
      }
      }
         goto inicio;

   case 2:
      if (letsPlay == 's'){
         printf("\nVocê escolheu começar o jogo\n");
         break;  
      }else{
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
   
   
    /* Transforma todos os numeros sobre o personagem em strings para leitura posterior */
   char raceNumStr[50], alignNumStr[50], jobNumStr[50], objectiveNumStr[50], originNumStr[50], sizeNumStr[50];
   if (raceNum == 1)
   {
      strcpy(raceNumStr, "humano");
   }else if (raceNum == 2)
   {
      strcpy(raceNumStr, "anão");
   }else if (raceNum == 3){
      strcpy(raceNumStr, "elfo");
   }

   if (alignNum == 1)
   {
      strcpy(alignNumStr,"mal");
   }else if (alignNum == 2)
   {
      strcpy(alignNumStr, "neutro");
   }else if (alignNum == 3)
   {
      strcpy(alignNumStr,"bom");
   }

   if (jobNum == 1)
   {
      strcpy(jobNumStr, "guerreiro");
   }else if (jobNum == 2)
   {
      strcpy(jobNumStr, "mago");
   }else if (jobNum == 3)
   {
      strcpy(jobNumStr, "ladino");
   }
   
   if (objectiveNum == 1)
   {
      strcpy(objectiveNumStr, "Assumir o comando do reino");
   }else if (objectiveNum == 2)
   {
      strcpy(objectiveNumStr, "Enriquecer como ninguém");
   }else if (objectiveNum == 3)
   {
      strcpy(objectiveNumStr,"Destruir a raiz do mal para todo o sempre");
   }

   if (originNum == 1)
   {
      strcpy(originNumStr, "cidade de Flam Flam");
   }else if (originNum == 2)
   {
      strcpy(originNumStr, "das planícies rurais de Gub");
   }else if (originNum == 3)
   {
      strcpy(originNumStr, "das tribos de Jajalajá");
   }
   
   if (sizeNum == 1)
   {
      strcpy(sizeNumStr,"tenho 130 cm de altura");
   }else if (sizeNum == 2)
   {
      strcpy(sizeNumStr,"tenho 150 cm de altura");
   }else if (sizeNum == 3)
   {
      strcpy(sizeNumStr,"sou grandão, pô");
   }

   
   sleep(1);

   printf("\n\nNo mundo de Flim Flam, onde reinos e criaturas fantásticas coexistem, surge uma ameaça sombria que promete\nmergulhar toda a terra na escuridão eterna. O mal se espalha lentamente, corrompendo a natureza, as almas\ne tudo o que toca. ");
   sleep(1);
   printf("\n\n%s, advindo de %s, não se acovarda e aproveita a oportunidade de %s, já que estava à toa em casa. ",charName, originNumStr,objectiveNumStr);
   sleep(1);
   printf("Para isso, %s, que não é bobo nem nada, traça um plano: \"preciso, primeiro, catar minhas coisas\" ",charName);
   sleep(1);

   pergunta1:
   printf("\n\n - O que eu preciso levar?\nEscolha:\nEscova de dentes\nÓculos escuros\nCopo Stanley\n(escreva exatamente como está escrito)");
   char carryOne[20] = {0};
   clearBuffer();
   fgets(carryOne, 20, stdin);
   carryOne[strcspn(carryOne, "\n")] = '\0';

   printf("%s",carryOne);
    if (strcmp(carryOne, "Escova de dentes") == 0) {
      printf(" - Não posso %s sem escovar os meus dentes.\n",objectiveNumStr);
      printf("\nVocê escolheu escova de dentes.\n");
      sleep(1);
    } else if (strcmp(carryOne, "Óculos escuros") == 0) {
        printf(" - Preciso estar no hype enquanto estiver tentando %s\n",objectiveNumStr);
        printf("\nVocê escolheu óculos escuros.\n");
        sleep(1);
    } else if (strcmp(carryOne, "Copo Stanley") == 0) {
        printf("Vai que eu sinto sede? Não consigo %s com sede\n",objectiveNumStr);
        printf("\nVocê escolheu o Copo Stanley.\n");
        sleep(1);
    } else {
        printf("\nNão entendi. Favor escrever novamente.\n");
        goto pergunta1;
    }
   if (strcmp(carryOne, "Escova de dentes") == 0)
   {
      printf("\nAgora, com minha poderosa %s, posso seguir com meu objetivo.\n", carryOne);
            sleep(1);
   }else
   {
      printf("\nAgora, com meu poderoso %s, posso seguir com meu objetivo.\n", carryOne);
   }
      printf("\n - Continuarei minha jornada para %s, vou sair de casa.\n", objectiveNumStr);
  loop2:
      printf("\nSaindo de sua casa, %s se depara com uma senhora andando pela rua. Ela aparenta estar indo comprar mantimentos para sua pobre família.",charName);
      printf("\n%s cogita o que fazer à respeito da pobre senhora.\n",charName);
int viagem,delegacia;
  
   while(vida > 0){
  loop1:
   printf("1. chutar\n"); /*apresenta as escolhas possiveis*/
  printf("2. ajudar\n");
  printf("3. ignorar\n");

     scanf("%d",&lady);/*le a escolha do jogador*/

if(lady == 1){ /*mostra os consequencias da escolha do jogador*/
  printf("voce a chutou\n");
  printf("quando voce a chutou ela caiu e quebrou o quadil\n");
  printf("a policia chegou te levou para prestar queixa na prisao\n");
  loop3:
  if(jobNum == 2){/* se o jogador escolheu a opçao "mago" na criaçao do seu personagem ele pode fazer outra escolha */
printf("voce quer seguir sua jornada ou voltar no tempo com um seu feitiço especial de volta no tempo\n");
  printf("1. voltar\n");
  printf("2. ir para cadeia\n");
 scanf("%d",&viagem);
    if(viagem == 1){
      printf("uma fumaça preta te consumiu\n");
      goto loop1; /* se ojogador escolheu a opçao de voltar, ele voltará para a escolha da velhinha */
    }
    loop4:
     if (viagem == 2){
        printf("voce foi levado a cadeia para prestar queixa do ocorrido\n");
       printf("quando voce chegou la percebeu que trouxe sua poção de teleportar com voce, você deseja usá-la e teleportar para longe de lá ou esperar e ver o que decidem fazer com voce?\n");
       printf("1. teleportar\n");
       printf("2. esperar\n");
       scanf("%d",&delegacia);
       if(delegacia == 1){
  printf("\n*JOGA A POÇÃO NO CHÃO*\nVocê teleportou para uma esquina destante dali e conseguiu despistar a policia");
       }
       else if(delegacia == 2){
         printf("voce esperou por 1 hora, porém pelo fato de não existir provas você se safou e foi solto\nVocê continuou com seu dia\n");
       }
      
    }
      if (viagem > 2 || viagem < 1){
        printf("opção inválida\n");
        goto loop3;
      }
  }
  else if(jobNum == 1 || jobNum == 3){ /*se o jogador nao escolheu a opçao "mago" na criaçao do seu personagem ele nao tem a opçao de fazer as opçoes relacionadas a opçao "mago"*/
    printf("voce foi prestar queixa\n");
    printf("quando chegou na delegacia voce chegou clamando ser inocente, e sem provas a policia foi obrigada a te liberar\n voce continuou com seu dia\n");
  }
}
  else if(lady == 2){
    printf("voce ajudou a velinha a atravessar a rua e ganhou uma maça como recompensa e voce seguiu em frente com seu dia\n");
  }
  else if(lady == 3){
    printf("voce ignorou a velinha e continuou com seu dia\n");
  }

sleep(1);  
printf("depois de alguns minutos andando por ai, um estranho te OBRIGA a duelar em jokempo.\n\nSÓ TE LIBERO SE VOCÊ GANHAR 3X\n");
  int escolha,computador,recompensa,empate,perde,contador;
  
  contador = 0;/*define o valor da variavel que sera utilizada para contar quantas vezes o jogador venceu*/
  
    while(contador < 3){ /*faz com que se o joador tenha ganhado 3 rodadas o programa continue*/

 
   printf("qual é sua escolha\n");
  printf("1. pedra\n");
  printf("2. papel\n");
  printf("3. tesoura\n");
  scanf("%d",&escolha);

  srand(time(NULL));
  computador = rand() % 3 + 1; /*faz com que o computador escolha aleatoriamente um numero que seja de 1 a 3*/
  printf("o seu oponente escolheu: %d\n",computador);
  

   if(escolha == 1 && computador == 3 || escolha == 2 && computador == 1 || escolha == 3 && computador == 2){ /*todas as possibilidades de vencer*/
      printf("\nvoce ganhou!\n\n");
     contador ++; /*cada vitoria aumenta o valor da variavel "contador" que se chegar a 3 passa da parte do jokempo*/
   
   }
   else if(escolha == 1 && computador == 2 || escolha == 2 && computador == 3 || escolha == 3 && computador == 1){/*todas possibilidades de perder*/
     printf("\nvoce perdeu\n\n");
    
   }
    else if(escolha == computador){ /*possibilidade de empate*/
      printf("\nempate\n\n");

      
    }
  

  }  
 
     printf("\ndepois do seu grende duelo de jokempo, voce continuou andando por Plim Plim e se deparou com uma lâmpada\n");
      printf("voce a pegou e a esfregou 3 vezes para limpar a poeira em cima dela\n"); sleep(1);
      printf("SUUUUUUUUUSH\n");
      printf("um genio verde saiu de dentro dela e lhe disse que você pode fazer 1 desejo, porém, deve acertar 3 charadas antes\n");
      printf("ATENÇÃO: para cada charada errada voce perde 50 pontos de vida\n");
     printf("voce tem %d pontos de vida\n",vida);

int charada,solucao,vida,charadaval;
int charadasut[9] = {0};
  
vida = 100; /*define quantos pontos de vida o jogador tem*/
  charadaval = 0; /*define o valor da variavel charadaval, que sera utilizado para fazer o programa saber quantas charadas o jogador acertou*/
  
 while(vida > 0){ 
      
     while (charadaval < 3)
        {
          srand(time(NULL));
            charada = rand() % 9 + 0; /*faz o numero da charada ser aleatorio*/

      if (charadasut[charada] == 0) {
            charadasut[charada] = 1;  /*confere se a charada ja foi utilizada*/
             
          
            if (charada == 0) /*tem 9 charadas e cada uma tem suas condiçoes*/
            {

                printf("\nÉ mais útil quando é quebrado.\n");
                printf("1. vidro\n");
                printf("2. ovo\n");
                printf("3. porta\n");
                scanf("%d", &solucao); /*mostra as opçoes e escaneia a escolha do jogador*/

                if (solucao == 1)
                {
                    printf("opçao errada\n");
                    vida -= 50; /*se errado perde 50 pontos de vida*/
                    printf("voce tem %d pontos de vida restantes\n", vida);
                  if(vida <= 0){
                    return 0; /*se a sua vida chegar a 0 o jogo encerra*/
                  }
                }
                else if (solucao == 2)
                {
                    printf("resposta correta!\n");
                  charadaval++; /*adiciona 1 a incognita para que se o valor dela chegar a 3 o programa sai da parte das charadas*/
                    
                }
                else if (solucao == 3)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                    if(vida <= 0){
                    return 0;
                  }
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
                    if(vida <= 0){
                    return 0;
                  }
                }
                else if (solucao == 2)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                    if(vida <= 0){
                    return 0;
                  }
                }
                else if (solucao == 3)
                {
                    printf("resposta correta!\n");
                   charadaval++;
                  
                  
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
                   charadaval++;
                  
                    
                }
                else if (solucao == 2)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);  if(vida <= 0){
                    return 0;
                  }
                }
                else if (solucao == 3)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                    if(vida <= 0){
                    return 0;
                  }
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
                    if(vida <= 0){
                    return 0;
                  }
                }
                else if (solucao == 2)
                {
                    printf("resposta correta!\n");
                   charadaval++;
                  
                     
                }
                else if (solucao == 3)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                    if(vida <= 0){
                    return 0;
                  }
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
                   charadaval++;
                     
                }
                else if (solucao == 2)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                    if(vida <= 0){
                    return 0;
                  }
                }
                else if (solucao == 3)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                    if(vida <= 0){
                    return 0;
                  }
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
                    if(vida <= 0){
                    return 0;
                  }
                }
                else if (solucao == 2)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                    if(vida <= 0){
                    return 0;
                  }
                }
                else if (solucao == 3)
                {
                    printf("resposta correta!\n");
                   charadaval++;
                   
                }
            }

            else if (charada == 6)
            {
                printf("É preto quando você o compra, vermelho quando você o usa e cinza quando você o joga fora.\n");
                printf("1. carvao\n");
                printf("2. tinta\n");
                printf("3. escova de dentes\n");
                scanf("%d", &solucao);
                if (solucao == 1)
                {
                    printf("resposta correta!\n");
                  charadaval++;
                    
                }
                else if (solucao == 2)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                    if(vida <= 0){
                    return 0;
                  }
                }
                else if (solucao == 3)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                    if(vida <= 0){
                    return 0;
                  }
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
                    if(vida <= 0){
                    return 0;
                  }
                }
                else if (solucao == 2)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                    if(vida <= 0){
                    return 0;
                  }
                }
                else if (solucao == 3)
                {
                    printf("resposta correta!\n");
                   charadaval++;
                    
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
                    if(vida <= 0){
                    return 0;
                  }
                }
                else if (solucao == 2)
                {
                    printf("resposta correta!\n");
                   charadaval++;
                    
                }
                else if (solucao == 3)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                    if(vida <= 0){
                    return 0;
                  }
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
                  charadaval++;
                    
                }
                else if (solucao == 2)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                    if(vida <= 0){
                    return 0;
                  }
                }
                else if (solucao == 3)
                {
                    printf("opçao errada\n");
                    vida -= 50;
                    printf("voce tem %d pontos de vida restantes\n", vida);
                    if(vida <= 0){
                    return 0;
                  }
                }
            }
            }
        }
    
  
        
    int desejo;
    printf("parabens, voce passou no texte! voce tem direito à 1 desejo, o que você escolherá?\n");
    
    if(alignNum == 1){ /*se o jogador escolheu a opçao "mal" na criaçao de personagens, aparecera opçoes diferentes para ele*/
      printf("1. ser o homem mais rico de Plim Plim\n");
      printf("2. assumir o trono de Plim PLim\n");
        printf("3. fazer com que o mal se espalhe por toda a terra contagiando e corrompendo a todos\n");
      scanf("%d",&desejo);/* apresenta as opçoes que o jogador tem e escaneia sua escolha*/
      if(desejo == 1){
        printf("\nVocê foi concedido montanhas de ouro e tem dinheiro para fazer o que quiser para o resto da vida\n");
         return 0;
      }
      else if(desejo == 2){
        printf("\nVocê foi concedido a coroa do reino, porém com suas intenções maléficas não demorou muito para que os ladinos invadissem e deixassem tudo em frangálhos\n");
         return 0;
      }
      else if(desejo == 3){
        printf("\no mal se espalhou como um resfriado, contaminando cada indivíduo e corrompendo sua alma, não demorou muito para que a bela terra de Plim Plim virasse apenas outro lugar fantasma e sombrio\n");
         return 0;
      }
    }
      else{
        printf("1. ser o homem mais rico de Plim Plim\n");
        printf("2. se casar com a linda princesa de Plim Plim\n");
        printf("3. acabar com todo o mal existente na terra de Plim Plim\n");
        scanf("%d",&desejo);
        if(desejo == 1){
          printf("Você foi concedido montanhas de ouro e tem dinheiro para fazer o que quiser para o resto da vida\n");
           return 0;
        }
          else if(desejo == 2){
            printf("voce conseguiu completar o sonho de todos os homens em Plim Plim, casar se com a bela princesa Flan Flan. Porém não durou muito tempo porque o que ela tinha de beleza ela tinha de chatisse\n");
             return 0;
        }
          
        else if(desejo == 3){
          printf("o mal de Plim Plim foi exterminado graças a voce, no entanto mais ninguem sabe que foi por sua conta entao nao mudou nada na sua vida particular. Mas não existe mais mal no reino pelo menos\n");
          return 0;
        }
      }
   
   }
   printf("Game over!\nObrigado por jogar!\n");
}
   

      

  
 return 0;
}