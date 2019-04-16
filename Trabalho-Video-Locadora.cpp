#include<strings>
#include<iostream>
#include<list>
struct cliente {
    int cod;
    string nome;
    int idade;
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
                //Cliente.cadastrar();
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
