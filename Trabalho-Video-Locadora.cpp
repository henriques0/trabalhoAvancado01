#include<iostream>
#include<stdio.h>
#include <cstdlib>
#include"movimento/locacao.cpp"

using namespace std;

void cadastroAcervo(){
    system("clear");
    cout << "1 - Incluir | 2 - Alterar | 3 - Excluir | 4 - Listar" << endl;
    int entrada;
    acervo_t acer;
    cin >> entrada;
    system("clear");
    switch (entrada)
    {
        case 1:
            acer.cod = getCodAcervo();
            cout << "Titulo:" << endl;
            cin >> acer.titulo;
            cout << "Gênero:" << endl;
            cin >> acer.genero;
            cout << "Valor:" << endl;
            cin >> acer.valor;
            adicionarAcervo(acer);
            break;

        case 2:
            //listar acervos
            cout << "Cod.:" << endl;
            cin >> acer.cod;
            cout << "Titulo:" << endl;
            cin >> acer.titulo;
            cout << "Gênero:" << endl;
            cin >> acer.genero;
            cout << "Valor:" << endl;
            cin >> acer.valor;
            alterarAcervo(acer);
            break;

        case 3:
            //listar cliente
            int cod;
            cout << "Cod.:" << endl;
            cin >> cod;
            excluirAcervo(cod);
            break;

        case 4:
            listarAcervo();
            break;

        default:
            break;
    }
}

void cadastroCliente(){
    system("clear");
    cout << "1 - Incluir | 2 - Alterar | 3 - Excluir | 4 - Listar" << endl;
    int entrada;
    cliente_t cli;
    cin >> entrada;
    system("clear");
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
    cout << "1 - Locar | 2 - Devolver | 3 - Voltar " << endl;
    int entrada, codigo;
    float vr_total;
    cin >> entrada;
    system("clear");
    switch (entrada)
    {
    case 1:
        do{
            cout << "1 - Adicionar Acervo | 2 - Remover Acervo | 3 - Locar" << endl;
            cin >> entrada;
            system("clear");
            switch (entrada)
            {
            case 1:
                listarAcervoDisponivel();
                cout << "Digite o Código do Acervo a ser adicionado!" << endl;
                cin >> codigo;
                adicionarAcervoLocacao(buscarAcervo(codigo));
                break;

            case 2:
                listarAcervoLocacao();
                cout << "Digite o Código do Acervo a ser Removido!" << endl;
                cin >> codigo;
                removerAcervoLocacao(codigo);
                break;

            case 3:
                listarCliente();
                cout << "Digite o Código do Cliente" << endl;
                cin >> codigo;
                locar(buscarCliente(codigo));
                cout << "Locado com Sucesso!" << endl;
                break;

            default:
                break;
            }
        } while(entrada < 3);
        break;

    case 2: //Devolução
        char resposta;
        listarCliente();
        cout << "Escolha um Cliente" << endl;
        cin >> codigo;
        do{
            acervo_t acer;
            listarAcervoPorCliente(codigo);
            cout << "Qual Deseja Devolver?" << endl;
            cin >> codigo;
            acer = buscarAcervo(codigo);
            acer.cod_cliente = 0;
            vr_total = vr_total + acer.valor;
            cout << "Deseja Devolver Mais Algum? S/N" << endl;
        } while(resposta == 'S');
        break;
    default:
        break;
    }

}

void relatorio(){
    system("clear");
    
}

int main () {
    system("clear");
    int entrada;
    do{
        cout << "------------------------------" << endl;
        cout << "1 - Cadastrar Cliente" << endl;
        cout << "2 - Cadastrar Acervo" << endl;
        cout << "3 - Locar" << endl;
        cout << "4 - Relatórios" << endl;
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
            case 4:
                relatorio();
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
