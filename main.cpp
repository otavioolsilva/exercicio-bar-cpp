#include <bits/stdc++.h>

using namespace std;

int main()
{
    string sexo;
    int qCerveja = 0, qRefri = 0, qEspetos = 0;
    double consumo, couvert, ingresso, total;

    //Leitura dos dados

    cout << "Sexo: ";
    cin >> sexo;
    cout << "Quantidade de cervejas: ";
    cin >> qCerveja;
    cout << "Quantidade de refrigerantes: ";
    cin >> qRefri;
    cout << "Quantidade de espetinhos: ";
    cin >> qEspetos;

    //Calculos

    if(sexo == "F"){
        ingresso = 8.00;
    } else {
        ingresso = 10.00;
    }

    consumo = (qCerveja * 5.0) + (qRefri * 3.0) + (qEspetos * 7.0);

    if(consumo > 30.0) couvert = 0.0;
    else couvert = 4.0;

    total = consumo + couvert + ingresso;

    //Relatorios

    cout << fixed << setprecision(2);

    cout << endl << "RELATORIO:" << endl;
    cout << "Consumo = R$ " << consumo << endl;
    if(couvert == 0.0) cout << "Isento de Couvert" << endl;
    else cout << "Couvert = R$ " << couvert << endl;
    cout << "Ingresso = R$ " << ingresso << endl;
    cout << endl << "Valor a pagar = R$ " << total << endl;

    return 0;
}
