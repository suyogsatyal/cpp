//WAP to implement a program about Book
//Creaste a class AUTHOR with attributes name & qualification.
//Also create a class PUBLICATION with pname. From these classes, derive a class BOOK having attributes title and price.
//Each of the 3 classes should have getData() method to get their data from user.
//The classes should have putData() method to display the data.
//Create instance of he class book in main()

#include <iostream>
using namespace std;

class Author{
    public:
    string Name, Qual;

    void getData(){
        cout<<"Enter Author Name: ";
        cin>>Name;
        cout<<"Enter Qualification: ";
        cin>>Qual;
    }

    void putData(){
        cout<<"Author: "<<Name<<endl;
        cout<<"Qualification: "<<Qual<<endl;
    }
};

class Publication{
    public:
    string pName;

    void getData(){
        cout<<"Enter Publication: ";
        cin>>pName;
    }

    void putData(){
        cout<<"Publication: "<<pName<<endl;
    }
};

class Book: public Author , public Publication{
    public:
    string bName;

    void getData(){
        Author::getData();
        Publication::getData();
        cout<<"Enter Book: ";
        cin>>bName;
    }

    void putData(){
        cout<<endl<<endl;
        Author::putData();
        Publication::putData();
        cout<<"Book: "<<bName<<endl;
    }
};

int main(){
    Book obj1;

    obj1.getData();

    obj1.putData();

    return 0;
}