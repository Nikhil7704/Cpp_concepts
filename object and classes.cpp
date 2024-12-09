#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
    
    Teacher(){ //constructor
        dept="conmputer Science";
    }

    Teacher(string n, string sub,string d,double s){ //parametrize constructor
        name=n;
        subject=sub;
        dept=d;
        salary=s;
    }
    string name;
    string dept;
    string subject;
    double salary;

    void changedept(string newdept){
        dept=newdept;

    }
    void getinfo(){
        cout<<"name: "<<name<<endl;
        cout<<"subject: "<<subject<<endl;
        cout<<"department: "<<dept<<endl;
    }
};

int main(){
    Teacher t1("Nikhil","computerscince","btech",333030);
    t1.getinfo();
    
}