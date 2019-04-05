#include <iostream>
#include <string>
 
using namespace std;
 
class Mobil{
	public:
		string merk;
		int jumlah;
		int JmlRoda(){
			cout<<"Jumlah Roda : Empat";
		}
};
 
class Motor{
	public:
		string brand;
		int banyak;
		int JmlRoda(){
			cout<<"Jumlah Roda : Dua";
		}
};
 
class Kendaraan : public Mobil, public Motor{
	public:
		void setA_Mobil(int a_jumlah, string a_merk){
			jumlah = a_jumlah;
			merk = a_merk;
		}
		
		void setA_Motor(int a_banyak, string a_brand){
			banyak = a_banyak;
			brand = a_brand;
		}
		
		void displayMobil(){
			cout<<"Memiliki Mobil Berjumlah "<<jumlah<<" Yang Bermerk "<<merk<<endl;
		}
		
		void displayMotor(){
			cout<<"Memiliki Motor Berjumlah "<<banyak<<" Yang Bermerk "<<brand<<endl;
		}
		
		int JmlRoda(){
			cout<<"Jumlah Roda : Lebih Dari Dua"<<endl;
		}
};
 
int main (){
	Kendaraan zhafran;
	zhafran.setA_Mobil(1,"Toyota");
	zhafran.setA_Motor(2, "Honda");
	cout<<"Zhafran :"<<endl;
	zhafran.displayMobil();
	zhafran.displayMotor();
	zhafran.JmlRoda();			//OVERRIDING
	
	Kendaraan *udin=new Kendaraan;
	udin->setA_Mobil(0, " ");
	udin->setA_Motor(1, "Ninja");
	cout<<"============================================="<<endl;
	cout<<"Udin :"<<endl;
	udin->displayMobil();
	udin->displayMotor();
	udin->JmlRoda();			//OVERRIDING
}
