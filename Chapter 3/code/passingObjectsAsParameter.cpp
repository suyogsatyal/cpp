#include <iostream>
using namespace std;

class Test{
    public:
    int real, img;
    
    void getData(){
        cout<<endl<<"Enter Real Part of Complex Number:";
        cin>>real;
        cout<<"Enter Imaginary Part of Complex Number:";
        cin>>img;
    }
    
    void putData(){
        string result = (img<0) ? " " : "+";
        cout<<endl<<"The sum of given 2 complex numbers:"<<endl;
        cout<<real<<result<<img<<"i";
    }
    
    Test addData(Test t2){
        Test t3;
        t3.real = real + t2.real;
        t3.img = img + t2.img;
        return t3;
    }
};

int main(){
    Test t1, t2, t3;
    t1.getData();
    t2.getData();
    
    t3 = t1.addData(t2);
    t3.putData();
    return 0;
}