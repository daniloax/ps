/**	
*	@file mod_impl_pperiodico.c 
*	@brief Módulo que faz a leitura dos periodicos.
*	@author Danilo Alves.
* 	@author José Siqueira.
*	@since 01/03/15.
*	@version 1.0.
*
*/

/* 
Inclusão de biblioteca do compilador.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Declaração visando identificar o módulo como servidor.
*/

#define MOD_IMPL_PPERIODICO

/* 
Inclusão de módulo de definição.
*/

#include "mod_def_pperiodico.h"

/* 
Termina processamento de módulo de implementação.
*/

#undef MOD_IMPL_PPERIODICO

/*
Definição de corpo de função.
*/

/**
* Uma função que percorre a lista de discentes.
* @param *pinicio um ponteiro para o inicio da lista de discentes.
* @return sem retorno.
*/
void getListaPPeriodico(ListaPPeriodico *pinicio) {
	
		
	char *nome;
   
   ListaPPeriodico *pp1;
	TipoPPeriodico *pperiodico;
	
	pp1 = NULL;
	
	pperiodico = NULL;
	nome = "/0";

	if (pinicio == NULL)
		printf("Lista Vazia!");
		
	else {
		
		pp1 = pinicio;

		while (pp1 != NULL) {
			
			pperiodico = (TipoPPeriodico *) pp1->pperiodico;
         nome = pperiodico->nome;
			printf("%s\n", nome);
			pp1 = pp1->proximoPPeriodico;
			
		}

	}
	
	
	
	
	
}



