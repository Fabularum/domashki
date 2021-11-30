#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;


void bolshe(int x) {
    if (x > 0) {
        cout << "y = 1\n";
    }
    if (x < 0) {
        cout << "y = -1\n";
    }
    if (x == 0) {
        cout << "y = 0\n";
    }
}

float rectangle(float a, float b) {
    if (a > 0 && b > 0){
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
    long long s, l=0;
    s = 0;
    while (l != m) {
        s = (m * s + i) % c;
        l++;
    }
    return s;
}



int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int zadacha;
    cout << "Введите номер задания ";
    cin >> zadacha;
    if (zadacha == 1) {
        ofstream f1("C:\\Users\\q\\Desktop\\sum.txt");
        float num[10] = {};
        for (int n = 0; n < 10; n++) {
            cout << "Введите число " << n << ": ";
            cin >> num[n];
        }
        for (int i = 0; i < 10; i++) {
            f1 << num[i] << " ";
        }
        f1.close();
        ifstream f2("C:\\Users\\q\\Desktop\\sum.txt");
        float num1 = 0, sum = 0;
        if (f2) {
            while (!f2.eof() && f2 >> num1) {
                sum += num1;
            }
            cout << "Сумма чисел равна " << sum << endl;
            f2.close();
        }
        return 0;
    }



    if (zadacha == 2) {
        int x;
        cout << "Введите x: ";
        cin >> x;
        bolshe(x);
    }


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
            cout << "Площадь равна: " << rectangle(a, b);
        }
        if (str == "2") {
            cout << "Введите его основание: ";
            cin >> a;
            cout << "Введите его высоту: ";
            cin >> h;
            cout << "Площадь равна: " << triangle(h, a);
        }
        if (str == "3") {
            cout << "Введите его радиус: ";
            cin >> r;
            cout << "Площадь равна: " << circle(r);
        }
    }
    if (zadacha == 4) {
        cout << endl;
        for (int i = 0; i < 7; ++i) {
            for (int n = 0; n < 9; n++) {
                cout << "*";
            }
            for (int n = 0; n < 40; n++) {
                cout << "-" ;
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
    }
    if (zadacha ) {

    }
}


