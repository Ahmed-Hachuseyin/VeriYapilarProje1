/**  
* 
*   Öğrenci Adı: Ahmed
*   Öğrenci Soyadı: Hachüseyin
*   Öğrenci No: G211210586
*   Grubu: B
*   19.07.2023-27.07.2023
*   ahmed.hachuseyin@ogr.sakarya.edu.tr
*
*/
#include "TekYonluListe.hpp"

TekYonluListe::TekYonluListe() : bas(nullptr) {}

void TekYonluListe::ekle(int veri) {
    Dugum* yeni_dugum = new Dugum(veri);
    if (!bas) {
        bas = yeni_dugum;
    } else {
        Dugum* temp = bas;
        while (temp->sonraki) {
            temp = temp->sonraki;
        }
        temp->sonraki = yeni_dugum;
    }
}
