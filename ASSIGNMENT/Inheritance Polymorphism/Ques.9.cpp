//(9) Write a Program of Two 1D Matrix Addition using Operator Overloading.

#include <iostream>
using namespace std;

class Matrix {
private:
    int size;
    int *data;

public:

    Matrix(int n) : size(n), data(new int[n]) {}


    ~Matrix() {
        delete[] data;
    }


    Matrix operator+(const Matrix &other) const {
        if (size != other.size) {
            cerr << "Matrices must be of the same size for addition.\n";
 
            return Matrix(0);
        }

        Matrix result(size);

        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i];
        }

        return result;
    }


    void display() const {
        for (int i = 0; i < size; ++i) {
           cout << data[i] << " ";
        }
        cout <<endl;
    }
};

int main() {

    int size = 5;

    Matrix matrix1(size);
    Matrix matrix2(size);

    for (int i = 0; i < size; ++i) {
        matrix1[i] = i + 1;
        matrix2[i] = i * 2;
    }


     cout << "Matrix 1: ";
    matrix1.display();

    cout << "Matrix 2: ";
    matrix2.display();

    Matrix resultMatrix = matrix1 + matrix2;


    cout << "Result Matrix: ";
    resultMatrix.display();

    return 0;
}


