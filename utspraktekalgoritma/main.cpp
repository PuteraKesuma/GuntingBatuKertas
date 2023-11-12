/*PROGRAM PERMAINAN BATU GUNTING KERTAS
NAMA: MADE PUTERA YUNDRA KESUMA
KELAS:BA233
NIM:230030016 */

#include <iostream>
using namespace std;

// Fungsi yang mengembalikan nilai (untuk menentukan pemenang)
string MenentukanPemenang(string pilihanKita, string pilihanBot) {
    if (pilihanKita == pilihanBot) {
        return "Seri";
    } else if ((pilihanKita == "Batu" && pilihanBot == "Gunting") ||
               (pilihanKita== "Gunting" && pilihanBot == "Kertas") ||
               (pilihanKita == "Kertas" && pilihanBot == "Batu")) {
        return "Anda Menang";
    } else {
        return "Komputer Menang";
    }
}

// Fungsi yang tidak mengembalikan nilai untuk mencetak hasil
void printHasil(string hasil) {
    cout << "Hasil\t\t\t: " << hasil << endl;
}

int main() {
    cout << "========Selamat datang di permainan Batu, Gunting, Kertas!========" << endl;

    string playAgain;

    do {
        // Variabel dan Tipe Data
        string pilihanKita, pilihanBot;

        bool isValidChoice = false;
        while (!isValidChoice) {
            cout << "Pilihan Anda (batu, gunting, kertas): ";
            cin >> pilihanKita;

            // Perulangan menggunakan while dan Operator Logika
            if (pilihanKita == "batu" ||  pilihanKita == "gunting" || pilihanKita == "kertas") {
                isValidChoice = true;
            } else {
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
            }
        }

        // Pilihan komputer secara acak
        int computerRandom = rand() % 3;
        switch (computerRandom) {
            case 0:
                pilihanBot = "Batu";
                break;
            case 1:
                pilihanBot = "Gunting";
                break;
            case 2:
                pilihanBot= "Kertas";
                break;
        }

        cout << "Pilihan komputer\t: " << pilihanBot << endl;

        // Menggunakan fungsi yang mengembalikan nilai
        string hasil = MenentukanPemenang(pilihanKita, pilihanBot);

        // Menggunakan fungsi yang tidak mengembalikan nilai
        printHasil(hasil);

        // Meminta user untuk memainkan lagi
        cout << "Apakah Anda ingin memainkan lagi? (yes/no): ";
        cin >> playAgain;

    } while (playAgain == "yes" || playAgain == "Yes" || playAgain == "YES");

    cout << "============Terima kasih telah bermain!===========" << endl;
    return 0;
}
