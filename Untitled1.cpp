#include <iostream>
#include <string>
using namespace std;

class sandal{
	public:
		int jumlahSandal; 
		string merkSandal;
		// kekuatan sendal
		void pemakaian(string kekuatan);
		 
};

void sandal::pemakaian(string kekuatan){
	cout << " - Kekuatan Sandal : "<< kekuatan <<endl<<endl;


}

int main(){
	// membuat objek dari class
    sandal sandalGunung, sepatuSandal, sandalShowerSlides;

    sandalGunung.jumlahSandal = 5; 
	sandalGunung.merkSandal = " Eiger";
	
    sepatuSandal.jumlahSandal = 10; 
	sepatuSandal.merkSandal = "HomiPeds";
    
    sandalShowerSlides.jumlahSandal = 20; 
	sandalShowerSlides.merkSandal = " Specs";
	
	// menampilkan 
	cout << " Sandal Gunung :"<<endl;
	cout << " - Jumlah Sandal = "<<sandalGunung.jumlahSandal<<" pasang"<<endl;
	cout << " - Merk Sandal   = "<<sandalGunung.merkSandal<<endl;
	sandalGunung.pemakaian("2 Tahun");
	
	cout << " SepatuSandal :"<<endl;
	cout << " - Jumlah Sandal = "<<sepatuSandal.jumlahSandal<<" pasang"<<endl;
	cout << " - Merk Sandal   = "<<sepatuSandal.merkSandal<<endl;
	sandalGunung.pemakaian("1 Tahun");
	
	cout << " Sandal Shower Slides :"<<endl;
	cout << " - Jumlah Sandal = "<<sandalShowerSlides.jumlahSandal<<" pasang"<<endl;
	cout << " - Merk Sandal   = "<<sandalShowerSlides.merkSandal<<endl;
	sandalShowerSlides.pemakaian("5 Tahun");
	
}


	
