/*!	
*	Arquivo de construcao das listas de discentes, docentes, projetos.
*	\author Danilo Alves.
* 	\author José Siqueira.
*	\since 01/03/15.
*	\version 0.0.1.
*
*/

#ifndef CONSTROI_H_
#define CONSTROI_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../Estrutura/atividade.h"
#include "../Estrutura/lista.h"
#include "../Estrutura/pessoa.h"
#include "../Estrutura/string.h"

typedef enum {
   NOME_COMPLETO = 1,
} Propriedade;

void ConstroiListaDiscente(ListaDiscente **epinicio, char *arquivo);
void ConstroiListaProjeto(ListaProjeto **epinicio, char *arquivo);
void OrdenaListaDiscente(ListaDiscente **epinicio);
void PercorreListaDiscente(ListaDiscente *pinicio);

#endif /* CONSTROI_H_ */
