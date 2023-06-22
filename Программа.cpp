
#include <iostream>
#include <cmath>

using namespace std;

double f(double x); // ��������� �������
double derivative(double x, double h); // ��������� ������� ��� ���������� �����������

int main()
{
    setlocale(LC_ALL, "Ru");
    double x = 9.0; // �������� �����
    double h = 0.0001; // ��� ��� ���������� �����������
    double abcd = derivative(x, h); // ����������� �����������
    cout << "�������� ����������� ������� � ����� " << x << " ����� " << abcd << endl;
    return 0;
}

// ���������� ������� f
double f(double x)
{
    return sin(x);
}

// ���������� ������� ��� ���������� �����������
double derivative(double x, double h)
{
    double f1 = f(x + h);
    double f2 = f(x - h);
    return (f1 - f2) / (2.0 * h);
}
