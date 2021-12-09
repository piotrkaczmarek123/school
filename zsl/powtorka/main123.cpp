#include <iostream>

using namespace std;

class  Worker{
	private:
			float salary;
	public:
		string name,surname;
		
		void setSalary(float pmoney);
		float getSalary();
};

class Teacher: public Worker{
	
	public:
		string MedcialSpecialization;
};

void Worker::setSalary(float pmoney){
	salary=pmoney;
}
float Worker::getSalary(){
	return salary;
}


int main(int argc, char** argv) {
	Worker nowak;
	nowak.name="Janusz";
	nowak.surname="Nowak";
		cout<<"obiekt klasy Worker: "<<nowak.name<< " "<<nowak.surname<<endl<<endl;
		
	Teacher kowal;
	kowal.name="Anna";
	kowal.surname="Kowal";
	kowal.MedcialSpecialization="kardiolog";
	kowal.setSalary(2000);
	
	
	
	
	cout<<"obiekt klasy Teacher: "<<kowal.name<< " "<<kowal.surname<<endl;
	cout<<"specjalizacja: "<<kowal.MedcialSpecialization<<endl;
	cout<<"zarobki: "<<kowal.getSalary();
	return 0;
}
