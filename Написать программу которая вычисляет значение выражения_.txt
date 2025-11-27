/*Написать программу , которая вычисляет значение выражения*/
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
 int x,y;
 float z;
 cout << "Введите значения пременных x и y" << endl;
 cin >> x >> y;
 z = (sin(x) + cos(y))/(cos(x) - sin(y)) + tan(x*y);
 cout << "Значение выражения =" << z;
 return 0;

}