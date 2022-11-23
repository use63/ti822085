#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int opsi,i,app,luas2d,power = 1;
  float suhu,celcius,result,fahrenheit,reamur,kalkulator,bil1,bil2,sisi,panjang,lebar,tinggi,alas,sisisejajar,d1,d2,r,c;
	string a,b;
  
	while(power==1) {
		system("cls");
    cout << "+------------------------------+\n";
    cout << "| PROGRAM APLIKASI PERHITUNGAN |\n";
    cout << "+------------------------------+\n";
    cout << "| 1. Konversi suhu             |\n";
    cout << "| 2. Kalkulator                |\n";
    cout << "| 3. Luas bidang 2D            |\n";
    cout << "| 4. Exit                      |\n";
    cout << "+------------------------------+\n\n";
    cout << "Pilih perhitungan: ";cin >> app;
    
    if( app==1 || app == 2 || app == 3 || app ==4 )
    {
			
			// jika app bernilai 1 [konversi suhu]
	    if(app == 1) {
	    	int loop1 = 1;
	    	while(loop1 == 1){
					system("cls");
			    cout << "+------------------------------+\n";
			    cout << "| PILIH KONVERSI SUHU          |\n";
			    cout << "+------------------------------+\n";
			    cout << "| 1. Celcius to Fahrenheit     |\n";
			    cout << "| 2. Celcius to Reamur         |\n";
			    cout << "| 3. Fahrenheit to Celcius     |\n";
			    cout << "| 4. Fahrenheit to Reamur      |\n";
			    cout << "| 5. Reamur to Celcius         |\n";
			    cout << "| 6. Reamur to Fahrenheit      |\n";
			    cout << "| 7. Exit                      |\n";
			    cout << "+------------------------------+\n\n";
			    
			    if(i==1){
			    	cout << suhu << a << result << b <<endl;
					}
			    
			    cout << "Input: ";cin >> opsi;
			    
			    // C to F
			    if(opsi == 1) {
			    	cout << "masukkan suhu Celcius: ";cin>>suhu;
			    	i=1;
			    	a = "`C = ";
			    	b = "`F";
			    	result = (9.0/5.0 * suhu) + 32;
					}
					// C to R
					else if(opsi == 2) {
			    	cout << "masukkan suhu Celcius: ";cin>>suhu;
			    	i=1;
			    	a = "`C = ";
			    	b = "`R";
			    	result = 4.0/5.0 * suhu;
					}
					// F to C
					else if(opsi == 3) {
			    	cout << "masukkan suhu Fahrenheit: ";cin>>suhu;
			    	i=1;
			    	a = "`F = ";
			    	b = "`C";
			    	result = 5.0/9.0*(suhu-32);
					}
					// F to R
					else if(opsi == 4) {
			    	cout << "masukkan suhu Fahrenheit: ";cin>>suhu;
			    	i=1;
			    	a = "`F = ";
			    	b = "`R";
			    	result = (suhu - 32) * 4.0/9.0; 
					}
					// R to C
					else if(opsi == 5) {
			    	cout << "masukkan suhu Reamur: ";cin>>suhu;
			    	i=1;
			    	a = "`R = ";
			    	b = "`C";
			    	result = 5.0/4.0*suhu;
					}
					// R to F
					else if(opsi == 6) {
			    	cout << "masukkan suhu Reamur: ";cin>>suhu;
			    	i=1;
			    	a = "`R = ";
			    	b = "`F";
			    	result = (suhu*9.0/4.0) + 32;
					}
					// Exit
					else if(opsi == 7) {
						loop1=0;
					}					
		  	}
			}	
			
			// jika app bernilai 2 [kalkulator]
			else if (app == 2) {
				int loop2 = 1;
				while(loop2 == 1) {
					system("cls");
			    cout << "+------------------------------+\n";
			    cout << "| Pilih Operasi Perhitungan    |\n";
			    cout << "+------------------------------+\n";
			    cout << "| 1. Penjumlahan               |\n";
			    cout << "| 2. Pengurangan               |\n";
			    cout << "| 3. Perkalian                 |\n";
			    cout << "| 4. Pembagian                 |\n";
			    cout << "| 5. Exit                      |\n";
			    cout << "+------------------------------+\n\n";
			    
			    if(i==1){
			    	cout << bil1 << a << bil2 << b << result <<endl;;
					}
					
					cout << "input: ";cin >> opsi;
					
					// Penjumlahan
					if(opsi == 1){
						i = 1;
						cout << "masukkan bilangan pertama: ";cin >> bil1;
						cout << "masukkan bilangan kedua  : ";cin >> bil2;
						result = bil1 + bil2;
						a = " + "; b = " = ";
					}
					
					// Pengurangan
					if(opsi == 2){
						i = 1;
						cout << "masukkan bilangan pertama: ";cin >> bil1;
						cout << "masukkan bilangan kedua  : ";cin >> bil2;
						result = bil1 - bil2;
						a = " - "; b = " = ";
					}
					
					// Perkalian
					if(opsi == 3){
						i = 1;
						cout << "masukkan bilangan pertama: ";cin >> bil1;
						cout << "masukkan bilangan kedua  : ";cin >> bil2;
						result = bil1 * bil2;
						a = " x "; b = " = ";
					}
					
					// Pembagian
					if(opsi == 4){
						i = 1;
						cout << "masukkan bilangan pertama: ";cin >> bil1;
						cout << "masukkan bilangan kedua  : ";cin >> bil2;
						result = bil1 / bil2;
						a = " : "; b = " = ";
					}
					
					// Exit
					if(opsi == 5){
						loop2 = 0;
					}
				}
			}
			
			// jika app bernilai 3 [luas badngun 2D]
			else if (app == 3) {
				int loop3 = 1;
				do {
					system("cls");
					cout << "=====================================\n";
					cout << "[+]   Program Luas Bangun Datar   [+]\n";
					cout << "=====================================\n";
					cout << "[+]   1. Persegi                  [+]\n";
					cout << "[+]   2. Persegi Panjang          [+]\n";
					cout << "[+]   3. Segitiga                 [+]\n";
					cout << "[+]   4. Jajar Genjang            [+]\n";
					cout << "[+]   5. Trapesium                [+]\n";
					cout << "[+]   6. Belah Ketupat            [+]\n";
					cout << "[+]   7. Lingkaran                [+]\n";
					cout << "[+]   8. Exit                     [+]\n";
					cout << "=====================================\n\n";
					
					if(i==1) {
						cout << a << b << c << "\n\n";
					}
					
					cout << "Input: ";cin>>opsi;
					
					// persegi
					if(opsi == 1) {
						i = 1;
						cout << "masukkan sisi: ";cin>>sisi;
						a = " [ sisi x sisi ]\n";
						b = " luas persegi adalah ";
						c = sisi * sisi;
					}

					// persegi panjang
					if(opsi == 2) {
						i = 1;
						cout << "masukkan panjang: ";cin>>panjang;
						cout << "masukkan lebar  : ";cin>>lebar;
						a = " [ panjang x lebar ]\n";
						b = " luas persegi panjang adalah ";
						c = panjang * lebar;
						}
					
					// segitiga
					if(opsi == 3) {
						i = 1;
						cout << "masukkan alas  : ";cin>>alas;
						cout << "masukkan tinggi: ";cin>>tinggi;
						a = " [ alas x tinggi x 0.5 ]\n";
						b = " luas segitiga adalah ";
						c = (alas*tinggi)*0.5;
					}
					
					// jajar genjang
					if(opsi == 4) {
						i = 1;
						cout << "masukkan alas  : ";cin>>alas;
						cout << "masukkan tinggi: ";cin>>tinggi;
						a = " [ alas x tinggi x 0.5 ]\n";
						b = " luas jajar genjang adalah ";
						c = alas*tinggi;
						}
					
					// trapesium
					if(opsi == 5) {
						i = 1;
						cout << "masukkan sisi sejajar: ";cin>>sisisejajar;
						cout << "masukkan tinggi      : ";cin>>tinggi;
						a = " [ 0.5 x jumlah panjang sisi sejajar x tinggi ]\n";
						b = " luas trapesium adalah ";
						c = (sisisejajar * tinggi)*0.5;
						}
					
					// belah ketupat
					if(opsi == 6) {
						i = 1;
						cout << "masukkan diagonal 1: ";cin>>d1;
						cout << "masukkan diagonal 2: ";cin>>d2;
						a = " [ 0.5 x diagonal 1 x diagonal 2 ]\n";
						b = " luas belah ketupat adalah ";
						c = d1*d2*0.5;
						}
					
					// lingkaran
					if(opsi == 7) {
						i = 1;
						cout << "masukkan jari-jari: ";cin>>r;
						a = " [ phi x r^2 ]\n";
						b = " luas lingkaran adalah ";
						c = 22/7*r*r;
						}
					
					// exit
					if(opsi == 8) {
						loop3 = 0;
					}
				}
				while(loop3 == 1);
			}

			// jika app bernilai 4
			else if (app == 4) {
				power = 0;
			}
		} else {
			cout << "Input yang anda masukkan salah!";
		}
	}
}
