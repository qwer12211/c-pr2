#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double m = 0.0;
    double a, b;
    int o;

    do
    {
        cout << "1 - Сложение\n";
        cout << "2 - Вычитание\n";
        cout << "3 - Частное\n";
        cout << "4 - Произведение\n";
        cout << "5 - Возведение в степень\n";
        cout << "6 - Нахождение квадратного корня\n";
        cout << "7 - Нахождение 1 процента от числа\n";
        cout << "8 - Найти факториал числа\n";
        cout << "9 - Выйти из программы\n";
        cin >> o;

        switch (o)
        {
        case 1:
            cout << "Введите первое число ";
            cin >> a;
            cout << "Введите второе число ";
            cin >> b;
            m = a + b;
            cout << "Ответ " << m << endl;
            break;
        case 2:
            cout << "Введите первое число ";
            cin >> a;
            cout << "Введите второе число ";
            cin >> b;
            m = a - b;
            cout << "Ответ " << m << endl;
            break;
        case 3:
            cout << "Введите первое число ";
            cin >> a;
            cout << "Введите второе число ";
            cin >> b;
            m = a / b;
            cout << "Ответ " << m << endl;
            break;
        case 4:
            cout << "Введите первое число ";
            cin >> a;
            cout << "Введите второе число ";
            cin >> b;
            m = a * b;
            cout << "Ответ " << m << endl;
            break;
        case 5:
            cout << "Введите число ";
            cin >> a;
            cout << "Введите степень ";
            cin >> b;
            cout << "Ответ " << pow(a, b) << endl;
            break;
        case 6:
            cout << "Введите число ";
            cin >> a;
            m = sqrt(a);
            cout << "Ответ " << m << endl;
            break;
        case 7:
            cout << "Введите число ";
            cin >> a;
            m = 0.01 * a;
            cout << "Ответ " << m << endl;
            break;
        case 8:
            cout << "Введите число ";
            cin >> a;
           
        case 9:
            break;
        default:
            cout << "Неверный выбор операции, попробуйте снова.\n";
            break;
        }
    } while (o == 9);

    return 0;
}
