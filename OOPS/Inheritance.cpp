#include<bits/stdc++.h>
using namespace std;
class Person{
public:
    string name;
    int age;
    Person(string name,int age){
        cout<<"Parent constructor\n";
        this->name=name;
        this->age=age;
    }
};
class Student:public Person{
 public:
    int rollno;
    Student(string name,int age,int rollno):Person(name,age){
        this->rollno=rollno;
        cout<<"Child Constructor\n";
    }
    void getInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<rollno<<endl;
    }
};
int main(){
    Student s1("Honey",20,541);
    s1.getInfo();
    return 0;
}