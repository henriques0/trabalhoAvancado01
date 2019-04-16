#include<iostream>
#include<stdio.h>
#include<string>
#include"controle/cliente.cpp"
#include"controle/acervo.cpp"

using namespace std;

void cadastroCliente(){
    cout << "1 - Incluir | 2 - Alterar | 3 - Excluir" << endl;
    int entrada;
    cliente_t cli;
    cin >> entrada;
    switch (entrada)
    {
        case 1:
            //cli.cod = getCodCliente;
            cout << "Nome:" << endl;
            cin >> cli.nome;
            cout << "Idade:" << endl;
            cin >> cli.idade;
            break;

        case 2:
            //listar cliente
            cout << "Cod.:" << endl;
            cin >> cli.cod;
            cout << "Nome:" << endl;
            cin >> cli.nome;
            cout << "Idade:" << endl;
            cin >> cli.idade;
            //alterarCliente(cli);
            break;    

        case 3:
            //listar cliente
            int cod;
            cout << "Cod.:" << endl;
            cin >> cod;
            //excluirCliente(cod);
            break;

        default:
            break;
    }    
}

int main () {
    system("clear");
    cout << "1 - Cadastrar Cliente" << endl;
    cout << "2 - Cadastrar Acervo" << endl;
    cout << "3 - Locar" << endl;
    cout << "0 - Sair" << endl;
    int entrada;
    do{
        cin >> entrada;
        switch (entrada)
        {
            case 1:
                cadastroCliente;
                break;
            case 2:
                //Acervo.cadastrar();
                break;
            case 3:
                //Locar();
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