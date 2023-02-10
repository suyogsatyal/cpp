# Chapter 1: Introduction to OOP


## 1.1) Object Oriented Programming
Object-oriented programming (OOP) is a computer programming model that organizes software design around data, or objects, rather than functions and logic.

<br/>

## 1.2) Difference between OOP & POP
| Procedural Oriented Programming | Object Oriented Programming |
|--|--|
| i. Program is divided into Function | i. Program is divided into Objects 
|ii. Top-to-down approach | ii. Bottom-to-top approach|
|iii. No Access Specifiers| iii. Includes Access Specifiers|
|iv. Adding new data is not easy |iv. Adding new data is easy|
|v. Doesn't include Data Hiding|v. Includes Data Hiding|
|vi. Overloading is not possible |vi. Overloading is possible|
|vii. Based on unreal world | vii. Based on real world|
|viii. E.g: C, FORTRAN, Pascal, etc.|viii. E.g: C++, Java, Python, C#, etc.|
<br/>

## 1.3) Characteristics of OOP
### A. Objects 
Objects are variable of member function of a class which are user-defined data type. Objects are the basic runtime entities in a OOP.

    class Sample{
	    char name[20];
	    public:
		    void getdetail(){
			    cin<<name;
			}
    };
    int main(){
	    Sample obj;
	    return 0;
    }
    
 In the code sample above, `obj` is the object of the class `Sample`.
 Programming problem is analyzed in terms of objects and the nature of communication between them.
 
 ### B. Class
 Class is a collection of objects of similar type which are also user-defined data types and behaves like a built-in types of a programming language. Once a class has been defined, we can create any number of objects is similar to the syntax used to create variable in C.
 The syntax to declare a class is given below.
 

    class ClassName{
	    <accessSpecifier>:
		    //data members & member functions
    };

Public private & protected are used as access specifiers and private is the default specifiers if it is not mentioned.

### C. Data Abstraction & Encapsulation
The wrapping up or combining of data and functions into a single unit is known as encapsulation. Those functions which are wrapping in the class can access it but the data are not accessible to outside world. This type of insulation of data from direct access is called data hiding or information hiding.
		  
    class Rectangle{
    public:
	    int length;
	    int breadth;
	    int getArea() {
		    return length * breadth;
	    }
    };
In the above program, the function  `getArea()`  calculates the area of a rectangle. To calculate the area, it needs length and breadth. Hence, the data members (length  and  breadth) and the function  `getArea()`  are kept together in the  `Rectangle`  class.

Data abstraction refers to providing only needed information to the outside world and hiding implementation details. The advantage of abstraction is we can change implementation at any point without affecting users of complex class.


### D. Inheritance
Inheritance is the process by which the objects of one class acquire the properties of objects of another class, It helps to share commo characteristics with the class from which it is derived. 
The concept of inheritance provides the data of reusability. This means that we can add additional features to an existing class without modifying it.

    class Animal {
    // eat() function
    // sleep() function};
    
    class Dog : public Animal {
    // bark() function
    };
    
   Here, the  `Dog`  class is derived from the  `Animal`  class. Since  `Dog`  is derived from  `Animal`, members of  `Animal`  are accessible to  `Dog`.

### E.  Polymorphism (Overloading)
Polymorphism is the ability to make more that one form. Any operation may show different behaviors in different instances.
The  `+`  operator in C++ is used to perform two specific functions. When it is used with numbers (integers and floating-point numbers), it performs addition.

```
int a = 5;
int b = 6;
int sum = a + b;    // sum = 11
```

And when we use the  `+`  operator with strings, it performs string concatenation. For example,

```
string firstName = "abc ";
string lastName = "xyz";

// name = "abc xyz"
string name = firstName + lastName;
```



