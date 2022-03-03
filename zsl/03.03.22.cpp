#include <iostream>
using namespace std;

class Shape{
public:
  virtual void calculateArea()=0;
  virtual void setSide(float side)=0;
};

class Circle : public Shape{
  float r;
public:
  Circle(float radius){
    r=radius;
  }
  void setRadius(float radius){
    r=radius;
  }
  virtual void calculateArea(){
    cout << "Pole ko³a wynosi: " << 3.14*r*r << endl;
  }
  virtual void setSide(float side){
    r=side;
  }
};

class Square : public Shape{
  float a;
public:
  Square(float sideA){
    a=sideA;
  }
  void setA(float sideA){
    a=sideA;
  }
  virtual void calculateArea(){
    cout << "Pole kwadratu wynosi: " << a*a << endl;
  }
  virtual void setSide(float side){
    a=side;
  }
};

int main()
{
    setlocale(LC_ALL, "polish");

    Square kw(4);
    kw.calculateArea();
    kw.setA(3);
    kw.calculateArea();

    Circle kolo(4);
    kolo.calculateArea();
    kolo.setRadius(2);
    kolo.calculateArea();

    Shape *wsk;
    wsk=&kolo;
    wsk->calculateArea();
    wsk->setSide(4);
    wsk->calculateArea();

    return 0;
}

