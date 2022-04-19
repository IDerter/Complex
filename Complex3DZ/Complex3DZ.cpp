#include <iostream>
#include "Complex.h"
int main()
{
    Complex a2(5, 4);
    Complex b2(3, 2);
    Complex a{ 4,-5 };
    Complex b{ 8,-10 };
    Complex c{ 0,0 };
    c = a2.sum(b2);
    c.print();
    c = b.sum(a);
    c.print();
    c = b.minus(a);
    c.print();
    c = b.ymnozh(a);
    c.print();
    c = b.delenie(a);
    c.print();


    fstream s1;
    int n = 0;
    float re = 0;
    float im = 0;
    string str;
    s1.open("D:\\complex.txt");
    s1 >> n;
    cout << n << endl;
    vector <Complex> v1;
    double max = 0;
    for (int i = 0; i < n; i++)
    {
        s1 >> re;
        s1 >> im;
        Complex x{ re, im };
        v1.push_back(x);
    }
    Complex a1{ 0,0 };

    for (int i = 0; i < v1.size(); i++) {
        if (v1[i].mod() > max) {
            max = v1[i].mod();
            a1 = { v1[i].re, v1[i].im };

        }
    }
    if (a1.im < 0) {
        cout << a1.re << "-" << abs(a1.im) << "i";
    }
    else {
        cout << a1.re << "+" << abs(a1.im) << "i";
    }

}