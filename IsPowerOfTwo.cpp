#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::boolalpha;

bool IsPowerOfTwo(int number);

int main()
{
    int number;
    cin >> number;
    cout << boolalpha << IsPowerOfTwo(number);
}
bool IsPowerOfTwo(int number) {
    int stepen = 1;
    while (pow(2, stepen) < number) {
        stepen++;
    }
    if (pow(2, stepen) == number) {
        return true;
    }
    else {
        return false;
    }
}