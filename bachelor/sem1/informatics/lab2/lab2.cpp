    #include <iostream>
    #include <cmath>
    #include <clocale>

using namespace std;
long long factorial(int n) 
{
    long long res = 1;
    for (int i = 1; i <= n; i++) 
    {
        res = res * i;
    }
    return res; 
}

int main()
{
    setlocale(LC_ALL, "Russian");
    double sum = 0.0; 
    for (int n = 1; n <= 13; n++)
    {
        sum += log(factorial(n)) / (n * n); // a_n = ln(n!) / (n^2)
    }

    cout << "Результат суммы ряда (13 членов): " << sum << endl;

    return 0;
}   