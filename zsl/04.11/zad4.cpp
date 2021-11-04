#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
class Cylinder{
	private:
		double r, h;
		
	public:	
		Cylinder();
		Cylinder(double r, double h);
		Cylinder(const Cylinder &);
		double pi = 3.1415926535897;
		void catchvalues(double&,double&);
		void setvalues(double,double);
		void values();
		void fieldM(); // pi*r^2
		void fieldS(); // 2*pi*r*h
		void fieldE(); // 2*pi*r^2 + 2*pi*r*h + 2*pi*r*(r+h)
		void volume(); // pi*r^2*h 
			
};

void Cylinder::catchvalues(double &pR,double &pH)
{
    pR=r;
    pH=h;
}
void Cylinder::setvalues(double pR, double pH){
	r=pR;
	h=pH;
}
void Cylinder::values(){
	cout<<"Srednica: "<<r<<"\nWysokosc: "<<h<<endl;
}
void Cylinder::fieldM(){
	cout<<"Pole podstawy tego cylindra wynosi: "<<pi*r*r<<endl;
}
void Cylinder::fieldS(){
	cout<<"Pole boczne tego cylindra wynosi: "<<2*pi*r*h<<endl;
}
void Cylinder::fieldE(){
	cout<<"Pole calkowite tego cylindra wynosi: "<<2*pi*r*r+2*pi*r*h+2*pi*r*(r+h)<<endl;
}
void Cylinder::volume(){
	cout<<"Objetosc tego cylindra wynosi: "<< pi*r*r*h<<endl;
}

int main(int argc,char** argv){
setlocale(LC_CTYPE, "polish");
	Cylinder walec(3,9);
	walec.values();
	walec.fieldM();
	walec.fieldS();
	walec.fieldE();
	walec.volume();
    

return 0;
}