void setListaPPeriodico(ListaPPeriodico **epinicio, char *arquivo) {
	
	 
   FILE *pFile;
   
   /* contador de argumentos do buffer de linha */
   int argc;
   
   /* propriedades e valores dos projetos */
   char *args[2];
   
   /* valor da propriedade */
   char *argv;

   /* buffer de linha temporario */
   char buffer[256];
   
   /* buffer temporario para integrantes dos projetos */
   char bufferIntegrante[256];
   
   /* caracter de leitura de arquivo */
   char c;
   
   /* valor de string entre tokens do buffer de integrantes dos projetos */
   char *intv;
   
   /* valores das propriedades */
   char *propriedadePP[10];
   
   /* contador de caracteres do buffer de linha */
   int i;
   
   /* numero do integrante do projeto */
   int numeroIntegrante;
   
   /* sinaliza leitura de secao de integrantes do projeto */
   int flagIntegrantes;
   
   /* ponteiro auxiliar de lista de projeto */
   ListaPPeriodico *pp1;
   
   /* ponteiro auxiliar de lista de projeto */
	ListaPPeriodico *pp2;
   
   /* ponteiro auxiliar de lista de integrante */
   ListaPPeriodico *pi1;
   
   /* ponteiro auxiliar de lista de integrante */
	ListaPPeriodico *pi2;
   
   /* ponteiro de integrante */
   TipoPessoa *integrante;
	
   /* ponteiro de projeto */
   TipoPPeriodico *pperiodico;
   
   /* abre arquivo */
   pFile = fopen(arquivo, "r");
   
   //if (!pFile)
   //   printf("'%s' not exist\n", arquivo);
   
   //c = fgetc(pFile);
   
   if(ferror(pFile))
      printf("Arquivo '%s' vazio\n", arquivo);
   else { 
      
      printf("\n");
      
      while ((c = getc(pFile)) != EOF) {
      
         /* inicializa contadores */
         argc = 0;
         i = 0;
         
         /* leitura de linha */
         do {
            
            buffer[i] = c;
            i++;
         
         } while (((c = getc(pFile)) != '\n') && (c != EOF));
         
         /* adiciona caracter de termino de string */
         buffer[i] = '\0';
         
         /* separa buffer de linha */
         argv = strtok(buffer, "=");
         
         /* propriedade = valor */
         while (argv != NULL) {
         
            args[argc] = argv;
            // printf("args[%d]: %s\n", argc, args[argc]);
            argv = strtok(NULL, "=");
            argc++;
      
         }
         
         if (strcmp("TITULO do ARTIGO ", args[0]) == 0) {
            
            propriedadePP[TITULO] = calloc(strlen(args[1]), sizeof(char));
            strcpy(propriedadePP[TITULO], args[1]);
            printf("TITULO : %s\n", propriedadePP[TITULO]);
            
         } else if (strcmp("TITULO do PERIODICO ", args[0]) == 0) {
            
            propriedadePP[EDITORA] = calloc(strlen(args[1]), sizeof(char));
            strcpy(propriedadePP[EDITORA], args[1]);
            printf("NOME DA EDITORA: %s\n", propriedadePP[EDITORA]);
            
         } else if (strcmp("PAGINA INICIAL ", args[0]) == 0) {
            
            propriedadePP[NUMERO_PAGINA_INICIAL] = calloc(strlen(args[1]), sizeof(char));
            strcpy(propriedadePP[ANO_INICIO], args[1]);
            printf("NUMERO DA PAGINA INICIAL: %s\n", propriedadePP[NUMERO_PAGINA_INICIAL]);
            
         } else if (strcmp("PAGINA FINAL ", args[0]) == 0) {
            
            propriedadePP[NUMERO_PAGINA_FINAL] = calloc(strlen(args[1]), sizeof(char));
            strcpy(propriedadePP[NUMERO_PAGINA_FINAL], args[1]);
            printf("NUMERO DA PAGINA FINAL: %s\n", propriedadePP[NUMERO_PAGINA_FINAL]);
            
         } else if (strcmp("VOLUME ", args[0]) == 0) {
            
            propriedadePP[VOLUME] = calloc(strlen(args[1]), sizeof(char));
            strcpy(propriedadePP[VOLUME], args[1]);
            printf("VOLUME: %s\n", propriedadePP[VOLUME]);
            
         } else if (strcmp("SERIE ", args[0]) == 0) {
            
            propriedadePP[SERIE] = calloc(strlen(args[1]), sizeof(char));
            strcpy(propriedadePP[SERIE], args[1]);
            printf("SERIE: %s\n", propriedadePP[SERIE]);
            
         } else if (strcmp("NATUREZA", args[0]) == 0) {
            
            propriedadePP[NATUREZAA] = calloc(strlen(args[1]), sizeof(char));
            strcpy(propriedadePP[NATUREZAA], args[1]);
            printf("NATUREZA: %s\n", propriedadePP[NATUREZAA]);
            
         } else if (strcmp("NOME COMPLETO ", args[0]) == 0) {
            
            propriedadePP[REALIZADORR] = calloc(strlen(args[1]), sizeof(char));
            strcpy(propriedadePP[REALIZADORR], args[1]);
            printf("REALIZADOR: %s\n", propriedadePP[REALIZADORR]);
            
         } else if (strcmp("NOME-PARA-CITACAO ", args[0]) == 0) {
            
            propriedadePP[NOME_CITACAOO] = calloc(strlen(args[1]), sizeof(char));
            strcpy(propriedadePP[NOME_CITACAOO], args[1]);
            printf("NOME-PARA-CITACAO: %s\n", propriedadePP[NOME_CITACAOO]);
            
         /* secao integrantes do projeto */
         } else if (strcmp("INTEGRANTES-DO-PROJETO", buffer) == 0) {
            
            printf("INTEGRANTES-DO-PROJETO:\n");
            
            do {
            
               /* inicializa sinalizador de secao */
               flagIntegrantes = 0;
               
               /* inicializa contador */
               i = 0;
               
               /* leitura de linha */
               do {

                  buffer[i] = c;
                  i++;

               } while (((c = getc(pFile)) != '\n') && (c != EOF));
               
               buffer[i] = '\0';
               
               /* examina padrao no buffer de linha */
               if (sscanf(buffer, "%d%[^\n]s", &numeroIntegrante, &bufferIntegrante) == 2) {
                  
                  // printf("%d\n", numeroIntegrante);
                  
                  /* separa buffer de integrante */
                  intv = strtok(bufferIntegrante, " ="  );
                  
                  /* sinaliza secao */
                  if (strcmp("NOME-COMPLETO", intv) == 0)
                     flagIntegrantes = 1;
                  
                  /* integrante = responsavel */
                  while (intv != NULL) {

                     printf("%s\n", intv);
                     intv = strtok(NULL, " =");
               
                  }
                  
               /* entre projetos - nao encontra padrao da secao de integrantes */
               } else {
                  
                  /* inicializa contadores */
                  argc = 0;
                  i = 0;
                  
                  /* separa buffer de linha */
                  argv = strtok(buffer, "=");

                  /* descarta linha */
                  while (argv != NULL) {
         
                     args[argc] = argv;
                     argv = strtok(NULL, "=");
                     argc++;
               
                  }
                  
               }
               
            } while (flagIntegrantes);
            
            projeto = malloc(sizeof(TipoProjeto));
            
            projeto->nome = calloc(strlen(propriedadePP[NOME_PROJETO]), sizeof(char));
            strcpy(projeto->nome, propriedadePP[NOME_PROJETO]);
            
            projeto->descricao = calloc(strlen(propriedadePP[DESCRICAO_PROJETO]), sizeof(char));
            strcpy(projeto->descricao, propriedadePP[DESCRICAO_PROJETO]);
            
            projeto->anoInicio = calloc(strlen(propriedadePP[ANO_INICIO]), sizeof(char));
            strcpy(projeto->anoInicio, propriedadePP[ANO_INICIO]);
            
            projeto->situacao = calloc(strlen(propriedadePP[SITUACAO]), sizeof(char));
            strcpy(projeto->situacao, propriedadePP[SITUACAO]);
            
            projeto->natureza = calloc(strlen(propriedadePP[NATUREZA]), sizeof(char));
            strcpy(projeto->natureza, propriedadePP[NATUREZA]);
            
            projeto->realizador = calloc(strlen(propriedadePP[REALIZADOR]), sizeof(char));
            strcpy(projeto->realizador, propriedadePP[REALIZADOR]);
            
            pp1 = malloc(sizeof(ListaProjeto));
            
            pp1->projeto = projeto;
				pp1->proximoProjeto = NULL;
				
				if (*epinicio == NULL)
					*epinicio = pp1;
				
				else
					pp2->proximoProjeto = pp1;
					
				pp2 = pp1;
            
         }
         
      }
       
      printf("\n");
      
      fclose(pFile);
      
   }
	
}
