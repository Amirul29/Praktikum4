#include<iostream>
using namespace std;
int main ()
{
    cout<< "Muhamad Amirul Fiqhi"<<endl;
    cout<< " ______________________________________________________________"<<endl;
    cout<< "|Algoritma Mencari Nilai Terbesar Dari Bilangan Yang Diinputkan|"<<endl;
    cout<< "|______________________________________________________________|"<<endl;
    int max,A;
    max=0;

    do{
        cout<< "masukin nilai yang ingin di masukan :"; cin >> A;
        if (max<A)
            max=A;
    }
    while (A!=0);
    cout<< "hasilnya = " <<max<< endl;
    return 0;
    cout<< "Terima Kasih"<<endl;
}
