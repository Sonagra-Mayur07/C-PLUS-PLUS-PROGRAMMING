//(10) Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <cstring>
using namespace std;

class Concatenator {
private:
    char* result;

public:
   
    Concatenator(const char* str1, const char* str2) {
 
        result = new char[strlen(str1) + strlen(str2) + 1];


        strcpy(result, str1);
        strcat(result, str2);
    }


    ~Concatenator() {
        delete[] result;
    }


    Concatenator operator+(const Concatenator& other) const {

        return Concatenator(result, other.result);
    }

 
    void display() const {
        cout << "Concatenated String: " << result <<=endl;
    }
};

int main() {

    const char* str1 = "Hello, ";
    const char* str2 = "world!";


    Concatenator concat1(str1, "");
    Concatenator concat2("", str2);

    Concatenator resultConcat = concat1 + concat2;


    resultConcat.display();

    return 0;
}

