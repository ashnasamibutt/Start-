#include<iostream>
using namespace std;
class Box{
 private:
    double volume;
public:
    Box (){
        cout<<"Default constructor is called"<<endl;
    }
    Box(double v):volume(v) {
        cout<<"Parameterized constructor is called"<<endl;
    }
    bool operator == (const Box&other){
        return volume == other.volume;
    }
    void displayvolume(){
        cout<<"Volume of this box is: "<<volume<<endl;
    }
};
int main(){
    Box b1(50);
    Box b2(50);
    Box b3(30);
    if(b1==b2){
        cout<<"b1 and b2 are identical"<<endl;
    }
    else 
    cout<<"b1 and b2 are not identical"<<endl;
    if(b1==b3){
        cout<<"b1 and b3 are identical"<<endl;
    }
    else 
    cout<<"b1 and b3 are not identical"<<endl;
    cout<<"(Box1)"; b1.displayvolume();
    cout<<"(Box2)"; b2.displayvolume();
    cout<<"(Box3)"; b3.displayvolume();

    cout<<"THis is a new change"<<endl;
    cout<<"So we found the identical boxes!"<<endl;
    return 0 ;
}

