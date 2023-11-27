#include <iostream>
using namespace std;
int main()

{
int a , b , c ;
    cout << "Enter the  num1" << endl ;
    cin >>  a ;
    cout << "Enter the  num2" << endl ;
    cin >>  b ;
    cout << "Enter the  num3" << endl ;
    cin >>  c ;
    if ( a > b && a > c )
    {
         cout << "THE NUM IS " << a << endl ;
    }

    else if ( b > a && b > c  )
    {
         cout << "THE NUM IS " << b << endl ;
    }

    else
        cout << "THE NUM IS " << c << endl ;
}
