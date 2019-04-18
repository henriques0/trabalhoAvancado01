#include <string>
#include <iostream>
#include <list>
#include <iterator>
#include"controle/cliente.cpp"
#include"controle/acervo.cpp"

struct locacao_t{
    cliente_t cliente;
    list<acervo_t> acervo;
    float vr_final;
};

list<locacao_t> locacoes;
void adicionarAcervo(acervo_t acer){
    
}

void locar(cliente_t cli){

}
