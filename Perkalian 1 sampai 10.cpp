#include <iostream>
using namespace std;

int main(){
	menu:
	system("cls");
	
	 char izin;
	 int i, a;
	cout<<"perkalian 1-10\n";
	cout<<"_____\n\n";  // TANIA NASTIKA
	cout<<"masukkan angka 1-10\n";
	cout<<"= ";
	cin>> a;
	if(a<1 || a>10){
		cout<<"nomor input anda tak tersedia\n";
		goto menu;
	}
	else if (a>=1 &&a<=10){
	cout<<"maka...\n";
	for (i=1; i<=10; i++){
		cout<<a<<" x "<<i<<" = "<<a*i<<endl;
	}
	cout<<"\n\n";
	cout<<"apakah anda ingin melihat hasil perkalian lainnya?\n";
	cout<<"y/t? "; cin>> izin;}
	if (izin=='y'){
		goto menu;
	}
	else {
		cout<<"____\n\n"; //BYE BYE SELAMAT MENGERJAKAN
		system("pause");
		return 0;
	}
	
	
	
	return 0;
	
	
}

