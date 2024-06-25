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
#ifndef TEST_HPP
#define TEST_HPP
using namespace std;
#include <string>
#include "AdreslereTut.hpp"

class Test {
public:
    AdreslereTut adresTut;

    void dosyadanOkuVeListelereEkle(const string& dosyaAdi);

    void degisimYap(int index1, int index2);

    void ortalamaHesapla();
};

#endif
