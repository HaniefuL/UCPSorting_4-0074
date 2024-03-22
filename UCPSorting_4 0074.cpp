// 1. Algoritma Bubble Sort membandingkan serta menukar elemen elemen dengan cara membandingkan elemen pertama dengan elemen kedua lalu jika elemen pertama besar dan elemen kedua kecil maka kita akan menukar langkah ini diulang sampai array terurut 
// 2. Algoritma Shell Sort membandingkan serta menukar elemen elemen dengan cara memilih nilai genap lalu membandingkan yang mau dinbandingkan lalu memisahkan array menjadi beberapa subarray menggunakan isertion sort
// 3. Dalam algoritma sortir data sudah ada beberapa yang berurutan, maka kita menggunakan Insertion Sort karena insertin sort dapat membandingkan dan memindahkan data satu persatu ke posisi ke dalam array
// 4. konversi Algoritma ke dalam c++


#include <string>
using namespace std;

int arr[20]; // Deklarasi variabel global array a dengan ukuran 20
int n; // Deklarasi variabel global n untuk menyimpan banyaknya elemen array

void input() {      //procedur untuk input

    while (true) {
        cout << "Masukan banyaknya elemen pada erray : "; //output ke layar
        cin >> n;   //input dari pengguna
        if (n <= 20) // jika n kurang dari atau sama dengan 20
            break;   // keluar dari loop
        else {       // juka n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // output ke layar
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++) {  // looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": "; //Output ke layar
        cin >> arr[i];              //output dari pengguna

    }
}
#include <iostream>
using namespace std;

void insertionShort() {

    int i, n, temp, j;
    int arr[12];

    for (i = 1; i <= n - 1; i++) { //step 1
        temp = arr[i]; //step 2
        j = i - i; // step 3
        while (j >= 0 && arr[j] > temp) // step 4
        {
            arr[j + 1] = arr[j]; //step 4
            j = j - 1; // step 4
        }
        arr[j + 1] = temp; //step 5
    }

}

void bubbleSortArray() { // procedur untuk mengurutkan array dengan metode bubble sort
    int pass = 1; // step 1

    do {
        for (int j = 0; j <= n - 1 - pass; j++) { //step 2
            if (arr[j] > arr[j + 1]) { // step 3
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
        }
        pass = pass + 1; // stepp 4

        cout << "\nPass " << pass - 1 << ": "; // number of pass
        for (int k = 0; k < n; k++) {
            cout << endl;
        } while (pass <= n - 1);
    }

    void display() {
        cout << endl;
        cout << "=================================" << endl;
        cout << "Element Array yang telah tersusun" << endl;
        cout << "=================================" << endl;
        cout << endl;
        for (int j = 0; j < n; j++) {
            cout << arr[j]; // menampilkan array
            if (j < n - 1) {
                cout << " -->";
            }
        }
        cout << endl;
        cout << endl;

        cout << "Jumlah Pass = " << n - 1 << endl; // menampilkan jumlah pass
        cout << endl;
        cout << endl;
    }

    int main()
    {
        input();

        bubbleSortArray();
        display();

        system("pause");
        return 0;
    }
