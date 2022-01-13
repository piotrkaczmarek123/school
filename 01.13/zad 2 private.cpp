#include <iostream>
using namespace std;
 
class Worker {
  private:
  string name {""}, surname {""};
 
  public:
    	void setName(string pName){
    		name=pName;
		}
 
		void setSurname(string pSurname){
    		surname=pSurname;
		}
 
		string getName(){
			return name;
		}
 
		string getSurname(){
			return surname;
		}  
 
  string getData(){
    return name + " " + surname;
  }
};
 
class Teacher : public Worker {
  private:
    string school_subject {""};
    public:
    	void setSchool_subject(string pSchool_subject){
    		school_subject=pSchool_subject;
		}
		string getSchool_subject(){
			return school_subject;
		}
 
    string getData(){
    return getName() + " " + getSurname() + ", zajêcia: " + getSchool_subject();
  }
};
 
 class Tutor : public Teacher{
 	private:
 		string klasa{""};
 
 		public:
 			void setKlasa(string pKlasa){
 				klasa=pKlasa;
			 }
			 string getKlasa(){
			 	return klasa;
			 }
 		string getData(){
    return getName() + " " + getSurname() + ", zajêcia: " + getSchool_subject() +" klasa "+getKlasa();
  }
 };
 
int main()
{
	setlocale(LC_CTYPE, "Polish");
 
    Teacher nowak;
    nowak.setName("jan");
    nowak.setSurname("Nowak");
    nowak.setSchool_subject("Programowanie obiektowe");
    cout << nowak.getData()<<endl;
 
   Tutor w2pt;
    w2pt.setName("kasia");
    w2pt.setSurname("paprzycka");
    w2pt.setSchool_subject("wychowawca");
    w2pt.setKlasa("3pt");
    cout << w2pt.getData()<<endl;
 
    return 0;
}
