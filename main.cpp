//Per Gaddis 9th Edition 
//Edits by Sterling Swanson 
//Student Name: Date 10-25-2022
#include <iostream>
using namespace std; 

//class declaration
class Rectangle
{
  private:
    double width;
    double length;
  public:        //function prototypes for the member functions 
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};
//function definitions for each of our member functions 
void Rectangle::setWidth(double w)
{
  width = w; 
}

void Rectangle::setLength(double l)
{
  length = l; 
}

double Rectangle::getWidth() const
{
  return width; //return the private attribute, width
}

double Rectangle::getLength() const
{
  return length; //return the private attribute, length
}

double Rectangle::getArea() const
{
  return (length * width);
}
class Trapeziod
{
private:
 double sideA;
 double sideB;
 double height;

public:
 void setSideA(double);
 void setSideB(double);
 void setHeight(double);
 double getSideA() const;
 double getSideB() const;
 double getHeight() const;
 double getArea() const;

};
//functions
void Trapeziod::setSideA(double sA)
{
  sideA = sA;  // set the private member, sideA equal to sA
}
void Trapeziod::setSideB(double sB)
{
  sideB = sB; 
}
void Trapeziod::setHeight(double h)

{
  height = h;
}
double Trapeziod::getSideA() const
{
  return sideA; //return the private attribute, width
}

double Trapeziod::getSideB() const
{
  return sideB; //return the private attribute, length
}
double Trapeziod::getHeight() const
{
  return height;
}
double Trapeziod::getArea() const
{
return (( (sideA + sideB)/2.0) *height);
}
int main() 
{
  Rectangle r;  //r is an instance of the class Rectangle, an object
  r.setWidth(5.2); //set the private member with to 5.2 via the public setter
  cout << r.getWidth()<< endl; //print the current value of the private width

  //Dr_T Challenge 1 set the r's length to 7.8
  r.setLength(7.8); 

  //print the length on screen
  cout << r.getLength() << endl; 

  //print the statment on screen (use) getArea here
  cout << "\nThe area of a Rectangle with width="
       << r.getWidth() << " and length=" 
       << r. getLength() << " is " 
       << r.getArea() << endl;  
  
  Rectangle h;
  h.setWidth(22.5);
  cout << h.getWidth() << endl;
  h.setLength(15.7);
  cout << h.getLength() << endl;
  cout << "\nThe area of a Rectangle with width="
       << h.getWidth() << " and length=" 
       << h. getLength() << " is " 
       << h.getArea() << endl;

  Trapeziod e;
  e.setSideA(44);
  cout << e.getSideA() << endl;
  e.setSideB(23);
  cout << e.getSideB() << endl;
  e.setHeight(33);
  cout << e.getHeight() << endl;
  cout << "\nThe area of a Trapeziod with Side A is ="
       << e.getSideA() << " and side B "
       << e. getSideB() << " and height is " 
       << e. getHeight() << "The Area is "
       << e.getArea() << endl;
  
    
  
  
  
    
  
  /*
    A rectangle with with w = (getter) and len = (getter) 
    has an area of (use r.getArea())
    //upload the share URL to extra credit item 15
  */
  return 0;   
}