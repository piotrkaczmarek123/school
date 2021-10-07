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

Worker& setData(Worker&);
void getData(const Worker&);

int main(int argc, char** argv) {
	
Worker& setData(Worker&);
void getData(const Worker&);

	Worker worker;
	
	worker = setData(worker);
	
	getData(worker);
	return 0;
}

// definicje funkcji zewnetrzych
Worker& setData(Worker& p){
	cout<<"podaj imie: ";
	cin>> p.name;
	cout<<"podaj nazwisko: ";
	cin >>p.name;

}
