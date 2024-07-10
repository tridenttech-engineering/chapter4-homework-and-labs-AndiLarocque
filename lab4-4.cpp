//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;
int main()
{ 
  //declare named constant and variables
  
  double height   = 0.0; // moved outside of the main function
  double radius   = 0.0; 
  double volume   = 0.0; 
  double PI = 3.14; 
  
  //enter input items
cout << "Height: ";
cin >> height;
cout << "Radius: ";
cin >> radius;

  //calculate and display the volume
volume = PI * radius * radius * height;
cout << volume << endl;
  
return 0;

} //end of main function
 


  
  
  
