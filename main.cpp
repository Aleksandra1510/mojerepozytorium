#include <iostream>

using namespace std;
void pobierzdane (float& l1, float& l2, char& znak)
{

    cin >> l1;
    cin >> znak;
    cin >> l2;
}
void dodaj(float l1, float l2)
{
    float wynik;
    wynik = l1 + l2;
    cout << wynik;
}
int main()
{


    float l1;
    float l2;
    char znak;
 pobierzdane(l1,l2,znak);

 if(znak == '+')
 {
   dodaj(l1, l2);

 }






    return 0;
}
