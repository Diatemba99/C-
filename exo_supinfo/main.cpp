#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    cout << "Donner une valeur réelle : ";
    float number;
    cin >> number;

    float carre = sqrt(number);


    if (number > 0)
    {
        cout << "La racine carree de " << number << " est " << carre;
    }
    else
    {
        cout << " nous ne pouvons pas traiter votre requête";
    }


}
