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
		cout<<"konsturktor domyslny"<<endl;
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
int main(int argc, char** argv) {
	Worker nowak =Worker("janusz","nowak");
	nowak.getData();
	
	
	
	return 0;
}
