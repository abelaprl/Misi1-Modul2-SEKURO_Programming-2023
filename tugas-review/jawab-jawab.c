#include <stdio.h>

int main() {
    /* Pada file ini, kalian diminta untuk menjawab tiap soal */
    /* dengan menampilkan hasilnya pada layar */

    /* Contoh */
    printf("0. Sebutkan nama lengkap dari Kak Nigel!\n");
    printf("Jawaban: Nigel Sahl\n");

    /* Nomor 1 [5 point] */
    printf("1. Sebutkan jenis-jenis primitive data type di C!\n");
    printf("Jawaban:\n");
    printf(" 1. Int (integer) : tipe data yang nilainya terdiri dari bilangan bulat, 2. Float (real number) : tipe data angka yang memiliki bagian desimal di akhir angka \n"); // 
    printf (" 3. Double : menyimpan angka yang mengandung pecahan. Tipe float hanya bisa menampung 7 angka dibelakang koma, sedangkan double bisa menampung hingga 15 angka dibelakang koma. \n");
    printf ("4. Boolean : tipe data yang hanya memiliki 2 pilihan nilai, yaitu true dan false. \n");
    printf ("5. Char : tipe data yang digunakan untuk menyimpan satu karakter saja. Dan penulisannya harus diapit oleh tanda petik tunggal. \n");
    printf ("6. String : digunakan untuk menyimpan data karakter yang berupa teks (sama seperti char). \n");
    printf ("7. Void : digunakan untuk fungsi-fungsi yang tidak mengembalikan nilai. \n");
    printf ("8. Wide_character, Tipe data karakter lebar juga merupakan tipe data karakter tetapi tipe data ini memiliki ukuran lebih besar dari tipe data 8-bit normal. Panjang umumnya 2 atau 4 byte. \n");
    
    /* Nomor 2 [5 point] */
    printf("2. Sebutkan perbedaan fungsi dan prosedur!\n");
    printf("Jawaban:\n");
    printf(" Pada prosedur nilai yang diproses tidak dikembalikan atau diubah, nilai hanya diproses didalam prosedur dan kembali kepada keadaan semula ketika keluar dari prosedur. Sedangkan pada fungsi, nilai yang diproses akan berubah dan memiliki nilai keluaran.\n"); 
    
    /* Nomor 3 [5 point] */
    int **val;
    printf("3. Apa tipe data dari deklarasi variabel di atas?");
    printf("Jawaban:\n");
    printf("Mendefinisikan/ deklarasi pointer ke pointer ke integer \n");

    return 0;
}
