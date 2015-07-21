/**	
*	@file main.c
* 	@brief Módulo principal do trabalho.
*	@author Danilo Alves.
* 	@author José Siqueira.
*	@since 01/03/15.
*	@version 1.0.
*
*/

#include "main.h"
#include <dirent.h>



int main() {
	
    
	char discentesMestrado[] = "Arquivos/discentes_mestrado.txt";
	char discentesDoutorado[] = "Arquivos/discentes_doutorado.txt";
   char projetos[] = "Arquivos/projetos.txt";
   char pperiodicos[] = "Arquivos/publicacao_periodico.txt";
   
   struct ListaDiscente *pInicioDiscentes;
   struct ListaDocente *pInicioDocentes;
   struct ListaProjeto *pInicioProjetos;
   struct ListaPPeriodico *pInicioPPeriodicos;
   
   pInicioDiscentes = NULL;
   pInicioDocentes = NULL;
   pInicioProjetos = NULL;
   pInicioPPeriodicos = NULL;
   
   setListaDiscente(&pInicioDiscentes, discentesMestrado);
   setListaDiscente(&pInicioDiscentes, discentesDoutorado);
   setListaProjeto(&pInicioProjetos, projetos);
   setListaPPeriodico(&pInicioPPeriodicos, pperiodicos);  
   
   // OrdenaListaDiscente(&pInicioDiscentes);
   // PercorreListaDiscente(pInicioDiscentes);
   
   getListaProjeto(pInicioProjetos);
   //getListaProjeto(&pInicioProjetos); // Imprime lista de discentes do PPGI

   setListaPPeriodico(&pInicioPPeriodicos, pperiodicos);   
   getListaPPeriodico(pInicioPPeriodicos);
   
   typedef struct Elemento_{
	   
   }Elemento;
   
   typedef struct Grafo_{
	   
   }grafo;
   
   
   
   return 0;
   
}
