
#include <iostream>
#include <cmath>

using namespace std;

double f(double x); // обьявляем функцию
double derivative(double x, double h); // обьявляем функцию для вычисления производной

int main()
{
    setlocale(LC_ALL, "Ru");
    double x = 9.0; // исходная точка
    double h = 0.0001; // шаг для вычисления производной
    double abcd = derivative(x, h); // вычисляется производная
    cout << "Значение производной функции в точке " << x << " равно " << abcd << endl;
    return 0;
}

// определяем функцию f
double f(double x)
{
    return sin(x);
}

// определяем функцию для вычисления производной
double derivative(double x, double h)
{
    double f1 = f(x + h);
    double f2 = f(x - h);
    return (f1 - f2) / (2.0 * h);
}
