#include<iostream>
#include<string>
using namespace std;
class Student{
private:
   string name;
   string roll_No;
   int age;
   double marks;
public:
   Student() : name("Unknown"),roll_No("A123"),age(18),marks(0){
    cout<<"Default constructor is called"<<endl;
   }

   Student(string n ,string r,int a,double m) : name(n),roll_No(r),age(a),marks(m) { 
    cout<<"Parameterized constructor is called"<<endl;
   }

   Student(const Student &other) : name(other.name), roll_No(other.roll_No),age(other.age),marks(other.marks) {
      cout<<"Copy constructor is called"<<endl;
   }

   void setname(string n){
    name = n;
   }
   void setrollno(string r){
    roll_No = r;
   }
   void setage(int a){
    age = a;
   }
   void setmarks(double m){
    marks = m;
   }

   string getName(){
    return name;
   }
   string getRollNo(){
    return roll_No;
   }
   int getAge(){
    return age;
   }
   double getMarks(){
    return marks;
   }

   void displayInfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"RollNO: "<<roll_No<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Marks: "<<marks<<endl;
   }
};

int main (){
    Student s1;
    Student s2("Rida","CS-100",19,90.5);
    s1.displayInfo();
    cout<<"-----------------------------"<<endl;
    s2.displayInfo();
    s2.setmarks(100);
    cout<<"After updating marks for s2:"<<endl;
    s2.displayInfo();
    Student s3(s2);
    cout<<"Information for s3 (copy of s2):"<<endl;
    s3.displayInfo();
}

