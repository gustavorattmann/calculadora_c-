#include <iostream>
#include <stdlib.h>

using namespace std;

#define MENSAGEM "######### Seja bem-vindo a calculadora em C++ #########"

int num1, num2;

void soma(int num1, int num2)
{
    cout << num1 + num2 << endl;
}

void sub(int num1, int num2)
{
    cout << num1 - num2 << endl;
}

void divisao(int num1, int num2)
{
    cout << num1 / num2 << endl;
}

void multi(int num1, int num2)
{
    cout << num1 * num2 << endl;
}

void resto(int num1, int num2)
{
    cout << num1 % num2 << endl;
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
            soma(num1, num2);
        break;
        case 2:
            sub(num1, num2);
        break;
        case 3:
            divisao(num1, num2);
        break;
        case 4:
            multi(num1, num2);
        break;
        case 5:
            resto(num1, num2);
        break;
        default:
            system("clear||cls");
            menu();
        break;
    }
}

void continuar()
{
    menu();
}

int main()
{
    int continua, contador;

    menu();

    contador = 0;

    while(contador < 1) {
        cout << "\nDeseja continuar?" << endl;
        cout << "(1 - sim, 2 - não): " << endl;
        cin >> continua;

        if (continua == 1) {
            system("clear||cls");
            continuar();
        } else {
            contador++;
            system("clear||cls");
            cout << "*****************************************" << endl;
            cout << "* Obrigado por utilizar nosso programa! *" << endl;
            cout << "*             Volte sempre!             *" << endl;
            cout << "*****************************************" << endl;
            system("exit");
        }
    }

    return 0;
}
