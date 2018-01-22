#include <iostream>
#include <string>
using namespace std;

class burung{
	public:
		string jenisBurung;
		void bersiul(string jenis);
	
};

int main(){
	burung burungKu;
	burung burungMu;
	
	burungKu.jenisBurung="BEO";
	cout<<(burungKu.jenisBurung)<<endl;
	burungKu.bersiul("PIUWIT");
	
	
}

void burung::bersiul(string jenis){
	cout<<"Bersiul bunyi "<<jenis;
}
