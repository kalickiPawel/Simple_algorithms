//
//  main.cpp
//  Simple_algorithms
//
//  Created by Paweł Kalicki on 03/12/2020.
//

#include <iostream>

using namespace std;

int fib_rek(int n)
{
    if(n<3) return 1;
    return fib_rek(n-2)+fib_rek(n-1);
}

void fib_iter(int n)
{
    long long a = 0, b = 1;
    for(int i=0; i<n; i++)
    {
        cout<<b<<" ";
        b+=a;
        a=b-a;
    }
}

int main(int argc, const char * argv[])
{
    int n;

    cout<<"Podaj liczbę: ";
    cin>>n;
    cout<<"Iteracyjnie: ";
    fib_iter(n);
    cout << endl;
    cout<<"Rekurencyjnie: fib el: ["<<n<<"] = "<<fib_rek(n)<<endl;

    return 0;
}

