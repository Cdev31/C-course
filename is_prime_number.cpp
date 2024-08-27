#include <iostream>
#include <string>
#include <cmath>

using namespace std;


bool isPrimeNumber ( int num ){

    if( num == 1 ) return false;

    int squareRoot = sqrt( num );  
    int counter = 1;
    int decrement = squareRoot  ;

    while ( counter < squareRoot ){
     
      if( decrement == 1 ){

        return false;
      
      }

      if( num % decrement == 0 ){

        return false;
      }

      counter++;
      decrement--;
    }
    return true;
}

int main(){

  int num;
  cout << "Ingrese el numero a evaluar si es primo" << endl;
  cin >> num;

  bool isPrime = isPrimeNumber( num );

  if( isPrime == true ){
    cout << "Su numero:" << num << " es primo" << endl;
  }
  else cout << "El numero:" << num << " no es primo" << endl;

};