#ifndef ATIVIDADE_H
#define ATIVIDADE_H

#include "lista.h"
#include "pessoa.h"
#include "string.h"

typedef enum {
   EM_ANDAMENTO = 1
} Situacao;

typedef enum {
   PESQUISA = 1
} Natureza;

typedef struct Projeto {
   struct TipoString *nome;
   struct TipoString *descricao;
   Situacao situacao;
   Natureza natureza;
   int anoInicio;
   int anoFim;
   int mesFim;
   struct Pessoa *realizador;
   struct Pessoa *responsavel;
   struct ListaIntegrante *integrantes;
} TipoProjeto;

#endif
