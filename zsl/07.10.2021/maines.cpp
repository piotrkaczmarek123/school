#include <iostream>
using namespace std;

class Worker{
	public:
		string name,surname;
		void getDate();
};

void Worker::getDate(){
	cout<<"imie i nazwisko: "<<name<<" "<<surname<<endl;
	
}

int main(int argc, char** argv) {
	
	Worker kowalski;
	
	Worker *p_kowalski;
	p_kowalski =&kowalski;
	
	cout<<"adres obiektu kowalski: "<<p_kowalski<<endl;
	p_kowalski->name="janusz";
	kowalski.getDate();
	p_kowalski->getDate();
	return 0;
}
