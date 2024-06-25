#ifndef TEKYONLULISTE_HPP
#define TEKYONLULISTE_HPP

#include "Dugum.hpp"

class TekYonluListe {
public:
    Dugum* bas;

    TekYonluListe();
    ~TekYonluListe() ;

    void ekle(int veri);
};

#endif
