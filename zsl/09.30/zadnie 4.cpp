#include <iostream>

using namespace std;

class School{
    public:
    
        static string s_school;
        static string s_jobPosition;
        
        string name,surname;
        
        void getData();
        
        void setNameSurname(string name, string surname);
};


    string School::s_school="CDV";
    string School::s_jobPosition="Student";
    
     
     void School::getData(){
            cout<<endl<<"Imiê i nazwisko"<<endl<<name<<endl<<surname<<endl;
        }
        
    
        void School::setNameSurname(string name, string surname){
        School::name=name;
        School::surname=surname;
    }

    int main(int argc, char** argv)
{ 
  setlocale(LC_CTYPE, "polish");

        cout<<School::s_school;
        
        School kowal;
        kowal.setNameSurname("Tomasz","Wpierdziel");
        kowal.getData();
        School::s_jobPosition="Wyk³adowca";
        cout<<"\n"<<School::s_jobPosition<<endl;
        School::s_jobPosition="Dziekan";
        cout<<"\n"<<School::s_jobPosition<<endl;
        
        
  return 0;
}
