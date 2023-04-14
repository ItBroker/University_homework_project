#include "organizm.h"

Organizm::Organizm(unsigned short dlugloscZycia, unsigned short limitPosilkow,
    unsigned short kosztPotomka)
    : limitPosilkow(limitPosilkow), kosztPotomka(kosztPotomka),
    licznikZycia(dlugloscZycia), licznikPosilkow(0) {}

bool Organizm::posilek() {
    if (glodny()) {
        licznikPosilkow++;
        return true;
    }
    else
        return false;
}

bool Organizm::potomek() {
    if (paczkujacy()) {
        licznikPosilkow -= kosztPotomka;
        return true;
    }
    else
        return false;
}

void Organizm::krokSymulacji() {
    if (zywy())
        licznikZycia--;
}