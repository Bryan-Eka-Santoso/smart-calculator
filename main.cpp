#include <iostream>

using namespace std;

int main()
{
    int angka1, angka2, operasi, hasil_penjumlahan, hasil_pengurangan, hasil_perkalian, hasil_pembagian, sisa_pembagian;

    cout << "=== Kalkulator Pintar ===" << endl;

    cout << "Masukkan angka pertama (max 3 digit): ";
    cin >> angka1;
    cout << "Masukkan angka kedua (max 3 digit): ";
    cin >> angka2;

    if (angka1 > 0 && angka1 < 1000 && angka2 > 0 && angka2 < 1000){
        cout << "Pilih operasi:" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "Pilihan anda: ";
        cin >> operasi;
        cout << endl;

        if (operasi == 2 && angka1 < angka2){
           cout << "Angka kedua harus lebih kecil dari angka pertama!";
        } else {

            int angka1_a3 = angka1 % 10;
            int angka1_a2 = angka1 / 10 % 10;
            int angka1_a1 = angka1 / 100 % 10;

            int angka2_a3 = angka2 % 10;
            int angka2_a2 = angka2 / 10 % 10;
            int angka2_a1 = angka2 / 100 % 10;

             switch(operasi){
                case 1: {
                    cout << "== Penjumlahan ==" << endl;

                    int hasil_st  = angka1_a3 + angka2_a3;
                    int hasil_st1 = hasil_st / 10 % 10;
                    int hasil_st2 = hasil_st % 10;

                    int hasil_pl  = angka1_a2 + angka2_a2 + hasil_st1;
                    int hasil_pl1 = hasil_pl / 10 % 10;
                    int hasil_pl2 = hasil_pl % 10;

                    int hasil_rt  = angka1_a1 + angka2_a1 + hasil_pl1;
                    int hasil_rt1 = hasil_rt / 10 % 10;
                    int hasil_rt2 = hasil_rt % 10;

                    hasil_penjumlahan = angka1 + angka2;

                    if (hasil_penjumlahan < 10){
                        cout << "Digit satuan  : " << angka1_a3 << " + " << angka2_a3 << "     = " << hasil_st2 << " (carry: " << hasil_st1 << ")" << endl;
                    }
                    if (hasil_penjumlahan >= 10 && hasil_penjumlahan < 100){
                        cout << "Digit satuan  : " << angka1_a3 << " + " << angka2_a3 << "     = " << hasil_st2 << " (carry: " << hasil_st1 << ")" << endl;
                        cout << "Digit puluhan : " << angka1_a2 << " + " << angka2_a2 << " + " << hasil_st1 << " = " << hasil_pl2 << " (carry: " << hasil_pl1 << ")" << endl;
                    }
                    if (hasil_penjumlahan >= 100){
                        cout << "Digit satuan  : " << angka1_a3 << " + " << angka2_a3 << "     = " << hasil_st2 << " (carry: " << hasil_st1 << ")" << endl;
                        cout << "Digit puluhan : " << angka1_a2 << " + " << angka2_a2 << " + " << hasil_st1 << " = " << hasil_pl2 << " (carry: " << hasil_pl1 << ")" << endl;
                        cout << "Digit ratusan : " << angka1_a1 << " + " << angka2_a1 << " + " << hasil_pl1 << " = " << hasil_rt2 << " (carry: " << hasil_rt1 << ")" << endl;
                        if (hasil_rt1 == 1){
                        cout << "Digit ribuan  :             " << hasil_rt1 << endl;
                        }
                    }

                    cout << "Hasil penjumlahan: " << hasil_penjumlahan << endl;
                    break;
                }
                case 2: {
                    cout << "== Pengurangan ==" << endl;

                    int hasil_st  = 20 + angka1_a3 - angka2_a3;
                    int hasil_st1 = hasil_st / 10 % 10 % 2;
                    int hasil_st2 = hasil_st % 10;

                    int hasil_pl  = 20 + angka1_a2 - angka2_a2 - hasil_st1;
                    int hasil_pl1 = hasil_pl / 10 % 10 % 2;
                    int hasil_pl2 = hasil_pl % 10;

                    int hasil_rt  = 20 + angka1_a1 - angka2_a1 - hasil_pl1;
                    int hasil_rt1 = hasil_rt / 10 % 10 % 2;
                    int hasil_rt2 = hasil_rt % 10;

                    hasil_pengurangan = angka1 - angka2;

                    if (angka1 < 10) {
                        cout << "Digit satuan  : " << angka1_a3 << " - " << angka2_a3 << "     = " << hasil_st2 << " (borrow: " << hasil_st1 << ")" << endl;
                    }
                    if (angka1 >= 10 && angka1 < 100){
                        cout << "Digit satuan  : " << angka1_a3 << " - " << angka2_a3 << "     = " << hasil_st2 << " (borrow: " << hasil_st1 << ")" << endl;
                        cout << "Digit puluhan : " << angka1_a2 << " - " << angka2_a2 << " - " << hasil_st1 << " = " << hasil_pl2 << " (borrow: " << hasil_pl1 << ")" << endl;
                    }
                    if (angka1 >= 100 && angka1 < 1000){
                        cout << "Digit satuan  : " << angka1_a3 << " - " << angka2_a3 << "     = " << hasil_st2 << " (borrow: " << hasil_st1 << ")" << endl;
                        cout << "Digit puluhan : " << angka1_a2 << " - " << angka2_a2 << " - " << hasil_st1 << " = " << hasil_pl2 << " (borrow: " << hasil_pl1 << ")" << endl;
                        cout << "Digit ratusan : " << angka1_a1 << " - " << angka2_a1 << " - " << hasil_pl1 << " = " << hasil_rt2 << " (borrow: " << hasil_rt1 << ")" << endl;
                    }
                    cout << "Hasil pengurangan: " << hasil_pengurangan << endl;
                    break;
                }
                case 3: {
                    cout << "== Perkalian ==" << endl;
                    hasil_perkalian = angka1 * angka2;
                    cout << "Hasil perkalian: " << angka1 << " x " << angka2 << " = " << hasil_perkalian << endl;
                    break;
                }
                case 4: {
                    cout << "== Pembagian ==" << endl;
                    hasil_pembagian = angka1 / angka2;
                    sisa_pembagian = angka1 % angka2;
                    cout << "Hasil pembagian: " << angka1 << " dibagi " << angka2 << " = " << hasil_pembagian;
                        if (sisa_pembagian > 0){
                            cout << " sisa " << sisa_pembagian << endl;
                        }
                    break;
                }
                default:
                    cout << "Pilihan tidak valid!" << endl;
                break;
                }
        }
    } else {
        cout << "Input angka tidak valid!" << endl;
    }
    return 0;
}
