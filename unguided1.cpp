
#include <iostream>
#include <string>
using namespace std;

struct Buku{
    string judul_buku[5];
    string pengarang[5];
    string penerbit[5];
    int tebal_halaman[5];
    double harga_buku[5]; 
};

int main(){
    // Deklarasi variabel Bukufavorit dengan tipe Buku
    Buku BukuFavorit;
    cout << "\tBuku Favorit Saya\n";
    //Mengisi data ke dalam variabel BukuFavorit untuk buku 1
    BukuFavorit.judul_buku[0] = "Sebuah seni untuk bersikap bodo amat";
    BukuFavorit.pengarang[0] = "Mark Manson";
    BukuFavorit.penerbit[0] = "Gramedia";
    BukuFavorit.tebal_halaman[0] = 100;
    BukuFavorit.harga_buku[0] = 175.000;

    //Mengisi data ke dalam variabel BukuFavorit untuk buku 2
    BukuFavorit.judul_buku[1] = "low of attraction";
    BukuFavorit.pengarang[1] = "Rusdin S Rauf";
    BukuFavorit.penerbit[1] = "Pameran buku sekolah";
    BukuFavorit.tebal_halaman[1] = 300;
    BukuFavorit.harga_buku[1] = 149.999;

    //Mengisi data ke dalam variabel BukuFavorit untuk buku 3
    BukuFavorit.judul_buku[2] = "Bad habits";
    BukuFavorit.pengarang[2] = "Sabrina ara";
    BukuFavorit.penerbit[2] = "Gramedia";
    BukuFavorit.tebal_halaman[2] = 152;
    BukuFavorit.harga_buku[2] = 30.000;

    //Mengisi data ke dalam variabel BukuFavorit untuk buku 4
    BukuFavorit.judul_buku[3] = "loneliness";
    BukuFavorit.pengarang[3] = "Alvin Syahrin";
    BukuFavorit.penerbit[3] = "Gramedia ";
    BukuFavorit.tebal_halaman[3] = 228;
    BukuFavorit.harga_buku[3] = 29.999;

    //Mengisi data ke dalam variabel BukuFavorit untuk buku 5
    BukuFavorit.judul_buku[4] = "hujan";
    BukuFavorit.pengarang[4] = "Tere liye";
    BukuFavorit.penerbit[4] = "Gramedia Center Internasional";
    BukuFavorit.tebal_halaman[4] = 529;
    BukuFavorit.harga_buku[4] = 74.999;

    for (int i=0; i<5; i++){
        cout << "\n\tBuku favori saya ke-" << i+1 << endl;
        cout << "\tJudul Buku: " << BukuFavorit.judul_buku[i] << endl;
        cout << "\tPengarang: " << BukuFavorit.pengarang[i] << endl;
        cout << "\tPenerbit: " << BukuFavorit.penerbit[i] << endl;
        cout << "\tTebal Halaman: " << BukuFavorit.tebal_halaman[i] << endl;
        cout << "\tHarga Buku: " << BukuFavorit.harga_buku[i] << endl;
    }
    return 0;
}
