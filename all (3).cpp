#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r1, r2;
    const double PI = 3.141592653589793;
    
    cout << "Введите внутренний радиус кольца (r1): ";
    cin >> r1;
    cout << "Введите внешний радиус кольца (r2): ";
    cin >> r2;
    
    if (r1 < 0 || r2 < 0) {
        cout << "Ошибка! Радиусы не могут быть отрицательными." << endl;
    } else if (r1 >= r2) {
        cout << "Ошибка! Внешний радиус должен быть больше внутреннего." << endl;
    } else {
        
        double area = PI * (r2 * r2 - r1 * r1);
        
        cout << "Площадь кольца: " << area << endl;
        cout << "Площадь кольца (округленно): " << round(area * 100) / 100 << endl;
    }
    
    return 0;
}