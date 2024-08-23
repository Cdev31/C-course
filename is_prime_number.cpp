#include <iostream>
#include <string>
using namespace std;


bool isPrimeNumber( int number ){
  int counter = 2;

  while ( counter * counter <= number ){
    if( number % counter == 0 ){
      return false;
    }
    number++;
  }

  return true;
}

int main( int argc, char* argv[] ){

  int number; 

  cout << "Ingrese el numero que quiere evaluar si es primo" << endl;
  cin >> number;

  bool isPrime = isPrimeNumber( number );

  if( isPrime == true ){
    cout << "El numero: " << number << "es primo" << endl;
  }
  else {
    cout << "El numero: " << number << "no es primo" << endl;
  }

}