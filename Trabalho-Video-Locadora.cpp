#include<iostream>
#include<stdio.h>
#include<string>
#include"controle/cliente.cpp"
#include"controle/acervo.cpp"

using namespace std;

void cadastroAcervo(){
    cout << "1 - Incluir | 2 - Alterar | 3 - Excluir | 4 - Listar" << endl;
    int entrada;
    acervo_t acer;
    cin >> entrada;
    switch (entrada)
    {
        case 1:
            //cli.cod = getCodAcervo;
            cout << "Titulo:" << endl;
            cin >> acer.titulo;
            cout << "Gênero:" << endl;
            cin >> acer.genero;
            cout << "Valor:" << endl;
            cin >> acer.valor;
            break;

        case 2:
            //listar cliente
            cout << "Cod.:" << endl;
            cin >> acer.cod;
            cout << "Titulo:" << endl;
            cin >> acer.titulo;
            cout << "Gênero:" << endl;
            cin >> acer.genero;
            cout << "Valor:" << endl;
            cin >> acer.valor;
            //alterarCliente(cli);
            break;    

        case 3:
            //listar cliente
            int cod;
            cout << "Cod.:" << endl;
            cin >> cod;
            //excluirCliente(cod);
            break;

        case 4:
            //listar
            break;    

        default:
            break;
    }    
}

void cadastroCliente(){
    cout << "1 - Incluir | 2 - Alterar | 3 - Excluir | 4 - Listar" << endl;
    int entrada;
    cliente_t cli;
    cin >> entrada;
    switch (entrada)
    {
        case 1:
            cli.cod = getCodCliente();
            cout << "Nome:" << endl;
            cin >> cli.nome;
            cout << "Idade:" << endl;
            cin >> cli.idade;
            adicionarCliente(cli);
            break;

        case 2:
            listarCliente();
            cout << "Cod.:" << endl;
            cin >> cli.cod;
            cout << "Nome:" << endl;
            cin >> cli.nome;
            cout << "Idade:" << endl;
            cin >> cli.idade;
            alterarCliente(cli);
            break;    

        case 3:
            listarCliente();
            int cod;
            cout << "Cod.:" << endl;
            cin >> cod;
            excluirCliente(cod);
            break;

        case 4:            
            listarCliente();
            break;    

        default:
            break;
    }    
}

void movimentoLocacao(){

}

int main () {  
    system("clear");  
    int entrada;
    do{
        cout << "------------------------------" << endl;        
        cout << "1 - Cadastrar Cliente" << endl;
        cout << "2 - Cadastrar Acervo" << endl;
        cout << "3 - Locar" << endl;
        cout << "0 - Sair" << endl;   
        cout << "------------------------------" << endl;        
        cin >> entrada;
        switch (entrada)
        {
            case 1:
                cadastroCliente();
                break;
            case 2:
                cadastroAcervo();
                break;
            case 3:
                movimentoLocacao();
                break; 
            case 0:
                break;           
            default:
                cout << "Comando Inválido";
                break;
        }
    }while(entrada != 0);

    return 0;
}