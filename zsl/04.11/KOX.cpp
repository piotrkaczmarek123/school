#include <iostream>
#include <math.h>
using namespace std;

class Cylinder{
	public:
	int h;
	int r;
	

	double pi=3.14;
	
	baseArea();

	bocznaArea();
	
	allArea();
	
	getData();
	
	volume();
};

 Cylinder::baseArea(){
 	cout<<"pole podstawy  "<<pi*(r*r)<<endl;


}
Cylinder::bocznaArea(){
	cout<<"pole bocze  "<<2*pi*r*h<<endl;
}
Cylinder::getData(){
	cout<<"podaj r";
	cin>>r;
	cout<<"podaj h";
	cin>>h;
}
Cylinder::allArea(){
	cout<<"pole calkowite  "<<2*(pi*r*r)+2*pi*r*h<<endl;
}

Cylinder::volume(){
	cout<<"objetosc  "<<pi*r*r*h;
}

int main(int argc, char** argv) {
	
	Cylinder walec;
	walec.getData();
	walec.baseArea();
	walec.bocznaArea();
	walec.allArea();
	walec.volume();

	
	return 0;
}
