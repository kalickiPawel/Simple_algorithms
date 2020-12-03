//
//  main.cpp
//  Simple_algorithms
//
//  Created by Paweł Kalicki on 03/12/2020.
//

#include <iostream>

using namespace std;

long long silnia_rek(int n)
{
    if(n<2) return 1;
    return n*silnia_rek(n-1);
}

long long silnia_iter(int n)
{
    long long silnia = 1;
    for(int i=n; i>1; i--) silnia*=i;
    return silnia;
}

int main(int argc, const char * argv[])
{
    int n;

    cout<<"Podaj liczbę: ";
    cin>>n;
    cout<<"Iteracyjnie: "<<n<<"! = "<<silnia_iter(n)<<endl;
    cout<<"Rekurencyjnie: "<<n<<"! = "<<silnia_rek(n)<<endl;

    return 0;
}
