//
//  main.cpp
//  Zadanie 1 WiO pdf
//
//  Created by Wojciech Szyjka on 13/11/2020.
//

#include <iostream>
#include <cmath>
using namespace std;

int a ;
int b ;

int main(int argc, const char * argv[]) {
    
    cout << "Wprowadź A  " ;
    cin >> a ;
    cout << '\n' ;
    cout << "Wprowadź B " ;
    cin >> b ;
    cout << endl ;
    cout << (a < b) << ' ' << (a>b) << endl
        << boolalpha << (a != b) << endl ;
    cout << (a <= b) << ' ' << (a >= b) << endl << noboolalpha << (a == b) << endl ;
    
    return 0 ;
}

