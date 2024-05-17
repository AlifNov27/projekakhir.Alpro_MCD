//Program Pemesanan Makanan Restaurant
//MIRANDA 123210026
//ALIF NOVIKA SARI 123210007
#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>								//tipe data dan oprator

using namespace std;
#define ppn 0.10 //PPN = 10%
const int diskon = 25000;

void menu_makanan();				//fungsi
int main()
{
	string nama;					//string
	char menu[100], back, ulangi;
	int jumlah, makanan, makan, total, bayar, kurang, bonus, pajak, kembalian, 
	harga[16]={0, 39000, 57500, 60000, 45500, 34000, 42000, 36000, 43500, 35000, 28500, 9500, 30000, 36000, 11500, 10500}, i=1;   		//array
	bool saldo;
	
	
	
		cout<<"------------------------------------------MCD------------------------------------------------ "<<endl;
		cout<<"---------------------------------------McDonald's---------------------------------------------"<<endl;
		cout<<"--------------------------Fast Food Yogyakarta || I'm Lovin It--------------------------------"<<endl;
		cout<<endl;	
		cout<<"Masukkan Nama Anda : ";																								//output
		cin>>nama;																													//input
		
	do{																		//perulangan
		system("CLS"); //membersihkan layar atau program yang ingin di ulang
		menu_makanan();
		cout<<" (Masukkan Menu Makanan Berdasarkan Nomor)"<<endl;
		cout<<" Silahkan Pilih Makanan Anda : ";
		cin>>makanan;
		
		
		//percabangan
		switch(makanan){													//pengendalian
			case 1:
				strcpy(menu,"Panas 1 Ayam Gulai McD");
				harga[1];
				break;
			case 2:
				strcpy(menu,"Panas 2 Ayam Gulai Mcd");
				harga[2];
				break;
			case 3:
				strcpy(menu,"Panas 2 Fries Ayam Gulai McD");
				harga[3];
				break;
			case 4:
				strcpy(menu,"Panas Special Ayam Gulai McD");
				harga[4];
				break;
			case 5:
				strcpy(menu,"Beef Alfredo Burger");
				harga[5];
				break;
			case 6:
				strcpy(menu,"McSpicy Alfredo Burger");
				harga[6];
				break;
			case 7:
				strcpy(menu,"Big Mac");
				harga[7];
				break;
			case 8:
				strcpy(menu,"Triple Burger with Cheese");
				harga[8];
				break;
			case 9:
				strcpy(menu,"Double Cheeseburger");
				harga[9];
				break;
			case 10:
				strcpy(menu,"Cheeseburger with Egg");
				harga[10];
				break;
			case 11:
				strcpy(menu,"Air Mineral");
				harga[11];
				break;
			case 12:
				strcpy(menu,"Manggo Frappe");
				harga[12];
				break;
			case 13:
				strcpy(menu,"Matcha Frappe");
				harga[13];
				break;
			case 14:
				strcpy(menu,"McFlurry");
				harga[14];
				break;
			case 15:
				strcpy(menu,"Sundae");
				harga[15];
				break;
			default:
				cout<<"Pilihan menu yang anda pilih tidak tersedia..."<<endl;
				break;
				
		}
		cout<<"Ganti pesanan (Y/t) ? "; 
		cin>>ulangi;
		
		} while (ulangi == 'Y' || ulangi == 'y');
		cout<<"--------------------------------------------------------------------------------------------------------------------"<<endl;
		
		
		
		cout<<endl;
		cout<<" Anda memilih                : "<<menu<<endl;
		cout<<endl;
		cout<<" Jumlah makanan yang dibeli  : ";
		cin>>jumlah;
		
		makan = jumlah * harga[i=makanan];
		pajak = makan * ppn;
		total = makan+pajak;
		cout<<endl;
	   	cout<<"--------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"|                                        McDonald's Yogyakarta                                    			|"<<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"\tNama Pemesan		: "<<nama<<endl;
		cout<<"\tMenu Makanan		: "<<menu<<endl;
		cout<<"\tJumlah Makanan		: "<<jumlah<<" porsi"<<endl;
		cout<<"\tHarga Makanan 		: Rp"<<harga[makanan]<<"*"<<jumlah<<endl;
		cout<<"\tPajak Restaurant	: Rp"<<pajak<<",00"<<endl;
		cout<<"\tTotal Pembayaran	: Rp"<<total<<",00"<<endl;
		
		if(jumlah>=10){
			bonus = total-diskon;
			total = bonus;
			cout<<endl;
			cout<<"# Anda mendapatkan diskon Potongan Harga  : Rp."<<diskon<<" #"<<endl;
			cout<<"  Total Pembayaran Setelah Diskon         : Rp."<<total<<endl;
		}
		
		cout<<"--------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<" Silahkan bayar disini 		: Rp";
		cin>>bayar;
		cout<<endl;
		
		while (saldo=bayar<total){
			cout<<" Saldo anda kurang. Silahkan bayar lagi : Rp";
			cin>>kurang;
			bayar+=kurang;
		};
		
		kembalian=bayar-total;
		cout<<" Uang yang anda bayar 		: Rp"<<bayar<<endl;
		cout<<" Uang kembalian       		: Rp"<<kembalian<<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------"<<endl;
		
				while (back=='Y'||back=='y');
				cout<<endl;
				cout<<"                               Terimakasih Telah Memesan di McDonald's                               "<<endl;
				cout<<"				         	 Selamat Menikmati                                      "<<endl;
				
	}

void menu_makanan()
{
	cout<<"Pilihan menu yang tersedia---"<<endl;
		cout<<"-------------------------------------------------------------------------------------------"<<endl;
		cout<<"| 1. Panas 1 Ayam Gulai McD        = Rp. 39.000                                           |"    <<endl;
		cout<<"| 2. Panas 2 Ayam Gulai McD        = Rp. 57.500                                           |"    <<endl;
		cout<<"| 3. Panas 2 Fries Ayam Gulai McD  = Rp. 60.000                                           |"    <<endl;
		cout<<"| 4. Panas Special Ayam Gulai McD  = Rp. 45.500                                           |"    <<endl;
		cout<<"| 5. Beef Alfredo Burger           = Rp. 34.000                                           |"    <<endl;
		cout<<"| 6. McSpicy Alfredo Burger        = Rp. 42.000                                           |"    <<endl;
		cout<<"| 7. Big Mac                       = Rp. 36.000                                           |"    <<endl;
		cout<<"| 8. Triple Burger with Cheese     = Rp. 43.500                                           |"    <<endl;
		cout<<"| 9. Double Cheeseburger           = Rp. 35.000                                           |"    <<endl;
		cout<<"| 10. Cheeseburger with Egg        = Rp. 28.500                                           |"    <<endl;
		cout<<"| 11. Air Mineral                  = Rp. 9.500                                            |"    <<endl;
		cout<<"| 12. Mango Frappe                 = Rp. 30.000                                           |"    <<endl;
		cout<<"| 13. Matcha Frappe                = Rp. 36.000                                           |"    <<endl;
		cout<<"| 14. McFlurry                     = Rp. 11.500                                           |"    <<endl;
		cout<<"| 15. Sundae                       = Rp. 10.500                                           |"    <<endl;
		cout<<"-------------------------------------------------------------------------------------------"<<endl;
}
