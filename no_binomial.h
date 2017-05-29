/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   no_binomial.h
 * Author: amara
 *
 * Created on 28 de Maio de 2017, 15:59
 */

#ifndef NO_BINOMIAL_H
#define NO_BINOMIAL_H
class no_binomial
{
    private:
        no_binomial* pai;
        no_binomial* filho;
        no_binomial* irmao;
        int valor;
        int grau;
    public:
        no_binomial(int v);
        ~no_binomial();
        void setPai(no_binomial* p);
        void setFilho(no_binomial* f);
        void setIrmao(no_binomial* i);
        void setValor(int v);
        void setGrau(int g);
        no_binomial* getPai();
        no_binomial* getFilho();
        no_binomial* getIrmao();
        int getValor();
        int getGrau();
};


#endif /* NO_BINOMIAL_H */

