/*
#include <iostream>
#include <math.h>
int main()
{
    float res,a,b,ab4,a4,a3,a44a3b,b4,b3,chisl,znam;
    a = 100.0;
    b = 0.001;
    ab4 = pow(a-b,4); //возведение выражение (a + b)**4
    a4 = pow(a,4); //возведение в 4 степень a 
    a3 = pow(a,3); //возведение в 3 степень a
    a44a3b = a4 - 4 * a3 * b + 6 *a*a*b*b; //вычисление выражения a**4 -4a**3*b + 6a**2*b**2
    chisl = ab4 - a44a3b;//вычисление числителя         
    b4 = pow(b,4);//возведение в 4 степень b
    b3 = pow(b,3);//возведение в 3 степень b
    znam = b4 - 4 * a * b3;//вычисление знаменателя 
    res = chisl / znam;//нахождение результата
    std::cout << ab4 <<" ab4\n"<< a4 <<" a4\n"<< a3 <<" a3\n" << a44a3b << " a44a3b\n"  << chisl <<" chisl\n"<< b4 <<" b4\n"<< b3 <<" b3\n"<< znam <<" znam\n"<< res <<" res\n";

    return 0;
}
*/


/*

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    int n, m;
    cout << "n: ";
    cin >> n;
    cout << "m: ";
    cin >> m;

    cout << "1) " << n++ - m << endl;
    cout << "2) " << (m-- > n) << endl;
    cout << "3) " << (n-- > m) << endl;

    return 0;
}

*/