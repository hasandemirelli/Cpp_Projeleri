#include<iostream>
using namespace std;

int main(){
	int tmp,i,j,a;
	int dizi[10]={5,6,2,3,1,7,9,8,4};								// dizinin elemanlar�
	int n=9;														// dizinin eleman say�s�;
	cout<<"Bubble Sort :"<<endl;
	cout<<"input dizi : ";
	for(a=0; a<n;a++){												// dizinin elamanlar�n� yazd�ran d�ng�
		cout<< dizi[a]<<",";
	}
	cout<<endl;
																	// s�ralama d�ng�s�
	for(i=0; i<n;i++){	
		for(j=0; j<n-1; j++){
			if(dizi[j]>dizi[j+1]){
				tmp=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=tmp;	
			}
			for(a=0; a<n;a++){											// s�ralanma� elamanlar� ve dizinin kalan�n� yazd�ran d�ng�
				cout<< dizi[a]<<",";
			}
			cout<<endl;
		}
		cout<<"-------------------------------"<<endl;
	}
	
	return 0;
}
