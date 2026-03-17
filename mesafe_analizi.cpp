#include <iostream>
#include <cmath>
#include <iomanip>

/* * Bu modül, iki boyutlu düzlem üzerindeki 
 * noktalar arasındaki Öklid mesafesini hesaplar.
 */

int main() {
    double n1_x, n1_y, n2_x, n2_y;
    double sonuc;

    std::cout << "--- Geometrik Mesafe Analizi ---" << std::endl;

    // Kullanıcıdan koordinat verilerini toplama
    std::cout << "1. Nokta bilesenlerini giriniz (x y): ";
    if (!(std::cin >> n1_x >> n1_y)) return 1;

    std::cout << "2. Nokta bilesenlerini giriniz (x y): ";
    if (!(std::cin >> n2_x >> n2_y)) return 1;

    // Uzaklık formülü uygulaması: d = sqrt((x2-x1)^2 + (y2-y1)^2)
    // std::hypot fonksiyonu bu işlemi daha temiz ve güvenli yapar.
    sonuc = std::hypot(n2_x - n1_x, n2_y - n1_y);

    // Veriyi formatlı bir şekilde ekrana basma
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nHesaplanan Uzaklik: " << sonuc << " birim." << std::endl;

    return 0;
}
