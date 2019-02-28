#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <sstream>
using namespace std;

//function panggil menu
void	menu(){
	system("CLS");
	cout<<"=================================\n";
	cout<<"          MAIN MENU\n";
	cout<<"=================================\n";
	cout<<"1. Tugas nomor 1"<<endl<<"2. Tugas nomor 2"<<endl<<"3. Tugas nomor 3"<<endl<<"4. Tugas nomor 4\n"<<"5. Keluar\n";
}
//function nomor 1
void	func1(){
	int	a,b;
	
	system("CLS");
	a = 4;
	b = 6;
	cout<<"angka pertama	: "<<a<<endl<<"angka kedua	: "<<b<<endl;
}
//function nomor 2
float	LuasLingkaran (float jari){
	float	luas;
	luas = jari * 22 / 7;
	return(luas);
}
//function nomor 3
double	diskon(double belanja){
	if (belanja >= 100000){
		belanja *= 2.5 / 100;
	}else if (belanja >= 1000000){
		belanja *= 2.5/100;
	}
	return (belanja);
}
//function nomor 4
int	poin(double a){
	int hasil;
	hasil = a /20000;
	
	return (hasil);
}


int main (){
	int	sw;
	char	ans;
	awal:
	menu();
	cin>>sw;
	switch (sw){
		case 1 : {
			func1();
			cout<<"\n \n \n apakah ingin kembali ke menu? (y/n) \n";
			cin>>ans;
			if (ans == 'y'){
				goto awal;
			}
			break;
		}
		case 2 : {
			float	lingkar;
			lingkar = LuasLingkaran(27.7);
			cout<<"luas lingkaran adalah : "<<lingkar<<"cm\n";
			cout<<"\n \n \n apakah ingin kembali ke menu? (y/n) \n";
			cin>>ans;
			if (ans == 'y'){
				goto awal;
			}
			break;
		}
		case 3 : {
			int bayar;
			system("CLS");
			cout<<"masukkan total harga barang belanjaan	: RP.";
			cin>>bayar;
			
			cout<<"diskonnya adalah			: RP."<<diskon(bayar);
			cout<<"\n \n \n apakah ingin kembali ke menu? (y/n) \n";
			cin>>ans;
			if (ans == 'y'){
				goto awal;
			}
			break;
		}
		case 4 : {
			system("CLS");
			double	harga;
			cout<<"masukkan jumlah pembayaran		: ";
			cin>>harga;
			
			cout<<"poin yang dapat diperoleh adalah	: "<<poin(harga);
			cout<<"\n \n \n apakah ingin kembali ke menu? (y/n) \n";
			cin>>ans;
			if (ans == 'y'){
				goto awal;
			}
			break;
		}
		default : {
			system("CLS");
			cout<<"							goodbye";
			break;
		}
	}
	
getche();
}
