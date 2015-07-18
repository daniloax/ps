/**	
*	@file mod_def_pevento.h 
*	@brief Arquivo cabeçalho para leitura de publicacao em evento.
*	@author Danilo Alves.
* 	@author José Siqueira.
*	@since 01/03/15.
*	@version 1.0.
*
*/

/* 
Controle visando evitar inclusões múltiplas.
*/

#ifndef MOD_DEF_PEVENTO
#define MOD_DEF_PEVENTO

/* 
Controle visando identificar o servidor.
*/

#ifdef MOD_IMPL_PEVENTO
#define EXT_MOD_DEF_PEVENTO
#else
#define EXT_MOD_DEF_PEVENTO extern
#endif

/* 
Inclusão de módulo de definição.
*/

#include "../Estrutura/mod_def_lista.h"

/*
Declaração de protótipo de função.
*/

EXT_MOD_DEF_PEVENTO void getListaDocente(ListaDocente *pinicio);
EXT_MOD_DEF_PEVENTO void setListaDocente(ListaDocente **epinicio, char *arquivo);

#undef EXT_MOD_DEF_PEVENTO

#endif
