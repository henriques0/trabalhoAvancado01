#include <string>
#include <iostream>
#include <list>
#include <iterator>

using namespace std;
struct cliente_t {
    int cod;
    string nome;
    int idade;
};

list<cliente_t> clientes;

int getCodCliente(){
	return (*clientes.end()).cod + 1;
}

void adicionarCliente(cliente_t cli){
	clientes.push_back(cli);
}

void alterarCliente(cliente_t cli){
	for(list<cliente_t>::iterator it = clientes.begin(); it != clientes.end(); it++){
		if((*it).cod = cli.cod){
			(*it) = cli;
			break;
		}
	}
}

void excluirCliente(int cod){
	for(list<cliente_t>::iterator it = clientes.begin(); it != clientes.end(); it++){
		if((*it).cod = cod){	
			clientes.erase(it);
			break;
		}
	}		
}

void listarCliente(){
	for(list<cliente_t>::iterator it = clientes.begin(); it != clientes.end(); it++){
		cout << (*it).cod << " - " << (*it).nome << " - " << (*it).idade << endl;
	}
}

