#include <iostream>
#include <cstdlib>
#include "lampa.h"

using namespace std;

int main(int argc, char** argv) {

lampa biurkowa;

cout << "\nNajpierw wlaczymy pierwsza:\n";
biurkowa.przelacznik(1, 0);

cout << "\nTeraz podkrecimy potencjometr do polowy:\n";
biurkowa.pokretlo(50);

cout << "\nCzas wlaczyc druga zarowke:\n";
biurkowa.przelacznik(1, 1);

cout << "\nNa koniec podjaramy na maksa!\n";
biurkowa.pokretlo(100);


cout << endl; system ("pause"); return 0;
}
