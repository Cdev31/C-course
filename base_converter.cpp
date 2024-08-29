#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

string convertDecimal( int number ){

    string binaryNumber = "";

    int decrement = number;

    while ( decrement > 0 ){
        cout << "decrement" << decrement << endl;
        if ( decrement == 1 ){

            binaryNumber = binaryNumber + to_string(1);
            decrement--;

        }
        else if( decrement % 2 == 1 ){
            
            decrement = decrement -1;
            binaryNumber = binaryNumber + to_string(1);

        }
        else if( decrement % 2 == 0 ){
          
            int newNumber = decrement / 2;
            decrement = newNumber;
            binaryNumber = binaryNumber + to_string(0);

        }
    }
    reverse( binaryNumber.begin(), binaryNumber.end() );
    return binaryNumber;

}

int main (){

    int number;
    cout << "Ingrese su numero decimal" << endl;
    cin >> number;

    string binaryNumber = convertDecimal( number );

    cout << "Su numero binario es: " << binaryNumber << endl;

}