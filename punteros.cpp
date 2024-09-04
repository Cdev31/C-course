#include <iostream>
#include <string>

using namespace std;

// int main(int argc, char const *argv[])
// {
//     char letra = 'A';

//     char *puntero = &letra;

//     cout << (int *) &letra << endl;

//     cout << (int * ) puntero << endl;

// }

// struct Persona {
//     string name;
//     int edad;
// };

// int main(int argc, char const *argv[])
// {
//     Persona *p = new Persona();

//     p->edad = 28;
//     p->name = "Juan";

//     cout << p->edad << endl << p->name << endl;
    
// }

int main(int argc, char const *argv[])
{
    union number_letter {
        int number;
        char letter;
    };

    number_letter x = {'A'};
    number_letter y = {2};
    
    cout << "X como un numero:" << x.letter << endl;
    cout << "y como una letra" << y.letter << endl;

    enum days_week { mondar = 'M', thuesday = 'T', wednesday = 'W' };

    days_week day = thuesday;

    cout << (char) day << endl;
} 
