#include <iostream>
using namespace std;


class Worker{
	public:
	string name,surname;
	Worker();
	Worker(string pName, string pSurname);
	~Worker(){
		cout<<"definicja destruktora\n";
	}
	void getData();
};

	Worker::Worker(){
		cout<<"konsturktor domyslny"<<endl<<endl;
	}
	
	Worker::Worker(string pName, string pSurname):
		name {pName},
		surname {pSurname}
		{
			cout<<"konstruktor parametryczby\n";
		}
	
	
	void Worker::getData(){
		cout<<"imie i nazwisko: "<<name<<" "<<surname<<endl;
	}
	
	void createObjectWorker(){
		Worker worker;
		worker.getData();
		cout<<"wywolanie funkcjji createobjectworker"<<endl;
	}
int main(int argc, char** argv) {
	Worker nowak =Worker("janusz","nowak");
	nowak.getData();
	
	cout<<endl<<"wskaznik\n";
	Worker *p_kowalski = new Worker("jan","kowalski");
	p_kowalski->getData();
	delete p_kowalski;
	createObjectWorker();
	
	return 0;
}

