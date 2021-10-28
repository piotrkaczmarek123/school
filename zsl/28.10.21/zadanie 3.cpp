#include <iostream>
using namespace std;
 
struct Date {
	int dd, mm, yyyy;
};
 
class Car{
	public: 
		unsigned int id;
		string brand;
		string model;
		
 
		void getData();
		Car();
		Car(unsigned int pId,string pBrand,string pModel):
			 id {pId},
  			brand {pBrand},
 			model {pModel}	
 			{
 			cout<<"konstruktor domyslny"<<endl;
			 }

		
 	
 
};
 
void Car::getData(){
	cout<<"id= "<<id<<"\nMarka: "<<brand<<"\nmodel: "<<model<<endl<<endl;

}
 
 Car::Car():
 id {0},
 brand {"marka"},
 model {"model"}	
 {
 cout<<"konstruktor domyslny"<<endl;
 }




int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
 	

		Car fiat;
		fiat.getData();
		Car fiat1(8,"fiat","panda");
		fiat1.getData();


	return 0;
	}
