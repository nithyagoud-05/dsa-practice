#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    double *cgpaPtr;
    double cgpa;
    student(string  name,double cgpa){
        this->name=name;
        cgpaPtr=new double;
        *cgpaPtr=cgpa;
    }
    student(student &obj){
        this->name=obj.name;
        cgpaPtr=new double;
        *cgpaPtr=*(obj.cgpaPtr);
    }
    ~student(){
        cout<<"HI , I delete everything"<<endl;
        delete cgpaPtr;
    }
    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"points:"<<*cgpaPtr<<endl;
    }
};
int main(){
student s1("Nithya",9.75);
student s2(s1);
s2.getInfo();
*(s2.cgpaPtr)=9.25;
s1.getInfo();
return 0;
}