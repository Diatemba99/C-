#include <iostream>



using namespace std;

int main()
{
    short echangeur;

    cout << "Donner une la valeur num1 : ";
    short num1;
    cin >> num1;

    cout << "Donner une valeur de num2 : ";
    short num2;
    cin >> num2;

    cout << "La valeur avant changement: " << "num1 =" << num1;
    cout << "La valeur avant changement: " << "num2 =" << num2;

    echangeur = num1;

    num1 = num2;

    num2 = echangeur;

    cout << "La valeur apres changement: " << "num1 =" << num1;
    cout << "La valeur apres changement: " << "num2 =" << num2;








}
