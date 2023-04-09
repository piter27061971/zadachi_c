// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
enum  mounths { Vihod, January, February, March, April, May, June, July, August, September, October, November, December };

int main()
{
    setlocale(LC_ALL, "rus");

    mounths mounth= Vihod;
    int fl = mounth;
    bool exit = true;//выбор пользователя - выйти и продолжить


    while (exit)//пока exit равен true
    {
        std::cout << "\n Введите номер месяца (от 1 до 12) или 0 для выхода: ";
        std::cin >> fl;

        switch (fl)
        {
        case(January):
            std::cout << "\a Вы выбрали Январь!!!" << std::endl;
            break;

        case(February):
            std::cout << "\a Вы выбрали Февраль!";
            break;

        case(March):
            std::cout << "\a Вы выбрали Март!";
            break;

        case(April):
            std::cout << "\a Вы выбрали Апрель!";
            break;

        case(May):
            std::cout << "\a Вы выбрали Май!";
            break;

        case(June):
            std::cout << "\a Вы выбрали Июнь!";
            break;

        case(July):
            std::cout << "\a Вы выбрали Июль!";
            break;

        case(August):
            std::cout << "\a Вы выбрали Август!";
            break;

        case(September):
            std::cout << "\a Вы выбрали Сентябрь!";
            break;

        case(October):
            std::cout << "\a Вы выбрали Октябрь!";
            break;

        case(November):
            std::cout << "\a Вы выбрали Ноябрь!";
            break;

        case(December):
            std::cout << "\a Вы выбрали Декабрь!";
            break;

        case(Vihod):
            std::cout << "\a Вы решили выйти!";
            exit = false;
            break;

        default: std::cout << "\a\a\a Ошибка! У нас только 12 месяцев!\n\n";
        }

        
    }
    return 0;
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
