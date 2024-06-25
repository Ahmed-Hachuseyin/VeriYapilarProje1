
/**  
* 
*   Öğrenci Adı: Ahmed
*   Öğrenci Soyadı: Hachüseyin
*   Öğrenci No: G211210586
*   Grubu: B
*   19.07.2023-27.07.2023
*   ahmed.hachuseyin@ogr.sakarya.edu.tr
*
*/#include "AdreslereTut.hpp"

AdreslereTut::AdreslereTut() : bas(nullptr) {}

void AdreslereTut::ekle(TekYonluListe* ustListe, TekYonluListe* altListe) {
    AdreslerDugumu* yeni_dugum = new AdreslerDugumu(ustListe, altListe);
    if (!bas) {
        bas = yeni_dugum;
    } else {
        AdreslerDugumu* temp = bas;
        while (temp->sonraki) {
            temp = temp->sonraki;
        }
        temp->sonraki = yeni_dugum;
    }
}
