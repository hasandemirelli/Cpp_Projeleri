#include <iostream>
#include <cstring>
using namespace std;

//////////////////// Zaman ile ilgili methotlar & claslar...////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Zaman
{
public:
 int saat;
 int dakika;
public:
 Zaman();
 Zaman(int, int);
 void belirleZaman(int, int);
 void yazdirZaman();
 void arttirSaat();
 void arttirDakika();
};
///////////////////// Bo� yap�c� ile yarat�lan Zaman nesnesi 00:00 saatini g�sterir.
Zaman::Zaman(){
	this->saat=0;
	this->dakika=0;
}
/*/////////////////////////////////////// Verilen saat ve dakikaya sahip nesneyi yarat�r. Saatin 0-23, dakikan�n 0-59 aral���nda olmas� gerekir. Aksi taktirde varsay�lan de�er 0 (s�f�r) olacakt�r.*/
Zaman::Zaman(int saat , int dakika){
	if(0<=saat && saat<=23 && 0<=dakika && dakika<=59){
		this->saat=saat;
		this->dakika=dakika;
	}
	else{
		this->saat=00;
		this->dakika=00;
	}
}
///////////////////////////////////////////////// Varolan bir Zaman nesnesinin saat ve dakikas�n� de�i�tirir. Saatin 0-23, dakikan�n 0-59 aral���nda olmas� gerekir. Aksi taktirde varsay�lan de�er 0 (s�f�r) olacakt�r.
void Zaman::belirleZaman(int saat , int dakika){
	if(0<=saat && saat<=23 && 0<=dakika && dakika<=59){
		this->saat=saat;
		this->dakika=dakika;
	}
	else{
		this->saat=00;
		this->dakika=00;
	}
}
////////////////////////////  Zaman nesnesinin dakikas�n� 1 dakika artt�r�r. Art�mdan sonra dakikan�n 0-59 aral���nda olmas� gerekir. 
void Zaman::arttirDakika(){
	if(this->dakika==59){
		this->dakika=0;
	}
	else{
		this->dakika++;
	}
	
}
////////////////////////// Zaman nesnesinin saatini 1 saat artt�r�r. Art�mdan sonra saatin 0-23 aral���nda olmas� gerekir. 
void Zaman::arttirSaat(){
	if(this->saat==23){
		this->saat=0;
	}
	else{
		this->saat++;
	}
}
////////////////////////// Zaman nesnesini ekrana yazd�r�r. �rne�in, saat 3 ve dakika 5 ise ekrana 03:05 yazar. �rne�in, saat 13 ve dakika 15 ise ekrana 13:15 yazar.
void Zaman::yazdirZaman(){
	if(saat<10){
		cout<<"0"<<saat<<":";
	}
	else{
		cout<<saat<<":";
	}
	if(dakika<10){
		cout<<"0"<<dakika;
	}
	else{
		cout<<dakika;
	}
	
}
/////////////////////////// Tarih ile ilgili methotlar & claslar...//////////////////////////////////////////////////////////////////////////////////////////////////
class Tarih{
public:
 int ay;
 int gun;
 int yil;
 
public:
 Tarih();
 Tarih(int, int, int);
 void belirleTarih(int, int, int);
 void yazdirTarih();
};
/////////////// Bo� yap�c� ile yarat�lan Tarih nesnesi 01/01/1900 (gun/ay/yil) tarihini g�sterir.
Tarih::Tarih(){
	this->gun=1;
	this->ay=1;
	this->yil=1900;
}
/////////////////Verilen g�n, ay ve y�l de�erlerine sahip nesneyi yarat�r. Tarihin ge�erli olup olmad��� kontrol edilmelidir.
Tarih::Tarih(int gun, int ay, int yil){
	if(ay==1 || ay==3 || ay==5 || ay==7 || ay==8 || ay==10 || ay==12 ){   ///////Hangi ay�n ka� g�n s�rd��� g�z �n�nde bulundurulmal�d�r.
		if(0<gun && gun<=31){
			this->gun=gun;
			this->ay=ay;
			this->yil=yil;
		}
		else{
			this->gun=1;
			this->ay=1;
			this->yil=1900;
		}
	}
	else if(ay==4 || ay==6 || ay==9 || ay==11){
		if(0<gun && gun<=30){
			this->gun=gun;
			this->ay=ay;
			this->yil=yil;
		}
		else{
			this->gun=1;
			this->ay=1;
			this->yil=1900;
		}
	}
	else if (ay==2){ /////// �rne�in, 30/02/1950 veya 01/13/2019 ge�erli tarihler de�ildir.
		if(yil%4==0){
			if(0<gun && gun<=29){
				this->gun=gun;
				this->ay=ay;
				this->yil=yil;
			}
			else{
				this->gun=1;
				this->ay=1;
				this->yil=1900;
			}
		}
		else{
			if(0<gun && gun<=28){
				this->gun=gun;
				this->ay=ay;
				this->yil=yil;
			}
			else{
				this->gun=1;
				this->ay=1;
				this->yil=1900;
			}
		}
	}
	else{
		this->gun=1;
		this->ay=1;
		this->yil=1900;	
	}
/////////////////////////////////// Y�llar 1900-2100 aral���nda olmal�d�r. Bu aral�k d���ndaki y�l�n varsay�lan de�eri 1900 olarak kabul edilmelidir.
	if(1900<=yil && yil<=2100){
		this->yil=yil;
	}
	else{
		this->yil=1900;
	}
}
//////////////////////////////// Varolan bir Tarih nesnesinin g�n, ay ve y�l de�erlerini de�i�tirir. 
void Tarih::belirleTarih(int gun, int ay, int yil){
		if(ay==1 || ay==3 || ay==5 || ay==7 || ay==8 || ay==10 || ay==12 ){   ///////Hangi ay�n ka� g�n s�rd��� g�z �n�nde bulundurulmal�d�r.
		if(0<gun && gun<=31){
			this->gun=gun;
			this->ay=ay;
			this->yil=yil;
		}
		else{
			this->gun=1;
			this->ay=1;
			this->yil=1900;
		}
	}
	else if(ay==4 || ay==6 || ay==9 || ay==11){
		if(0<gun && gun<=30){
			this->gun=gun;
			this->ay=ay;
			this->yil=yil;
		}
		else{
			this->gun=1;
			this->ay=1;
			this->yil=1900;
		}
	}
	else if (ay==2){ /////// �rne�in, 30/02/1950 veya 01/13/2019 ge�erli tarihler de�ildir.
		if(yil%4==0){
			if(0<gun && gun<=29){
				this->gun=gun;
				this->ay=ay;
				this->yil=yil;
			}
			else{
				this->gun=1;
				this->ay=1;
				this->yil=1900;
			}
		}
		else{
			if(0<gun && gun<=28){
				this->gun=gun;
				this->ay=ay;
				this->yil=yil;
			}
			else{
				this->gun=1;
				this->ay=1;
				this->yil=1900;
			}
		}
	}
	else{
		this->gun=1;
		this->ay=1;
		this->yil=1900;	
	}
/////////////////////////////////// Y�llar 1900-2100 aral���nda olmal�d�r. Bu aral�k d���ndaki y�l�n varsay�lan de�eri 1900 olarak kabul edilmelidir.
	if(1900<=yil && yil<=2100){
		this->yil=yil;
	}
	else{
		this->yil=1900;
	}
}
//////////////////Tarih nesnesini ekrana yazd�r�r. �rne�in, g�n 1, ay 1, y�l 1900 oldu�unda ekrana 01/01/1900 yazar.
void Tarih::yazdirTarih(){
	if(this->gun<10){
		cout<<"0"<<this->gun<<"/";
	}
	else{
		cout<<this->gun<<"/";
	}
	if(this->ay<10){
		cout<<"0"<<this->ay<<"/";
	}
	else{
		cout<<this->ay<<"/";
	}
		cout<<this->yil;
}


