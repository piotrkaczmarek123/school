#include <iostream>
using namespace std;

class Student{
	public:
	static string s_class;
	static string s_job;
	 string name,surname;
	 
	 void showCLassProfession(){
	 	cout<<"klasa "<<s_class<<" ,"<<"praca "<<s_job;
	 }
	  void setNameSurname(string name, string surname){
	  	cout<<"imie i nazwiosko "<<name<< " "<<surname<<endl;
	  }
	  
};
 
 

int main(int argc, char** argv) {
	return 0;
}



/*
zdefiuj l;ase uczen czwierajce dwie zmienne kalsowe s_klasa i s_zawod
w zmiennej s_klasa przypisz nazwe swojej klasy do ktoej uczesczasz

2 zmieniej s_zawopd zawod w ktorym sie ksztlacisz

zdefiniuj zmienne instacjinie imie i nazwisko
zdefiniuj klase statyczna wyswietlajaca zawod i klase
zdefiniuj metode cz³onkowska wyswietlajaca i ustawiacjace dane dla zmiennych czlownkowskich
