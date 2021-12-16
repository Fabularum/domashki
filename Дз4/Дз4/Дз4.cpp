#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;


 int bolshe(int x) {
    if (x > 0) {
        return 1;
    }
    if (x < 0) {
        return -1;
    }
    if (x == 0) {
        return 0;
    }
}

//геометрия
float rectangle(float a, float b) {
    if (a > 0 && b > 0) {
        float s;
        return s = a * b;
    }
    else {
        cout << "Неверные значения\n";
    }
}
float triangle(float h, float a) {
    if (a > 0 && h > 0) {
        float s;
        return s = 0.5 * a * h;
    }
    else {
        cout << "Неверные значения\n";
    }
}
float circle(float r) {
    if (r > 0) {
        float s, pi = 3.14;
        return s = pi * r * r;
    }
    else {
        cout << "Неверные значения\n";
    }
}
long rand(long m, long i, long c) {
    long long s, l = 0;
    s = 0;
    while (l != m) {
        s = (m * s + i) % c;
        l++;
    }
    return s;
}

int perevod(char chislo1) {
    int n = 0;
    switch (toupper(chislo1)) {
    case '0': n = 0; break;
    case '1': n = 1; break;
    case '2': n = 2; break;
    case '3': n = 3; break;
    case '4': n = 4; break;
    case '5': n = 5; break;
    case '6': n = 6; break;
    case '7': n = 7; break;
    case '8': n = 8; break;
    case '9': n = 9; break;
    case 'A': n = 10; break;
    case 'B': n = 11; break;
    case 'C': n = 12; break;
    case 'D': n = 13; break;
    case 'E': n = 14; break;
    case 'F': n = 15; break;
    case 'G': n = 16; break;
    case 'H': n = 17; break;
    case 'I': n = 18; break;
    case 'J': n = 19; break;
    }
    return n;
}

string perevod1(int result3) {
    string  n;
    switch (result3) {
    case 0: n = "0"; break;
    case 1: n = "1"; break;
    case 2: n = "2"; break;
    case 3: n = "3"; break;
    case 4: n = "4"; break;
    case 5: n = "5"; break;
    case 6: n = "6"; break;
    case 7: n = "7"; break;
    case 8: n = "8"; break;
    case 9: n = "9"; break;
    case 10: n = "A"; break;
    case 11: n = "B"; break;
    case 12: n = "C"; break;
    case 13: n = "D"; break;
    case 14: n = "E"; break;
    case 15: n = "F"; break;
    case 16: n = "G"; break;
    case 17: n = "H"; break;
    case 18: n = "I"; break;
    case 19: n = "J"; break;
    }
    return n;
}

int convert(char x)
{
    switch (toupper(x))
    {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    case 'IV': return 4;
    case 'IX': return 9;
    case 'IL': return 49;
    case 'IC': return 99;
    case 'ID': return 499;
    case 'IM': return 999;
    case 'XL': return 40;
    case 'XC': return 90;
    case 'XD': return 490;
    case 'XM': return 990;
    }
}





