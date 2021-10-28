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
		
		Car(unsigned int id,string brand,string model);
		
 	
 
};
 
void Car::getData(){
	cout<<"id= "<<id<<"\nMarka: "<<brand<<"\nmodel: "<<model<<endl<<endl;
 

}
 
 Car::Car():
 id {0},
 brand {"marka"},
 model {"model"}	
 {}


Car(unsigned int id,string brand,string model);

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
 	




	return 0;
	}
