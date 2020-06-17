#include "lampa.h"

//----------------- FUNKCJE KLASY ZAROWKA -----------------------------------

void zarowka::zasilanie(float ile_volt)
{
if(ile_volt <= 0){
    cout << "\tCiemnosc widze!\n";
    return;
    }
cout << "\tSwiece z moca " << ile_volt / napiecie * moc << " watt\n";
}
//------------------ FUNKCJE KLASY LAMPA ------------------------------------

void lampa::przelacznik(bool przycisk1, bool przycisk2)
{
wlaczona1 = przycisk1;
wlaczona2 = przycisk2;

testuj();
}
//---------------------------------------------------------------------------

void lampa::pokretlo(float nastawa)
{
napiecie_zasilania = nastawa / 100 * 240;

testuj();
}
//---------------------------------------------------------------------------

void lampa::testuj()
{
pierwsza.zasilanie(wlaczona1 ? napiecie_zasilania : 0);
druga.zasilanie(wlaczona2 ? napiecie_zasilania : 0);
}
//---------------------------------------------------------------------------
