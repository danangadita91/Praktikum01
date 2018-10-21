# Praktikum01
```
Latihan 1 "Menghitung luas Persegi Panjang"
Alur Algoritma :
1. Mendeklarasikan variable int "p","l" sebagai variable input
2. Mendeklarasikan variable "luas" sebagai rumus (luas: p*l)
3. Menghitung luas dengan rumus luas: p*l
4. Menampilkan hasilnya kelayar << cout "Hasilnya adalah: "<<luas<< endl;

Berikut kodenya :
```
```c++
int main (){
    int p,l,luas;

    cout<<"masukan panjang persegi panjang : ";
    cin>>p;
    cout<<"masukan lebar persegi panjang : ";
    cin>>l;

    luas=p*l;
    cout<<"luas persegi panjang adalah "<<luas;
    return 0;

}
```
Berikut adalah hasilnya :
![img](https://raw.githubusercontent.com/danangadita91/Praktikum01/master/latihan1/Latihan1/Persegi%20panjang%20(1).png)
![img](https://raw.githubusercontent.com/danangadita91/Praktikum01/master/latihan1/Latihan1/Persegi%20panjang%20(2).png)
![img](https://raw.githubusercontent.com/danangadita91/Praktikum01/master/latihan1/Latihan1/Persegi%20panjang%20(code).png)

```
Latihan 2 "Menentukan bilangan ganjil genap suatu bilangan"
Alur algoritma :
1. Mendeklarasikan variable int "nilai" sebagai variable input
2. Mendeklarasikan variable hasil sebagai rumus (hasil: nilai%2)
3. Menentukan ganjil genap bilangan dengan rumus "hasil: nilai%2==0"
	penjelasannya : Jika "nilai" dibagi dengan 2 hasilnya 0 maka bilangan itu adalah genap,
			dan hasil selain 0 adalah ganjil
4. Menampilkan hasilnya ke layar cout 
	<<"Bilangan genap";
	else
	<<"Bilangan ganjil";
Berikut Kode Lengkapnya :
```
```c++
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
```

Berikut adalah hasilnya :
![img](https://raw.githubusercontent.com/danangadita91/Praktikum01/master/latihan2/Ganjil%20Genap%20(1).png)
![img](https://raw.githubusercontent.com/danangadita91/Praktikum01/master/latihan2/Ganjil%20Genap%20(2).png)
![img](https://raw.githubusercontent.com/danangadita91/Praktikum01/master/latihan2/Ganjil%20Genap%20(code).png)

```
Latihan 3 "Membuat Penjumlahan Berulang"
Alur Algoritma :
1. Mendeklarasikan variable inx "x" sebagai batasan nilai input
2. Mendeklarasikan variable "nilai", "bil" sebagai variable inputan
3. Mendeklarasikan total sebagai variable hasil
4. Membuat batasan perulangan untuk nilai input yang akan di jumlahkan dengan rumus for
		for (x=1;x<=nilai;x++)
	Penjelasannya : "x" akan membaca input ke 1 dimana x kurang dari sama dengan nilai input
			dan x akan bertambah 1
5. Menjumlahkan nilai yang diinput pada nilai bil dengan rumus :
		total=total+bil;
6. Menampilkan hasil ke layar
		cout<<"\ntotal= "<<total;
Berikut kodenya :
```c++
int main()
{
int x,nilai, bil, total=0;
cout<< "Masukan Jumlah Nilai Yang Akan Di input =";
cin>> nilai;
for (x=1;x<=nilai;x++)
 {
cout<<"Masukan Nilai ke "<<x<<"=";
cin>>bil;
total=total+bil;
cout<<"\ntotal="<<total <<endl;
 }
    return 0;
}
```

Berikut adalah hasilnya :
![img](https://raw.githubusercontent.com/danangadita91/Praktikum01/master/latihan3/Perulangan%20Penjumlahan(1).png)
![img](https://raw.githubusercontent.com/danangadita91/Praktikum01/master/latihan3/Perulangan%20Penjumlahan(2).png)
![img](https://raw.githubusercontent.com/danangadita91/Praktikum01/master/latihan3/Perulangan%20Penjumlahan(code).png)