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

#include <iostream>
#include "Test.hpp"
using namespace std;

int main() {
    Test Test;
    Test.dosyadanOkuVeListelereEkle("Benioku.txt");
    Test.ortalamaHesapla();

    int index1, index2;
    cout << "Degisim yapmak istediginiz iki indeksi girin: ";
    cin >> index1 >> index2;
    Test.degisimYap(index1, index2);
    Test.ortalamaHesapla();

    return 0;
}
