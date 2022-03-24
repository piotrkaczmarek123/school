#include <iostream>
using namespace std;

class Person{
	public:
		string name;
		string surname;
		
		virtual void showData()=0;
};

class Worker: public Person{
	public:
		string position;
		void showData(){
			cout<<"imie i nazwisko: "<< name << " "<< surname <<endl;
		}
		
};

class Student :public Person{
	public:
		string classAtSchool;
		void showData(){
			cout<<"imie i nazwisko"<< name << " " << surname << " klasa: " << classAtSchool <<endl;	
		}
};
int main(int argc, char** argv) {
	//Person osoba1;
	
	Worker pracownik1;
	pracownik1.name="janusz";
	pracownik1.surname="nowak";
	pracownik1.position="programista";
	cout<< "dane pracownika ";
	pracownik1.showData();
	
	Student uczen1;
	uczen1.name="anna";
	uczen1.surname="kowalska";
	uczen1.classAtSchool="2PT";
	uczen1.showData();
	return 0;
}
