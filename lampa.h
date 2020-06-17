#include <iostream>

using namespace std;
//---------------------------------------------------------------------------

class zarowka
{
private:
    int moc;
    int napiecie;

public:
    zarowka(int M_znam, int U_znam){
        moc = M_znam;
        napiecie = U_znam;
        }

void zasilanie(float ile_volt);
};
//---------------------------------------------------------------------------

class lampa
{
private:
    zarowka pierwsza, druga;
    bool wlaczona1, wlaczona2;
    float napiecie_zasilania;

public:
    lampa(): pierwsza(150, 250), druga(75, 250){
        wlaczona1 = wlaczona2 = false;
        napiecie_zasilania = 30;
        }

void przelacznik(bool przycisk1, bool przycisk2);
void pokretlo(float nastawa);
void testuj();
};
//---------------------------------------------------------------------------

