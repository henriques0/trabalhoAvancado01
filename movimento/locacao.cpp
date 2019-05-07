#include <string>
#include <iostream>
#include <list>
#include <iterator>
#include"../controle/acervo.cpp"

struct locacao_t{
    cliente_t cliente;
    list<acervo_t> acervo;
    float vr_final;
};

//list<locacao_t> locacoes;

void adicionarAcervoLocacao(acervo_t acer, locacao_t* locacao){
    (*locacao).acervo.push_back(acer);
    (*locacao).vr_final = (*locacao).vr_final + acer.valor;    
}

void removerAcervoLocacao(int cod, locacao_t* locacao){
	for(list<acervo_t>::iterator it = (*locacao).acervo.begin(); it != (*locacao).acervo.end(); it++){
		if((*it).cod == cod){	
			(*locacao).acervo.erase(it);
			break;
		}
	}		
}

void locar(cliente_t cli, locacao_t* locacao){
    (*locacao).cliente = cli;
    for(list<acervo_t>::iterator it = (*locacao).acervo.begin(); it != (*locacao).acervo.end(); it++){
        for(list<acervo_t>::iterator itA = acervos.begin(); itA != acervos.end(); itA++){
            if((*it).cod == (*itA).cod){
                (*itA).cod_cliente = cli.cod;
            }
        }
    }
}

void listarAcervoLocacao(locacao_t* locacao){
	for(list<acervo_t>::iterator it = (*locacao).acervo.begin(); it != (*locacao).acervo.end(); it++){
		cout << (*it).cod << " - " 
		<< (*it).titulo << " - " 
		<< (*it).genero << " -  R$" 
		<< (*it).valor << endl;
	}
}
