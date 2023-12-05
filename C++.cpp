// Anisah Fitriana R
// 220102014 (IF22B)

#include <iostream>

using namespace std;

int main (){
	float a,b,c,d,e,f,g,h;
	
	cout<<"Masukan Nilai A = ";cin>>a;
	cout<<"Masukan Nilai B = ";cin>>b;
	cout<<"Masukan Nailai C = ";cin>>c;
	
	d = a + 6 > 12;
	e = b > 4 + a;
	f = c - 3 <= 8;
	g = d || e || f;
	
	cout<<"\n=== Program Ekspresi AND ===";
	cout<<"\nHasil dari d = a + 6 > 12 adalah "<<d;
	cout<<"\nHail dari e = b > 4 + a adalah "<<e;
	cout<<"\nHasil dari f = c - 3 <= 8 adalah "<<f;
	cout<<"\nHasil dari g = d || e || f adalah "<<g;
	
	return 0;
}
