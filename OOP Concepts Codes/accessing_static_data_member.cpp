#include <iostream>
using namespace std;

class Algebra {
    int a, b;

    public:
        static int c; //Declaration of static
        Algebra() {
            a = b = 0;
        }

};

int Algebra::c(0); //Defination of static

int main() {
    Algebra obj1;
    cout << Algebra::c << endl;
    cout << obj1.c << endl; // as c is declared in public so it in easily accessible here by obj1
    return 0;
}