#include <iostream>
using namespace std;
int main(void)
{
    int troco;
    cout << "Digite o numero de moedas de 1 centavo que deseja trocar: ";
    cin >> troco;
    cout << "\n";
    
    cout << "Numero de notas de 2 reais: " << troco/200 << "\n";
    troco %= 200;
    cout << "Numero de moedas de 1 real: " << troco/100 << "\n";
    troco %= 100;
    cout << "Numero de moedas de 50 centavos: " << troco/50 << "\n";
    troco %= 50;
    cout << "Numero de moedas de 25 centavos: " << troco/25 << "\n";
    troco %= 25;
    cout << "Numero de moedas de 10 centavos: " << troco/10 << "\n";
    troco %= 10;
    cout << "Numero de moedas de 5 centavos: " << troco/5 << "\n";
    troco %= 5;
    cout << "Numero de moedas de 1 centavo: " << troco << "\n";
    
    cin.get();
    return 0;
}
