#include <iostream>
using namespace std;

class Matrix {
private:
    int* data;
    int size;

public:
    Matrix(int* arr, int s) : size(s) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = arr[i];
        }
    }
    Matrix(const Matrix& other) : size(other.size) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
    }
    ~Matrix() {
        delete[] data;
    }
    Matrix operator+(const Matrix& other) const {
        if (size != other.size) {
            throw invalid_argument("Matrices must be of the same size");
        }

        int* result = new int[size];
        for (int i = 0; i < size; ++i) {
            result[i] = data[i] + other.data[i];
        }

        return Matrix(result, size);
    }

    void display() const {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    
    int size = sizeof(arr1) / sizeof(arr1[0]);
    Matrix mat1(arr1, size);
    Matrix mat2(arr2, size);

    cout << "Matrix 1: ";
    mat1.display();
    cout << "Matrix 2: ";
    mat2.display();
    Matrix result = mat1 + mat2;
    cout << "Matrix after addition: ";
    result.display();
}
