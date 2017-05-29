/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "no_binomial.h"

no_binomial* no_binomial::no_binomial(int v)
{
    pai=NULL;
    filho=NULL;
    irmao=NULL;
    valor=v;
    grau=0;
}

void no_binomial::setPai(no_binomial* p)
{
    pai=p;
}
void no_binomial::setIrmao(no_binomial* i)
{
    irmao=i;
}
void no_binomial::setFilho(no_binomial* f)
{
    filho=f;
}
void no_binomial::setValor(int v)
{
    valor=v;
}
void no_binomial::setGrau(int g)
{
    grau=g;
}
no_binomial* no_binomial::getFilho()
{
    return filho;
}
no_binomial* no_binomial::getIrmao()
{
    return irmao;
}
no_binomial* no_binomial::getPai()
{
    return pai;
}
int no_binomial::getGrau()
{
    return grau;
}
int no_binomial::getValor()
{
    return valor;
}
no_binomial::~no_binomial()
{
    
}