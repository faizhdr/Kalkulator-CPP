//Library dari c++
#include <iostream>
using namespace std;

//function main
int main(){
	
	//melakukan inialisasi variabel
	int bil1,bil2, pil;
	
	//float untuk angka koma, contoh 0,5
	float hasil;
	
	//string masukkan nama
	string nama;
	
	//output dari hasil operator aritmatika contoh: +, -, *, /.
	string operasi;
	
	cout<<"KALKULATOR MENGGUNAKAN C++"<<endl;
	cout<<"--------------------------"<<endl;
	
	//membuat output dan input nama
	cout<<"Masukkan nama panggilan anda : ";
	cin >> nama;
	
	//membuat garis agar rapih
	cout<<"-------------------------"<<endl;
	
	//hasil output nama
	cout<<"Halo "<<nama<<endl;
	cout<<endl;
	//membuat output pilihan operator aritmatika
	cout<<"PILIH OPERATOR ARITMATIKA"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<endl;
	
	
	//membuat output masukkan pilihan
	cout<<"Masukan Pilihan : ";
	
	//membuat input dan output pilihan 
	cin>>pil;
	cout<<"Masukan Bilangan pertama : ";
	cin>>bil1;
	cout<<"Masukan Bilangan kedua : ";
	cin>>bil2;	
	
	//switch untuk variabel pil
	switch(pil){
		
		//jika memilih 1 maka hasilnya adalah penjumlahan
	    case 1 : hasil=bil1+bil2;
			operasi='+';
			break; /*perintah khusus yang dipakai untuk memaksa sebuah 
					perulangan berhenti sebelum waktunya*/
			
		//jika memilih 2 maka hasilnya adalah pengurangan
		case 2 : hasil=bil1-bil2;
			operasi='-';
			break;
			
		//jika memilih 3 maka hasilnya adalah perkalian
		case 3 : hasil=bil1*bil2;
			operasi='*';
			break;
			
		//jika memilih 4 maka hasilnya adalah pembagian
		case 4 : hasil=bil1/bil2;
			operasi='/';
			break;
			
		default :
			cout<<"Salah Masukan Operator"<<endl;
	}
	cout<<"-----------------------------"<<endl;
	
	//dikosongkan untuk membuat spasi
	cout<<"    "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	
}
