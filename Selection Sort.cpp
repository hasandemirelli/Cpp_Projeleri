#include<iostream>
using namespace std;

int main(){
	int tmp,index,min,i,j,a;
	int dizi[10]={5,6,2,3,1,7,9,8,4};								// dizinin elemanlarý
	int n=9;														// dizinin eleman sayýsý;
	cout<<"Selection Sort :"<<endl;
	cout<<"input dizi : ";
	for(a=0; a<n;a++){												// dizinin elamanlarýný yazdýran döngü
		cout<< dizi[a]<<",";
	}
	cout<<endl;
																	// sýralama döngüsü
	for(i=0; i<n;i++){
		min=dizi[i];
		index=i;
		
		for(j=i+1; j<n; j++){
			if(min>dizi[j]){
				min=dizi[j];
				index=j;	
			}
		}
		tmp=dizi[i];
		dizi[i]=min;
		dizi[index]=tmp;
		
		for(a=0; a<n;a++){											// sýralanmaþ elamanlarý ve dizinin kalanýný yazdýran döngü
		cout<< dizi[a]<<",";
		}
		cout<<endl;
	}
	
	return 0;
}