//////////////////// OLAY ile ilgili methotlar & claslar...////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Olay
{
public:
 string olayIsmi;
 Zaman olayZaman;
 Tarih olayGun;
public:
 Olay();
 Olay(int saat, int dakika, int gun, int ay, int yil, string name);
 void belirleOlayData(int saat, int dakika, int g, int a, int y, string isim);
 void yazdirOlayData();
}; 

Olay::Olay(){
	this->olayGun=Tarih();
	this->olayZaman=Zaman();
	this->olayIsmi="Zamanin Baslangici";
}
Olay::Olay(int saat, int dakika, int gun, int ay, int yil, string name){
	this->olayGun=Tarih(gun, ay, yil);
	this->olayZaman=Zaman(saat, dakika);
	this->olayIsmi=name;
}
/////////////////////////////////////Varolan bir Olay nesnesinin de�erini de�i�tirir. 
void Olay::belirleOlayData(int saat, int dakika, int gun, int ay, int yil, string name){
	this->olayGun=Tarih(gun, ay, yil);
	this->olayZaman=Zaman(saat, dakika);
	this->olayIsmi=name;
}
/////////////////////////////////////Olay nesnesini ekrana yazd�r�r.
void Olay::yazdirOlayData(){
	cout<<this->olayIsmi<<" "; this->olayGun.yazdirTarih(); cout<<" gunu "; this->olayZaman.yazdirZaman(); cout<<" saatinde gerceklesti."<<endl;
	
}

int main(){
	Zaman Zaman(12,59);
	Zaman.arttirSaat();
	Zaman.arttirDakika();
	Zaman.yazdirZaman(); cout<<endl;
	Zaman.belirleZaman(28,20);
	Zaman.yazdirZaman(); cout<<endl;
	Olay Olay(3,52,13,7,1999,"Hasan'in Dogum Gunu");
	Olay.yazdirOlayData();
	Olay.belirleOlayData(22,57,17,5,2019,"Odev Teslimi");
	Olay.yazdirOlayData();
}

