#include <iostream>
using namespace std;

template<class T>
class List{
	private:
		int _count=0;
		int _capacity;
		T** _pointer;
	//	T ** _pointer = new T*[10];
	
	public:
		List(int pCapacity): _capacity(pCapacity){
			//inicjalizacja tablicy wskaznikow typu T
			_pointer = new T*[_capacity];
		}
		void Add(T & item){
			if (_count < _capacity){
				_pointer[_count++] = &item;
			}
		}
		
		int Count(){
			//zwraca aktualna ilosc elemntow w kolekcji
			return _count;
		}
		void ShowItems(){
			cout<<"Items: "<<endl;
			for(int i=0; i<_count;i++){
				cout<<i<<", "<<*_pointer[i]<<endl;
			}
		}
		
		void RemoveAdd(int index){   //usuwanie elemtny z kolekcji na podstawie indeksu
			if(index < _count){
				for(int i = index;i<_count-1;i++){
					_pointer[i]=_pointer[i+1];
				}
				_count--;
			}
		}
		
		void Remove(T & item){
			//usuwa pierwsze wystaaaapienie item w kolekcji
			T*_pnt=&item;
			for(int i = 0;i<_count;i++){
				if(_pointer[i]== _pnt){
					RemoveAdd(i);
					return;
				}
				
			}
		}
		
		bool Contains(T & item){
			T*_pnt=&item;
			for(int i=0; i<_count;i++){
				if(_pointer[i] == _pnt){
					return true;
				}
				
			}
			return false;
		}
		T& operator [] (int index){
			if(index<_count){
				return *_pointer[index];
			}
			else{
				cout<<"wyszedles poza kolekcje"<<endl;
			}
		}
};

int main(int argc, char** argv) {
	int a =10, b=20, c=30, d=40,e=50;
	List<int> lista =List<int>(10);//definicja listy typu int
	//dodawani enowych elementow
	lista.Add(a);
	lista.Add(b);
	lista.Add(c);
	lista.Add(d);
	lista.Add(e);
	cout<<"ilosc elemntow w kolekcji: "<<lista.Count()<<endl;
	lista.ShowItems();
	b=30;
	lista.ShowItems();
	lista.RemoveAdd(3);
	lista.ShowItems();
	lista.Remove(b);
	lista.ShowItems();
	cout<<lista.Contains(a)<<endl;
	cout<<lista.Contains(b)<<endl;
	cout<<"element 2.: "<<lista[2]<<endl;
	return 0;
}
