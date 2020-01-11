#include<iostream>
using namespace std;


class Rasyonel{
int a, b;
public:
// Burada yapýcýlar ve yýkýcýlar olacak
// Burada iþleçlerin üzerine yükleme yapacak prototipler olacak
};
Rasyonel & Rasyonel :: operator +( Rasyonel &b) {
		int taban = this->b * r2.b,
        tavan_r1 = this->a * r2.b,
        tavan_r2 = (r2.a) * ((*this).b),
        tavan = tavan_r1 + tavan_r2;

    Rasyonel R = *(new Rasyonel(tavan, taban));
    return R;}
Rasyonel & Rasyonel :: operator +( int n) {
	return (*this) + (*(new Rasyonel(inte, 1)));}
Rasyonel & Rasyonel :: operator <( Rasyonel &b) {
	return ((double)(*this)) < ((double)r2);}
Rasyonel & Rasyonel :: operator !() {...}
Rasyonel & Rasyonel :: operator ++() {
	this->a += b;
    return *this;}
Rasyonel & Rasyonel :: operator ++( int i ) {
	Rasyonel r = (*this).copy();
    this->a += b;
    return r;}
Rasyonel & Rasyonel :: operator double () {...}

int main(){
}
