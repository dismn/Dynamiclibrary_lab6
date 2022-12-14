//Copyright (c), Semeniuta Diana 202 TN, 2022


#include "../Complexdll/Complexdll.h"
#include <iostream>

using namespace std;
using namespace Complexfunc;

int main()
{
    Complex M1(5, 6), M2(4, 3), M3;
    M1.Display();
    M2.Display();


    cout << endl;
    M3 = M1 + M2;
    M3.Display();


    M1.Sub(M2);
    M1.Display();
    M1.Mul(M2);
    M1.Display();
    M1.Div(M2);
    M1.Display();





}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
