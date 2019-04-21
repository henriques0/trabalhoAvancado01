#include <string>
#include <iostream>
#include <list>

using namespace std;
struct acervo_t {
    int cod;
    string titulo;
    string genero;
    float valor;
	int cod_cliente = 0;
};

list<acervo_t> acervos;

int getCodAcervo(){
	return (*acervos.end()).cod + 1;
}

void adicionarAcervo (acervo_t acer){
	acervos.push_back(acer);
}

void alterarAcervo(acervo_t acer){
	for(list<acervo_t>::iterator it = acervos.begin(); it != acervos.end(); it++){
		if((*it).cod = acer.cod){
			(*it) = acer;
			break;
		}
	}
	
}

void excluirAcervo(int cod){
	for(list<acervo_t>::iterator it = acervos.begin(); it != acervos.end(); it++){
		if((*it).cod = cod){	
			acervos.erase(it);
			break;
		}
	}		
}

void listarAcervo(){
	for(list<acervo_t>::iterator it = acervos.begin(); it != acervos.end(); it++){
		cout << (*it).cod << " - " 
		<< (*it).titulo << " - " 
		<< (*it).genero << " -  R$" 
		<< (*it).valor << endl;
	}
}

void listarAcervoLocado(){
	for(list<acervo_t>::iterator it = acervos.begin(); it != acervos.end(); it++){
		if((*it).cod_cliente != 0){
			cout << (*it).cod << " - " 
			<< (*it).titulo << " - " 
			<< (*it).genero << " -  R$" 
			<< (*it).valor << endl;
		}
	}
}

void listarAcervoDisponivel(){
		for(list<acervo_t>::iterator it = acervos.begin(); it != acervos.end(); it++){
		if((*it).cod_cliente == 0){
			cout << (*it).cod << " - " 
			<< (*it).titulo << " - " 
			<< (*it).genero << " -  R$" 
			<< (*it).valor << endl;
		}
	}	
}

void listarAcervoPorCliente(int cod){
	for(list<acervo_t>::iterator it = acervos.begin(); it != acervos.end(); it++){
		if((*it).cod_cliente == cod){
			cout << (*it).cod << " - " 
			<< (*it).titulo << " - " 
			<< (*it).genero << " -  R$" 
			<< (*it).valor << endl;
		}
	}		
}

acervo_t buscarAcervo(int cod){
	for(list<acervo_t>::iterator it = acervos.begin(); it != acervos.end(); it++){
		if((*it).cod = cod){
			return (*it);
		}
	}
	cout << "Código Inválido";
}
