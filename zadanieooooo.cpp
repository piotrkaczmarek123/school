#include <iostream>

using namespace std;


class wartosc{
	public:
		float a,b;
		
		float obwod(){
	return	a*2 + b*2;}
		float pole(){
			return a*b;
		}
		void wynik (float obwod, float pole){
			cout<< "obwod " <<obwod <<" pole  "<<pole;
		}
	};
	
	
int main(int argc, char** argv) {
	float bok1;
	float bok2;
	
	cout <<"bok 1"<<endl;
	cin >> bok1;
	cout <<"bok 2"<<endl;
	cin >> bok2;
	
	wartosc g1;
	g1.a=bok1;
	g1.b=bok2;
	g1.wynik(g1.obwod(),g1.pole());
	
	return 0;
}
	
