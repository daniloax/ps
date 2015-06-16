#ifndef CONSTROI_H_
#define CONSTROI_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../Estrutura/atividade.h"
#include "../Estrutura/lista.h"
#include "../Estrutura/pessoa.h"
#include "../Estrutura/string.h"

void ConstroiListaDiscente(ListaDiscente **epinicio, char *arquivo);
void ConstroiListaProjeto(ListaProjeto **epinicio, char *arquivo);
void OrdenaListaDiscente(ListaDiscente **epinicio);
void PercorreListaDiscente(ListaDiscente *pinicio);

#endif /* CONSTROI_H_ */
