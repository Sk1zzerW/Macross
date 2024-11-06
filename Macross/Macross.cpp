#include <iostream>
using namespace std;

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(x) ((x) * (x))
#define IS_EVEN(x) ((x) % 2 == 0)
#define IS_ODD(x) ((x) % 2 != 0)

int main() {
    int num1, num2;

    cout << "Введите два числа: ";
    cin >> num1 >> num2;

    cout << "Меньшее из двух чисел " << MIN(num1, num2) << endl;
    cout << "Большее из двух чисел " << MAX(num1, num2) << endl;
    cout << "Квадрат первого числа " << SQUARE(num1) << endl;
    cout << "Квадрат второго числа " << SQUARE(num2) << endl;

    cout << "Первое число " << num1 << (IS_EVEN(num1) ? " четное" : " нечетное") << endl;
    cout << "Второе число " << num2 << (IS_ODD(num2) ? " нечетное" : " четное") << endl;

    return 0;
}
