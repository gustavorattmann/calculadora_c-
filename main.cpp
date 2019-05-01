#include <iostream>
#include <stdlib.h>

using namespace std;

#define MENSAGEM "######### Seja bem-vindo a calculadora em C++ #########"

double num1, num2;

double soma(double num1, double num2)
{
    return num1 + num2;
}

double sub(double num1, double num2)
{
    return num1 - num2;
}

double divisao(double num1, double num2)
{
    return num1 / num2;
}

double multi(double num1, double num2)
{
    return num1 * num2;
}

int resto(int num1, int num2)
{
    return num1 % num2;
}

void menu()
{
    int operacao;

    cout << "#######################################################" << endl;
    cout << MENSAGEM << endl;
    cout << "#######################################################" << endl;

    cout << "\nInsira os números para efetuar o cálculo:" << endl;
    cin >> num1 >> num2;

    cout << "\nQual operação deseja efetuar?" << endl;
    cout << "(1 - soma, 2- subtração, 3 - divisão, 4 - multiplicação, 5 - resto de divisão):" << endl;
    cin >> operacao;

    cout << "O resultado é: ";

    switch (operacao) {
        case 1:
            cout << soma(num1, num2) << endl;
        break;
        case 2:
            cout << sub(num1, num2) << endl;
        break;
        case 3:
            cout << divisao(num1, num2) << endl;
        break;
        case 4:
            cout << multi(num1, num2) << endl;
        break;
        case 5:
            cout << resto(num1, num2) << endl;
        break;
        default:
            system("clear||cls");
            menu();
        break;
    }
}

void continuar()
{
    cout << "\nDeseja continuar?" << endl;
    cout << "(1 - sim, 2 - não): " << endl;
}

int main()
{
    int continua, contador;

    menu();

    contador = 0;

    while(contador < 1) {
        continuar();
        cin >> continua;

        if (continua == 1) {
            system("clear||cls");
            menu();
        } else if (continua == 2) {
            contador++;
            system("clear||cls");
            cout << "*****************************************" << endl;
            cout << "* Obrigado por utilizar nosso programa! *" << endl;
            cout << "*             Volte sempre!             *" << endl;
            cout << "*****************************************" << endl;
            system("exit");
        } else {
            system("clear||cls");
        }
    }

    return 0;
}
