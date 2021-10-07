#include <iostream>
using namespace std;


class Worker{
	public:
		string name,surname;
		void getData();
};

void Worker::getData(){
	cout<<"imie i nazwisko: "<<name<<" "<<surname<<endl;
	
}



int main(int argc, char** argv) {
	
	
	Worker *p_worker;
	p_worker= new Worker(); 
	
	p_worker->name="janusz";
	p_worker->surname="nowak";
	
	p_worker->getData();
	
	delete p_worker;
	cout <<p_worker;
	
	p_worker->getData();
	return 0;
}
