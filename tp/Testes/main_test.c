#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "CUnit/CUnit.h"
#include "CUnit/Basic.h" 
#include "main.c"

/*
 * Função que adiciona ao registro do CUnit os testes para todas as funções 
 * presentes no arquivo testes.c
 */
void adicionar_testes_smo_datas(void);

void adicionar_testes_smo_datas(void) {
	
   CU_pSuite suite;
	
	/* Cria uma suite que conterá todos os testes */
	suite = CU_add_suite("Testes da smo_datas",NULL,NULL);

}

int main(void) {
	
	/* Inicializa o registro de suites e testes do CUnit */	
	if (CUE_SUCCESS != CU_initialize_registry())
    	return CU_get_error();
    
   /* Adiciona os testes ao registro */ 	
   adicionar_testes_smo_datas();
	
	/* Muda o modo do CUnit para o modo VERBOSE
	 * O modo VERBOSE mostra algumas informacoes a
	 * mais na hora da execucao */
	CU_basic_set_mode(CU_BRM_VERBOSE);
	
	/* Roda os testes e mostra na tela os resultados */
	CU_basic_run_tests();
	
	/* Limpa o registro */
	CU_cleanup_registry();
	
	return CU_get_error();
	
}
