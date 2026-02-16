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
}