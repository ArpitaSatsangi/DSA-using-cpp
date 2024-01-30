#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    
    public:
    int R;
    int I;

    ComplexNumbers(int R, int I)
    {
        this->I=I;
        this->R=R;
    }

    void print()
    {
        cout<<R<<" + i"<<I;
    }

    void plus( ComplexNumbers &a)
    {
        R = R +a.R;
        I = I+a.I;
    }

    void multiply(ComplexNumbers &a)
    {
        int real = (R*a.R) - (I*a.I) ;
        I = (R*a.I) + (I*a.R);
        R = real;
    }

};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}
