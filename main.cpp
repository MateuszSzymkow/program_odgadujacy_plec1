#include <iostream>

using namespace std;
string imie;

int dlugosc;//bo musimy znac dlugosc lancucha zeby znalezc ostatnia litere

int main()
{
    cout << "Jak masz na imie?" << endl;
    cin>>imie;

    dlugosc=imie.length();//funkcja length liczy dlyugosc lancucha


    if(imie[dlugosc-1]=='a')//UWAGA literka a jest zapisana w pojedynczym cudzys³owie a nie w podwojnym,
    {                       //trzeba o tym pamietac bo sprawia problemy taka sytuacj...
        cout<<"Kobieta";     //literka a zapisana w tym: "a" jest traktowana jak napis czyli konczy sie NULLEM, a jak damy pojedynczy to jest tylko literka a i koniec bez null

    }
    else
    {
        cout<<"Mezczyzna";
    }



    return 0;
}
