#include "main.h"

int main() {
	
	char discentesMestrado[] = "arquivos/discentes_mestrado.txt";
	char discentesDoutorado[] = "arquivos/discentes_doutorado.txt";
   char projetos[] = "arquivos/projetos.txt";
   
   struct ListaDiscente *pInicioDiscentes;
   struct ListaDocente *pInicioDocentes;
   struct ListaProjeto *pInicioProjetos;
   
   pInicioDiscentes = NULL;
   pInicioDocentes = NULL;
   pInicioDocentes = NULL;
   
   ConstroiListaDiscente(&pInicioDiscentes, discentesMestrado);
   ConstroiListaDiscente(&pInicioDiscentes, discentesDoutorado);
   ConstroiListaProjeto(&pInicioProjetos, projetos);
   
   // OrdenaListaDiscente(&pInicioDiscentes);
   // PercorreListaDiscente(pInicioDiscentes);
   
   
   
   return 0;
   
}
