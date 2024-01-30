#include <bits/stdc++.h> 
#include<iostream>

#include<algorithm>

using namespace std;

class Fraction {
public:
    int Numerator;
    int Denominator;

    Fraction(int Numerator, int Denominator)
    {
        this->Numerator=Numerator;
        this->Denominator=Denominator;
    }

    void add(Fraction &a)
    {
        int n=Numerator*a.Denominator + Denominator*a.Numerator;
        int d=Denominator*a.Denominator;

        Numerator=n;
        Denominator=d;
    }

    void multiply(Fraction &a)
    {
        int n=Numerator*a.Numerator;
        int d=Denominator*a.Denominator;

        Numerator=n;
        Denominator=d;
    }

    void simplify(){

        int g=__gcd(Numerator,Denominator);
        if(g == 0 || Denominator == 0){
            return;
        }

        this->Numerator=Numerator/g;
        this->Denominator=Denominator/g;
    }

    void print()
    {
        cout<<Numerator<<"/"<<Denominator<<endl;
    }


};

int main() {

    int n,d,t;
    cin>>n>>d>>t;
    Fraction f1(n,d);

    while(t--)
    {
        int q,a,b;
        cin>>q>>a>>b;
        Fraction f2(a,b);

        if(q==1)
        {
            f1.add(f2);
            
        }
        else if(q==2)
        {
            f1.multiply(f2);
            
        }

        f1.simplify();
        f1.print();
    }
    return 0;
}
