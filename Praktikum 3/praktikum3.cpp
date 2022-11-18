#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int opsi,i,app,kalkulator,luas2d,power = 1;
  float suhu,celcius,result,fahrenheit,reamur;
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
			
			// jika app bernilai 1				
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
			    	result = (suhu − 32) * 4.0⁄9.0; 
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
			    	result = (suhu*9.0⁄4.0) + 32;
					}
					else if(opsi == 7) {
						loop1=0;
					}					
		  	}
			}	
			
			else if (app == 2) {
				cout << "app bernilai 2";
			}
		} else {
			cout << "Input yang anda masukkan salah!";
		}
	}
}
