#include<iostream>
using namespace std;

int main(){
	int tmp,index,min,i,j,a;
	int dizi[10]={5,6,2,3,1,7,9,8,4};								// dizinin elemanlar�
	int n=9;														// dizinin eleman say�s�;
	cout<<"Selection Sort :"<<endl;
	cout<<"input dizi : ";
	for(a=0; a<n;a++){												// dizinin elamanlar�n� yazd�ran d�ng�
		cout<< dizi[a]<<",";
	}
	cout<<endl;
																	// s�ralama d�ng�s�
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
		
		for(a=0; a<n;a++){											// s�ralanma� elamanlar� ve dizinin kalan�n� yazd�ran d�ng�
		cout<< dizi[a]<<",";
		}
		cout<<endl;
	}
	
	return 0;
}
