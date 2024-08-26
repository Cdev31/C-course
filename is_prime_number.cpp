#include <iostream>
#include <string>
#include <cmath>

using namespace std;


bool isPrimeNumber ( int num ){
    int squareRoot = round( sqrt( num ) ); 

    int counter = 0;
    int decrement = squareRoot;
    while ( counter < squareRoot ){
      if( squareRoot % decrement == 0 ){
        return true;
      }
      counter++;
      decrement--;
    }
    return false;
}

int main(){

  int num;
  cout << "Ingrese el numero a evaluar si es primo" << endl;
  cin >> num;

  bool isPrime = isPrimeNumber( num );

  if( isPrime == true ){
    cout << "Su numero:" << num << "es primo" << endl;
  }
  else cout << "El numero:" << num << "no es primo" << endl;

};