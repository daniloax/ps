/**	
*	@file mod_def_pperiodico.h 
*	@brief Arquivo cabeçalho para leitura de publicacao em periodico.
*	@author Danilo Alves.
* 	@author José Siqueira.
*	@since 01/03/15.
*	@version 1.0.
*
*/

/* 
Controle visando evitar inclusões múltiplas.
*/

#ifndef MOD_DEF_PPERIODICO
#define MOD_DEF_PPERIODICO

/* 
Controle visando identificar o servidor.
*/

#ifdef MOD_IMPL_PPERIODICO
#define EXT_MOD_DEF_PPERIODICO
#else
#define EXT_MOD_DEF_PPERIODICO extern
#endif

/* 
Inclusão de módulo de definição.
*/

#include "../Estrutura/mod_def_lista.h"

/*
Declaração de protótipo de função.
*/

EXT_MOD_DEF_PPERIODICO void getListaDocente(ListaDocente *pinicio);
EXT_MOD_DEF_PPERIODICO void setListaDocente(ListaDocente **epinicio, char *arquivo);

#undef EXT_MOD_DEF_PPERIODICO

#endif
