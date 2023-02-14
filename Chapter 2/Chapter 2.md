# Chapter 2: Basics of C++

## 2.1) Namespace

Namespace defines a scope for the identifiers that are used in a program. Namespace are used to organize code into logical groups and to prevent name collisions that can occur especially when the codebase includes multiple libraries.
```
#include <iostream>
using namespace std;

namespace first{
	void showinfo(){
		cout<<"First Namespace"<<endl;
	}	
}

namespace second{
	void showinfo(){
		cout<<"Second Namespace"<<endl;
	}
}

int main(){
	first::showinfo();
	second::showinfo();
	return 0;
}	

```
In the above program, `namespace` helps to differentiate same function used in two different libraries.

  

## 2.2) Manipulators

Manipulators are operators that are used to format the data display. The most commonly used manipulators are `endl` and `setw`
- `endl`: The `endl` manipulator works same as the `/n` in C. It is used to add a new line in the code or to end the line.
- `setw`: The `setw` manipulator helps to shift the output rightwards according to the input given to it.
	E.g: `cout<<setw(50)<<"Hi";`
	
	The manipulator `setw(50)` will right shift the "Hi" 50 spaces to the right.

## 2.3) Function Overloading
Two or more functions having same name but different arguments are known as overloaded functions and this mechanism is known as Function Overloading.

    #include <iostream>
    using namespace std;
    
    // function that calculates the area of a rectangle
    double area(double length, double width) {
        return length * width;
    }
    // overloaded function that calculates the area of a circle
    double area(double radius) {
        return 3.14159 * radius * radius;
    }
    
    
    
    int main() {
        double l = 5.0;
        double w = 2.0;
        double r = 3.0;
        double rect_area = area(l, w);
        double circle_area = area(r);
    
        cout << "Area of rectangle: " << rect_area << endl;
        cout << "Area of circle: " << circle_area << endl;
    
        return 0;
        }

## 2.4) Scope Resolution Operator
The scope resolution operator in C++ is represented by two colons `::` and is used to explicitly qualify a name or identifier with a particular namespace or class.

It allows you to access variables, functions, and other identifiers that are defined in a different namespace or class, or in the global scope.

For example, if you have two functions with the same name, but one is defined in the global scope and the other is defined in a namespace, you can use scope operator as shown in eg 2.1.

## 2.5) Inline Function
Inline functions are a C++ enhancement feature to increase the execution time of a program. Function can be made inline so that compiler can replace those function definition wherever those are being called.
It is only used where there are only small functions. It is not applicable for big functions. If a function is big then the compiler ignores the `inline` request and treats it like a normal function. 
Syntax:

    inline return_type function_name(parameters){
    	//Function code here
    }
E.g:

```
#include <iostream>
using namespace std;

inline int cube(int s){
	return s*s*s;
}

int main(){
	int s = 4
	cout<<s<<"^3 = "<<cube(s);
	return 0;	
}
```
