#include <iostream>
using namespace std;

class Person{
	protected:
		string name;
		string surname;
		
		
		public:
			Person(){
			};
			
				Person(string pName,string pSurname){
				name=pName;
				surname=pSurname;
			
			}
			
		virtual void showData()=0;
		
		
		void setData(string pName,string pSurname) {
			name=pName;
				surname=pSurname;
		}
};

class Worker: public Person{
	protected:
		string position;
		
		
		public:
			Worker(){
			};
			Worker(string pName,string pSurname,string pPosition){
				name=pName;
				surname=pSurname;
				position=pPosition;
			}
		void showData(){
			cout<<"imie i nazwisko: "<< name << " "<< surname <<endl;
		}
		
			void setPosition(string pPosition){
			position=pPosition;
		}
		string getPosition(){
			return position;
		}
		
};

class Student :public Person{
	
		protected:
		string classAtSchool;
		
		
		public:
			Student(){
			};
				Student(string pName,string pSurname,string pClassAtSchool){
				name=pName;
				surname=pSurname;
				classAtSchool=pClassAtSchool;
			
			}
			
		void showData(){
			cout<<"imie i nazwisko"<< name << " " << surname << " klasa: " << classAtSchool <<endl;	
		}
		
			
			void setClassAtSchool (string pClassAtSchool){
			classAtSchool=pClassAtSchool;
		}
		string getClassAtSchool(){
			return classAtSchool;
		}
};
int main(int argc, char** argv) {

	
	Worker osoba1("janusz","nowak","programista");
	

	osoba1.showData();
	
	Student uczen1("maria","listwa","2PT");
	uczen1.showData();

	return 0;
}
