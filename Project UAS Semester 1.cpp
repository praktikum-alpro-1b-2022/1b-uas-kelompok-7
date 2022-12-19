#include <iostream>
#include <string>
using namespace std;

int main(){

	int pilih[999], jumlah[999], sub_total[999], harga[999];
	string menu[100];
	int total;
	int i=0;
	bool selesai=false;


	cout<<"===========DAFTAR MENU MAKANAN & MINUMAN UWU==========="<<endl;
    cout<<"1. Nasi Biasa                Rp  5000"<<endl;
    cout<<"2. Bakso Jumbo               Rp  15000"<<endl;
    cout<<"3. Bakso Janda               Rp  20000"<<endl;
    cout<<"4. Bakso Perawan             Rp  20000"<<endl;
    cout<<"5. Nasi Goreng Biasa         Rp  13000"<<endl;
    cout<<"6. Nasi Goreng Spesial       Rp  16000"<<endl;
    cout<<"7. Es Coffe Latte            Rp  10000"<<endl;
    cout<<"8. Es Tea Manis              Rp  5000"<<endl;
    cout<<"9. Es Campur                 Rp  8000"<<endl;
    cout<<"======================================================="<<endl;

	cout<<"Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;

    while(selesai==false){

    	cout<<"Pilih Menu : ";
    	cin>>pilih[i];

    	if (pilih[i]<=9){

    		if (pilih[i]==0){
    			selesai=true;
			}else {
				switch (pilih[i]){
		    		case 1 : menu[i]="Nasi Biasa            "; harga[i]=5000; break;
		    		case 2 : menu[i]="Bakso Jumbo           "; harga[i]=15000; break;
		    		case 3 : menu[i]="Bakso Janda           "; harga[i]=2000; break;
		    		case 4 : menu[i]="Bakso Perawan         "; harga[i]=20000; break;
		    		case 5 : menu[i]="Nasi Goreng Biasa     "; harga[i]=13000; break;
		    		case 6 : menu[i]="Nasi Goreng Spesial   "; harga[i]=16000; break;
		    		case 7 : menu[i]="Es Coffe Latte        "; harga[i]=10000; break;
		    		case 8 : menu[i]="Es Tea Manis          "; harga[i]=5000; break;
		    		case 9 : menu[i]="Es Campur             "; harga[i]=8000; break;
		    		default : menu[i]="";harga[i]=0;
				}

				cout<<"Jumlah Porsi "<<menu[i]<<" : ";
		    	cin>>jumlah[i];
		    	cout<<endl;

		    	sub_total[i]=jumlah[i]*harga[i];

		    	total+=sub_total[i];
	    		i++;
			}
		} else {
			cout<<"Menu yang dipilih tidak sesuai!"<<endl;
			cout<<endl;
		}
	}

	cout<<endl;
	cout<<"                 STRUK PEMBELIAN WARUNG RIZA UWU"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Menu    	  	Harga		Jumlah        Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<"	"<<menu[a]<<"	"<<harga[a]<<"		"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
	}

	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Bayar = Rp"<<total<<endl;
}
