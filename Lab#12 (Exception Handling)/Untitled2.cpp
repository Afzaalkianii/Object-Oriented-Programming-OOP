// index_check.cpp
#include <iostream>
#include <stdexcept>
using namespace std;
int main(){
    int arr[3] = {0,0,0};
    int idx, val;
    cout<<"Enter index (0-2) and value: ";
    if(!(cin>>idx>>val)){ cout<<"Invalid input\n"; return 1; }
    try{
        if(idx < 0 || idx >= 3) throw out_of_range("Index out of range");
        arr[idx] = val;
        cout<<"Array: ";
        for(int i=0;i<3;++i) cout<<arr[i]<<" ";
        cout<<"\n";
    } catch(const exception &e){
        cout<<"Error: "<<e.what()<<"\n";
    }
}

