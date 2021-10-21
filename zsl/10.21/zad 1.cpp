#include <iostream>
using namespace std;

struct Date{
	unsigned short int dd, mm, yyyy; 
};

class Car{
	public:
	unsigned int id;
	string brand="Nieznana", model, color;
	unsigned short int power;
	float price;
	Date dateOfProduction;
	
	getData();
	Car(unsigned int pId=3,string pBrand="marka");
	
};

Car::getData(){
	cout<<"Identyfikator: "<<id<<endl
		<<"Marka: "<<brand<<endl<<endl;

}

Car::Car(unsigned int pId, string pBrand){
	id=pId;
	brand=pBrand;
}


int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Car opel;
	opel.getData();
	
	Car fiat (15,"Fiat");
	fiat.getData();
	
	Car bmw = Car(12);
	bmw.getData();
	
	Car *wsk;
	wsk=&bmw;
	wsk->getData();
	wsk->brand="BMW";
	wsk->getData();
	
	

	

	
	return 0;
}
