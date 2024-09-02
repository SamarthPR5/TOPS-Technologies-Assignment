#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int size) {
    bool swapped;
    for (int i = 0; i < size - 1; ++i) {
        swapped = false;
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

template <typename T>
void printArray(const T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArray[] = {13, 12, 43, 2, 78, 31, 90};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    
    cout << "Original integer array: ";
    printArray(intArray, intSize);
    bubbleSort(intArray, intSize);
    cout << "Sorted integer array: ";
    printArray(intArray, intSize);

    double doubleArray[] = {54.5, 84.2, 15.8, 12.4, 22.1, 41.9, 90.0};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    
    cout << "Original double array: ";
    printArray(doubleArray, doubleSize);
    bubbleSort(doubleArray, doubleSize);
    
    cout << "Sorted double array: ";
    printArray(doubleArray, doubleSize);
    char charArray[] = {'g', 'e', 'a', 'c', 'b', 'f', 'd'};
    int charSize = sizeof(charArray) / sizeof(charArray[0]); 
    cout << "Original char array: ";
    printArray(charArray, charSize);
    bubbleSort(charArray, charSize);
    cout << "Sorted char array: ";
    printArray(charArray, charSize);

}
