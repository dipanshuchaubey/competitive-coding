#include <iostream>
using namespace std;

template<typename N, typename Y, typename S>
class Student{
  public:
  N name;
  Y year;
  S section;
  static string college;

  Student(N n, Y y, S s){
    name=n;
    year=y;
    section=s;
  }

  void display() {
    cout<<"\nName: "<<name<<"\nYear: "<<year<<"\nSection: "<<section<<"\nCollege: "<<college;
  }
};

template<typename N, typename Y, typename S> string Student<N,Y,S>::college="G.H Raisoni College of Engg.";

int main() {
  Student<string,int,char> s1("Dipanshu Chaubey", 2, 'A');
  s1.display();
  Student<int,int,char> s2(198, 2, 'A');
  s2.display();
  return 0;
}