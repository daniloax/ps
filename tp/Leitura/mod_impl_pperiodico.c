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
void getListaDiscente(ListaDiscente *pinicio) {