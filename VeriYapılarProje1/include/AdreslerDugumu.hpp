#ifndef ADRESTUTUCUDUGUMU_HPP
#define ADRESTUTUCUDUGUMU_HPP

#include "TekYonluListe.hpp"

class AdreslerDugumu {
public:
    TekYonluListe* ustListe;
    TekYonluListe* altListe;
    AdreslerDugumu* sonraki;

    AdreslerDugumu(TekYonluListe* ustListe, TekYonluListe* altListe);
};

#endif
