#include <iostream>
using namespace std;

int main()
{
    int nilai,hasil;
    cout<<"menentukan bilangan ganjil dan genap"<<endl;
    cout<<"masukkan nilainya = ";
    cin>>nilai;
    hasil=nilai%2;
    cout<<"hasilnya adalah = ";
    if (hasil==0)
        cout<<"Bilangan genap";
    else
        cout<<"Bilangan ganjil";
    return 0;
}
