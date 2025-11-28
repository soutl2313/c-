#include <iostream>

using namespace std;

int main() {
    int number;
    
    cout << "Введите трёхзначное число: ";
    cin >> number;
    
    if (number >= 100 && number <= 999) {
    
        int first_digit = number / 100;      
        int last_digit = number % 10;        
        
        if (first_digit > last_digit) {
            cout << "Первая цифра (" << first_digit << ") больше последней (" << last_digit << ")" << endl;
        } else if (last_digit > first_digit) {
            cout << "Последняя цифра (" << last_digit << ") больше первой (" << first_digit << ")" << endl;
        } else {
            cout << "Первая (" << first_digit << ") и последняя (" << last_digit << ") цифры равны" << endl;
        }
    } else {
        cout << "Ошибка! Введите трёхзначное число." << endl;
    }
    
    return 0;
}