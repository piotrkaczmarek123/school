#include <iostream>
using namespace std;
class Car{
	public:
	string brand;
	string model;
	string color;
	int year;
	static int numberOfWheels;
	private:
		float price;
		string registration;
	public:
		void setPrice(float pPrice);
		float getPrice();
		
		void setRegistration(string pRegistration);
		string getRegistration();
		
		~Car();
		Car();
		Car(string pBrand,string pModel,int pYear);
		Car(string pBrand,string pModel,string pColor,int pYear,float pPrice,string pRegistration);
		
		
	void	showData();
};

//Setery i Getery
void Car::setPrice(float pPrice){
	price=pPrice;
}
float Car::getPrice(){
	return price;
}

void Car::setRegistration(string pRegistration){
	registration=pRegistration;
}
string Car::getRegistration(){
	return registration;
}



Car::Car(){
	cout<<"jestem domyslny";
}
Car::~Car(){
	cout<<"jestem destruktorem"<<endl;
}

Car::Car(string pBrand,string pModel,int pYear){
	brand=pBrand;
	model=pModel;
	year=pYear;
}
Car::Car(string pBrand,string pModel,string pColor,int pYear,float pPrice,string pRegistration){
	brand=pBrand;
	model=pModel;
	color=pColor;
	year=pYear;
	price=pPrice;
	registration=pRegistration;
	
}


void Car::showData(){
	cout<<"marka: "<<brand<<endl;
	cout<<"model: "<<model<<endl;
	cout<<"kolor: "<<color<<endl;
	cout<<"rok: "<<year<<endl;
	cout<<"cena: "<<price<<endl;
	cout<<"rejestracja: "<<registration<<endl<<endl;
	
	
}







	
int main(int argc, char** argv) {
	Car fiat("fiat","multipla","szary",2000,200.99,"PDW");	
	fiat.showData();
	
	
	Car *superauto;
	superauto =& fiat;
	superauto->setPrice(2000);
	superauto->showData();
	
	return 0;
}

 

/* 
przeciazenie konstruktora oznacza to ze nazwaymay kilka konstroktorow tak samo ale przypisujemy im rozna licze parametrow 
		np:
	Car();
		Car(string pBrand,string pModel,int pYear);
		Car(string pBrand,string pModel,string pColor,int pYear,float pPrice,string pRegistration);

*/
