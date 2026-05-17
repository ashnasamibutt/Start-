#include<iostream>
#include<string>
using namespace std;
class Phone {
private:
 string brand;
 string simtype;
public:
  Phone() : brand("Unknown") , simtype("None") {
    cout<<"Phone's deafault constructor"<<endl;
  }
  Phone(string b ,string s) : brand(b) ,simtype(s) {
    cout<<"Phone's parameterized constructor"<<endl;
  }

  void setBrand(string b) { brand = b; }
  void setSimtype(string s) { simtype = s; }
  string getBrand() { return brand; }
  string getSimtype() { return simtype; }

  void displayInfo() {
    cout<<"Brand: "<<brand<<" , "<<"Simtype: "<<simtype<<endl;
  }
};

class Camera {
private:
  int resolution;
  bool flash;
public:
   Camera() : resolution(0) , flash(true) {
    cout<<"Camera's default constructor"<<endl;
   }
   Camera(int r,bool f) : resolution(r) , flash(f) {
     cout<<"Camera's parameterized constructor"<<endl;
   }

   void setResolution(int r) { resolution = r; }
   void setFlash(bool f) { flash = f; }
   int getResolution() { return resolution; }
   bool getFlash() { return flash; }

   void displayInfo() {
    cout<<"Resolution: "<<resolution<<" , "<<"Flash: "<<(flash ? "Yes" : "No")<<endl;
   }
};

class Smartphone : public Phone , public Camera {
private:
   int storageGB;
public:
  Smartphone() : Phone() , Camera() , storageGB(0) {
    cout<<"Smartphone's deafault constructor"<<endl;
  }
  Smartphone(string b, string s, int r, bool f, int st) : Phone(b,s) , Camera(r,f) , storageGB(st) {
    cout<<"Smartphone's parameterized constructor"<<endl;
  }

  void setStorageGB(int st) { storageGB = st; }
  int getStorageGB() { return storageGB; }

  void displayInfo() {
     Phone::displayInfo();
     Camera::displayInfo();
     cout<<"StorageGB: "<<storageGB<<"GB"<<endl;
  }
};

int main() {
    Smartphone s1("Samsung","Dual SIM",108,true,256);
    s1.displayInfo();

    return 0;
}
