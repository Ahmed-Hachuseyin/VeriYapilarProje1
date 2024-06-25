#ifndef ADRESLERETUT_HPP
#define ADRESLERETUT_HPP

#include "AdreslerDugumu.hpp"

class AdreslereTut {
public:
    AdreslerDugumu* bas;

    AdreslereTut();

    void ekle(TekYonluListe* ustListe, TekYonluListe* altListe);
};

#endif
