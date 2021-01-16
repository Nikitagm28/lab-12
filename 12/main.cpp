1 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
  setlocale(LC_ALL, "rus");
       int data, mounth;
       cin >> data >> mounth;
       vector <string> x = {"первое", "второе", "третье", "четвертое", "пятое", "шестое",
"седьмое", "восьмое", "девятое", "десятое", "одинадцатое" ,"двенадцатое" , "тринадцатое", "четырнадцатое", "пятнадцатое", "шестнадцатое", "семнадцатое", "восемнадцатое", "девятнадцатое", "двадцатое", "двадцать первое", "двадцать второе", "двадцать третье", "двадцать четверное", "двадцать пятое", "двадцать шестое", "двадцать седьмое", "двадцать восьмое", "двадцать девятое", "тридцатое", "тридцать первое"};
       vector <string> y = { "января", "февраля", "марта", "апреля", "мая", "июня",
"июля", "августа", "сентября", "октября", "ноября", "декабря"};
cout << x[data - 1] << " " << y[mounth - 1];
}

2 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");
    char c;
    cin >> c;
    int n;
    cin >> n;
    if (c == 'С') {
        if (n == 0)
            cout << "Север";
        else if (n == 1)
            cout << "Запад";
        else cout << "Восток";

    }
    else if (c == 'Ю') {
        if (n == 0)
            cout << "Юг";
        else if (n == -1)
            cout << "Запад";
        else cout << "Восток";

    }
    else if (c == 'З') {
        if (n == 0)
            cout << "Запад";
        else if (n == -1)
            cout << "Север";
        else cout << "Юг";

    }
    else if (c == 'В'){
        if (n == 0)
            cout << "Восток";
        else if (n == 1)
            cout << "Север";
        else cout << "Юг";

    }
}

3 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");
    vector <string> days = {"десять", "одинадцать", "двенадцать", "тринадцать",
"четырнадцать", "пятнадцать", "шестнадцать ", "семнадцать", "восемнадцать",
"девятнадцать", "двадцать", "двадцать одно", "двадцать два", "двадцать три", "двадцать
четыре", "двадцать пять", "двадцать шесть", "двадцать семь", "двадцать восемь", "двадцать
девять", "тридцать", "тридцать одно", "тридцать два", "тридцать три", "тридцать четыре",
"тридцать пять", "тридцать шесть", "тридцать семь", "тридцать восемь", "тридцать девять",
"сорок"};
    cout << days[x - 10];
    if (x > 9 && x < 21) cout << " заданий";
    else if (x == 21 || x == 31) cout << " задание";
    else if (x > 21 && x < 25) cout << " задания ";
    else if (x > 24 && x < 31) cout << " заданий";
    else if (x > 31 && x < 35) cout << " задания ";
    else if (x > 34 && x < 41) cout << " заданий";

}

4 задание:
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    setlocale(LC_ALL, "rus");
    switch (n / 100) {
        case 1:
            cout << "сто ";
            break;
        case 2:
            cout <<"двести ";
            break;
        case 3:
            cout << "триста ";
            break;
        case 4:
            cout << "четыреста ";
            break;
        case 5:
            cout << "пятьсот ";
            break;
        case 6:
            cout << "шестьсот ";
            break;
        case 7:
            cout << "семьсот ";
            break;
        case 8:
            cout << "восемьсот ";
            break;
        case 9:
            cout << "девятьсот ";
            break;

    }
    if ((n % 100) / 10 == 1)
        switch (n % 100) {
            case 10:
                cout << "десять\n";
                break;
            case 11:
                cout << "одинадцать\n";
                break;
            case 12:
                cout << "двенадцать\n";
                break;
            case 13:
                cout << "тринадцать\n";
                break;
            case 14:
                cout << "четырнадцать\n";
                break;
            case 15:
                cout << "пятнадцать\n";
                break;
            case 16:
                cout << "шестнадцать\n";
                break;
            case 17:
                cout << "семнадцать\n";
                break;
            case 18:
                cout << "восемнадцать\n";
                break;
            case 19:
                cout << "девятнадцать\n";
                break;

        }
    else {
        switch ((n % 100) / 10) {
            case 2:
                cout <<"двадцать ";
                break;
            case 3:
                cout << "тридцать ";
                break;
            case 4:
                cout << "сорок ";
                break;
            case 5:
                cout << "пятьдесят ";
                break;
            case 6:
                cout << "шестьдесят ";
                break;
            case 7:
                cout << "семьдесят ";
                break;
            case 8:
                cout << "восемьдесят ";
                break;
            case 9:
                cout << "девяносто ";
                break;

        }
        switch (n % 10) {
            case 1:
                cout << "один\n";
                break;
            case 2:
                cout <<"два\n";
                break;
            case 3:
                cout << "три\n";
                break;
            case 4:
                cout << "четыре\n";
                break;
            case 5:
                cout << "пять\n";
                break;
            case 6:
                cout << "шесть\n";
                break;
            case 7:
                cout << "семь\n";
                break;
            case 8:
                cout << "восемь\n";
                break;
            case 9:
                cout <<"девять\n";
                break;

        }

    }
    return 0;

}
