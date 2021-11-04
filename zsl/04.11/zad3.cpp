#include <iostream>
using namespace std;


class Animal{
	public:
	static int s_count;
	
	
	Animal(){
		s_count++;
		cout<<"ilosc obiektow "<<s_count<<endl;
	}
	
	~Animal(){
		s_count--;
		cout<<"ilosc obiketow "<<s_count<<endl;
	}
	
	
};

int Animal::s_count=0;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"russian");
	Animal dog;
//	delete dog;
	Animal cat;
	
	cout<<"\nilosc obiektow: "<<Animal::s_count<<endl;
	
	
	Animal *p_dog= new Animal();
		delete p_dog;

	
	
	return 0;
	
}

