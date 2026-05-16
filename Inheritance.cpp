#include<iostream>
#include<string>
using namespace std;

class Person{
private:
   string name;
   int age;
public:
   Person() : name("Unknown"),age(0) {
    cout<<"Person's Default constructor is called"<<endl;
   }
   Person(string n,int a) : name(n),age(a) {
    cout<<"Person's parameterized constructor is called"<<endl;
   }

   void setName (string n) { name = n; }
   void setAge(int a) { age = a; }
   string getName() { return name; }
   int getAge() { return age; }
   
   void displayInfo()  { cout<<"Name: "<<name <<", " <<"Age: "<<age<<endl;}
};

class Student : public Person {
private: 
     string roll_No;
     double marks;
public:
    Student() : Person(), roll_No("000"), marks(0) { cout<<"Student's Default constructor"<<endl; }
    Student(string n,int a,string r,double m) : Person(n,a),roll_No(r),marks(m) {
      cout<<"Student's parameterized constructor is called"<<endl;
    }

    void setRollno(string r) { roll_No = r ;}
    void setMarks(double m) { marks = m ;}
    string getRollno() { return roll_No ;}
    double getMarks() { return marks ;}

    void displayInfo() {
      Person::displayInfo();
      cout<<"RollNo: "<<roll_No<<", "<<"Marks: "<<marks<<endl;
    }
};

class Teacher : public Person {
private:
   string subject;
   double salary;
public:
   Teacher() : Person(), subject("None"), salary(0) { cout<<"Teacher's deafault constructor"<<endl; }
   Teacher(string n , int a , string s , double sal) : Person(n,a) , subject(s) , salary(sal) {
      cout<<"Teacher's parameteized constructor"<<endl;
   }

   void setSubject(string s) { subject = s; }
   void setSalary(double sal) { salary = sal; }
   string getSubject() { return subject; }
   double getSalary() { return salary; }

   void displayInfo() {
      Person::displayInfo();
      cout<<"Subject: "<<subject <<", "<< "Salary: "<<salary<<endl;
   }
};

int main() {

  Student s1("Arooj",19,"CS-167",98);
  s1.displayInfo();

  Teacher t1("Sir Ahmad",35,"OOP",95000);
  t1.displayInfo();

  return 0;
}