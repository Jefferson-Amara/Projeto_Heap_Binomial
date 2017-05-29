/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   heap_binomial.h
 * Author: amara
 *
 * Created on 28 de Maio de 2017, 16:14
 */

#ifndef HEAP_BINOMIAL_H
#define HEAP_BINOMIAL_H

#include "no_binomial.h"


class heap_binomial()
{
    private:
        no_binomial* criaNo(int ch);
        no_binomial* somaArvoresBinomiais(no_binomial* H1, no_binomial* H2);
        no_binomial* intercalaHeapsBinomiais(no_binomial* H1, no_binomial* H2);
        no_binomial* uniaoHeapsBinomiais(no_binomial* H1, no_binomial* H2);
        void deletaH(no_binomial* H);        
    public:
        heap_binomial();
        ~heap_binomial();
        void insere(int v);
        void uniaoHeapsBinomiais(no_binomial* H);
            
        
        no_binomial* raiz;
}

#endif /* HEAP_BINOMIAL_H */

