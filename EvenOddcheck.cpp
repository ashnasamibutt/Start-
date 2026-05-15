#include<iostream>
using namespace std;

int main(){
    cout<<"Even Odd check from 1 to 10 "<<endl;
    for(int i = 1; i <= 10; i++){
        if(i % 2 == 0){
            cout << i << " is Even" << endl;
        }
        else{
            cout << i << " is Odd" << endl;
        }
    }
    cout<<"This is a new change in Even Odd check file!"<<endl;
    return 0;
}