int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    bool loopy = true;
    while (loopy == true) {
        int zadacha;
        cout << "Введите номер задания ";
        cin >> zadacha;

        if (zadacha == 6) {// проверка последующего символа, замена IV на IIII
            string str;
            cout << "Введите римское число: ";
            cin >> str;
            int x;
            char str1[255];
            for (int i = 0; str.length(); i++){
                cout << convert(str[i]);
            }
        }
        if (zadacha == 1) {
            ofstream f1("C:\\Users\\ZzZ\\Desktop\\sum.txt");
            float num[10] = {};
            for (int n = 1; n < 11; n++) {
                cout << "Введите число " << n << ": ";
                cin >> num[n];
            }
            for (int i = 0; i < 10; i++) {
                f1 << num[i] << " ";
            }
            f1.close();
            ifstream f2("C:\\Users\\ZzZ\\Desktop\\sum.txt");
            float num1 = 0, sum = 0;
            if (f2) {
                while (!f2.eof() && f2 >> num1) {
                    sum += num1;
                }
                cout << "Сумма чисел равна " << sum << endl;
                f2.close();
            }
        }



       /* if (zadacha == 2) {
            int x;
            cout << "Введите x: ";
            cin >> x;
            bolshe(x);
        }*/


        if (zadacha == 3) {
            string str;
            float a, b, r, h;
            cout << "Площадь какой фигуры надо найти?(1.прямоугольник/2.треугольник/3.круг): ";
            cin >> str;
            if (str == "1") {
                cout << "Введите его ширину: ";
                cin >> a;
                cout << "Введите его длину: ";
                cin >> b;
                cout << "Площадь равна: " << rectangle(a, b) << endl;
            }
            if (str == "2") {
                cout << "Введите его основание: ";
                cin >> a;
                cout << "Введите его высоту: ";
                cin >> h;
                cout << "Площадь равна: " << triangle(h, a) << endl;
            }
            if (str == "3") {
                cout << "Введите его радиус: ";
                cin >> r;
                cout << "Площадь равна: " << circle(r) << endl;
            }
        }
        if (zadacha == 4) {
            cout << endl;
            for (int i = 0; i < 7; ++i) {
                for (int n = 0; n < 9; n++) {
                    cout << "*";
                }
                for (int n = 0; n < 40; n++) {
                    cout << "-";
                }
                cout << endl;
            }
            for (int i = 0; i < 6; i++) {
                for (int n = 0; n < 49; n++) {
                    cout << "-";
                }
                cout << endl;
            }
        }
        if (zadacha == 7) {
            long long s;
            int m, i, c;
            cout << "Введите m: ";
            cin >> m;
            cout << "Введите i: ";
            cin >> i;
            cout << "Введите c: ";
            cin >> c;
            cout << rand(m, i, c);
            cout << endl;
        }
        if (zadacha == 5) {
            string m[31][51];
            for (int x = 0; x < 31; x++) {
                for (int y = 0; y < 51; y++) {
                    m[x][y] = " ";
                }
            }
            for (int y = 0; y < 51; y++) {
                m[15][y] = "-";
            }
            for (int x = 0; x < 31; x++) {
                m[x][25] = "|";
            }
            m[15][25] = "О";
            for (int y = 0; y < 51; y++) {
                for (int k = 0; k < 1; k++) {
                    int x = abs(sin(y / 3.99) * 10);
                    if (sin(y / 3.99) < 0) {
                        x += 15 + k;
                    }
                    else {
                        x = 15 - x - k;
                    }
                    m[x][y] = "O";

                }
            }
            for (int i = 0; i < 31; i++) {
                for (int j = 0; j < 51; j++) {
                    cout << m[i][j] << " ";
                }
                cout << "\n";
            }

            return 0;
        }
        if (zadacha == 8) {
            float sumk, sumd;
            int aMatrix[3][4] = { {5, 2, 0, 10},
                                  {3, 5, 2, 5},
                                  {20, 0, 0, 0} };

            float bMatrix[4][2] = { {1.20, 0.5},
                                    {2.80, 0.4},
                                    {5.00, 1.0},
                                    {2.00, 1.5} };

            float product[3][2] = { {0, 0},
                                    {0, 0},
                                    {0, 0} };
            cout << "Полученная матрица: " << endl;
            for (int row = 0; row < 3; row++) {
                for (int col = 0; col < 2; col++) {
                    for (int inner = 0; inner < 2; inner++) {
                        product[row][col] += aMatrix[row][inner] * bMatrix[inner][col];
                    }
                    cout << product[row][col] << " ";
                }
                cout << endl;
            }
            sumk = product[0][1] + product[1][1] + product[2][1];
            sumd = product[0][0] + product[1][0] + product[2][0];
            cout << "Больше всего денег с продажи получил 2 продавец: " << product[1][0] << endl;
            cout << "Меньше всего денег с продажи получил 3 продавец: " << product[2][0] << endl;
            cout << "Наибольшие комиссионные получил 1 продавец: " << product[0][1] << endl;
            cout << "Наименьшие комиссионные получил 3 продавец: " << product[2][1] << endl;
            cout << "Общая сумма денег: " << sumd << endl;
            cout << "Общая сумма комиссионных: " << sumk << endl;
            cout << "Общая сумма денег: " << sumd + sumk << endl;
            cout << endl;
        }
        if (zadacha == 9) {
            string chislo;
            int iz, v, k, i = 1, result1, result2=0;
            char chislo1[100];
            cout << "Введите число: ";
            cin >> chislo;
            cout << "Введите из какой СС перевести: ";
            cin >> iz;
            cout << "Введите в какую СС перевести: ";
            cin >> v;
            for (k = 0; k < chislo.length(); k++) {
                chislo1[k] = chislo[k];
                if (perevod(chislo1[k]) >= iz) {
                    cout << "неверное число" << endl;
                    break;
                }
                else {
                    result1 = perevod(chislo1[k]) * pow(iz, chislo.length() - i);
                    //cout << perevod(chislo1[k]) << "*" << iz << "^" << chislo.length() - i;
                    i++;
                    chislo1[k] = 0;
                    result2 += result1;
                }
            }
            cout << endl << "Введенное число в десятичной СС: " << result2 << endl;
            char result3;
            int ost;
            string res;
            while (result2) {
                ost = result2 % v;
                result2 = (result2 - ost) / v;
                res += perevod1(ost);
            }
            string end(res.rbegin(), res.rend());
            cout << "Ваше число в " << v << " системе счисления: " << end << endl;
        }
       
    }
}