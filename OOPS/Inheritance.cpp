<<<<<<< HEAD
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
=======
#include<bits/stdc++.h>
using namespace std;
class Person{
public:
    string name;
    int age;
    Person(){

    }
};
class Student:public Person{
 public:
    int rollno;
    void getInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<rollno<<endl;
    }
};
int main(){
    Student s1;
    s1.name="NIKKI";
    s1.age=16;
    s1.rollno=41;
    s1.getInfo();
    return 0;
>>>>>>> 85334b0964806ee0bf9ab9a5cc262725364a9a3a
}