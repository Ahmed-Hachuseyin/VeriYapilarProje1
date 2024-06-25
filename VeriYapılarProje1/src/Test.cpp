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
#include "Test.hpp"
#include <fstream>
#include <iostream>
#include <sstream>

void Test::dosyadanOkuVeListelereEkle(const std::string& dosyaAdi) {
    ifstream dosya(dosyaAdi);
        if (dosya.is_open()) {
            int sayi;
            while (dosya >> sayi) {
                if (sayi >= 0) {
                    adresTut.bas->ustListe->ekle(sayi);
                } else {
                    adresTut.bas->altListe->ekle(sayi);
                }
            }
            dosya.close();
        } else {
            std::cerr << "Dosya acilamadi." << std::endl;
        }
    }

void Test::degisimYap(int index1, int index2) {
    if (!adresTut.bas || index1 < 0 || index2 < 0) {
        std::cerr << "Hatali islem." << std::endl;
        return;
    }

    AdreslerDugumu* temp = adresTut.bas;
    int count1 = 0;
    while (temp && count1 != index1) {
        temp = temp->sonraki;
        count1++;
    }

    AdreslerDugumu* temp2 = adresTut.bas;
    int count2 = 0;
    while (temp2 && count2 != index2) {
        temp2 = temp2->sonraki;
        count2++;
    }

    if (temp && temp2) {
        std::swap(temp->ustListe, temp2->ustListe);
        std::swap(temp->altListe, temp2->altListe);
        std::cout << "Degisim basarili." << std::endl;
    } else {
        std::cerr << "Indeksler gecersiz." << std::endl;
    }
    }

void Test::ortalamaHesapla() {
 AdreslerDugumu* temp = adresTut.bas;
    int ustToplam = 0;
    int altToplam = 0;
    int ustElemanSayisi = 0;
    int altElemanSayisi = 0;

    while (temp) {
        Dugum* ustTemp = temp->ustListe->bas;
        while (ustTemp) {
            ustToplam += ustTemp->veri;
            ustElemanSayisi++;
            ustTemp = ustTemp->sonraki;
        }

        Dugum* altTemp = temp->altListe->bas;
        while (altTemp) {
            altToplam += altTemp->veri;
            altElemanSayisi++;
            altTemp = altTemp->sonraki;
        }

        temp = temp->sonraki;
    }

    if (ustElemanSayisi > 0) {
        double ustOrtalama = static_cast<double>(ustToplam) / ustElemanSayisi;
        std::cout << "Ust Liste Ortalama: " << ustOrtalama << std::endl;
    } else {
        std::cerr << "Ust Liste Bos." << std::endl;
    }

    if (altElemanSayisi > 0) {
        double altOrtalama = static_cast<double>(altToplam) / altElemanSayisi;
        std::cout << "Alt Liste Ortalama: " << altOrtalama << std::endl;
    } else {
        std::cerr << "Alt Liste Bos." << std::endl;
    }
}
