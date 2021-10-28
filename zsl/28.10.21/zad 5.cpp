#include <iostream>
using namespace std;
 
 class Rectangle{
 	private:
 		double sideA;
 		double sideB;
 		
 		
 		public:
 			Rectangle();
 			Rectangle(double psideA,double psideB);
 			Rectangle(const Rectangle &);
 			
 			void catchSide(double&, double&);
 			void setSides(double,double);
 			double area();
 			double circuit();
 };
 
 
 
Rectangle::Rectangle(){
	cout<<"konsturktor domyslny"<<endl;
}
Rectangle::Rectangle(double psideA,double psideB){
	sideA=psideA;
	sideB=psideB;
	cout<<"konstruktor parametryczny";
}
Rectangle::Rectangle(const Rectangle & model){
	sideA=model.sideA;
	sideB=model.sideB;
	cout<<"konstruktor kopiujacy";
}
 			
void Rectangle::catchSide(double &psideA, double &psideB){
	sideA=psideA;
	sideB=psideB;
}
void Rectangle::setSides(double psideA, double psideB){
	sideA=psideA;
	sideB=psideB;
}
double Rectangle::area(){
	return sideA*sideB;
}
double Rectangle::circuit(){
return 2 * sideA +2* sideB;
}

Rectangle copyRectangle(Rectangle rectangle){
	return rectangle;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
 	
	double a=10,b=11;
	cout<<"pierwszy prostok¹t"<<endl;
	Rectangle prostokat1(2,4);
	prostokat1.catchSide(a,b);
	cout<<"bok a:"<<a<<endl;
	cout<<"bok b:"<<b<<endl;
	
	cout<<"\ndrugi prostokat"<<endl;
	Rectangle prostokat2=prostokat1;
	prostokat2.catchSide(a,b);
	cout<<"bok a:"<<a<<endl;
	cout<<"bok b:"<<b<<endl;
	
	cout<<"\ntrzeci prostkat "<<endl;
	Rectangle prostokat3(prostokat1);
	prostokat3.catchSide(a,b);
	cout<<"bok a:"<<a<<endl;
	cout<<"bok b:"<<b<<endl;
	
	
		cout<<"\nczwarty prostkat "<<endl;
		Rectangle prostokat4;
		prostokat4=copyRectangle(prostokat1);
		prostokat4.catchSide(a,b);

	return 0;
	}
