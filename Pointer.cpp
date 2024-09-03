#include<iostream>
using namespace std ;

// int main (){

//     int a = 120, b = 50 ;

//     int* x = &a, y = &b ;

//     cout << "a is : " << a << endl << "b is : " << b << endl << endl ;
//     cout << "x is : " << x << endl << "b is : " << y << endl ;

//     return 0 ;

// }

typedef int* hassan ;

int main (){

    int a = 120, b = 50 ;

    hassan x = &a, y = &b ;

    cout << "a is : " << a << endl << "b is : " << b << endl << endl ;
    cout << "x is : " << x << endl << "b is : " << y << endl ;

    return 0 ;

}