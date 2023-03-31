#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {

    int size = 5;
    int value = 10;

    // Create a vector of size "size" with
    // all values as "value".
    vector<int> VectorOfSizeAndValue(size, value);

    //initializing vector as an array
    vector<int> ArrayVector{2, 4, 5};

    //initialize vector from an array
    int array[] = {1, 3, 6, 7};
    int sizeOfArray = sizeof(array) / sizeof(array[0]);

    vector<int> VectorFromAnArray(array, array + sizeOfArray);
    for (int value: VectorFromAnArray) {
        cout << value << endl;
    }

}
