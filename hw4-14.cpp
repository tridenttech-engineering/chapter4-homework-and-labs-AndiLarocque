// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>
  
#include <iostream>
using namespace std;

int main() {

  //variable declaration

  float smallpizzas, mediumpizzas, largepizzas, familypizzas, totalpizzasold;
  
  //enter input items
  cout << "Enter small pizza quanity: "; 
  cin >> smallpizzas; 
  cout << "Enter medium pizza quanity: "; 
  cin >> mediumpizzas; 
  cout << "Enter large pizza quanity: "; 
  cin >> largepizzas; 
  cout << "Enter family pizza quanity: "; 
  cin >> familypizzas;

  //find the total number of pizzas sold
  
  totalpizzasold = smallpizzas + mediumpizzas + largepizzas +familypizzas; 

  //find the percentage of small pizzas sold 

  double percentageofsmallpizzas = (smallpizzas/totalpizzasold)*100; 

  //find the percentage of medium pizzas sold 

  double percentageofmediumpizzas = (mediumpizzas/totalpizzasold)*100; 

  //find the percentage of large pizza sold 

  double percentageoflargepizzas = (largepizzas/totalpizzasold)*100; 

  //find percentage of family pizza sold 

  double percentageoffamilypizzas = (familypizzas/totalpizzasold)*100; 

  
  //display results    
 
cout<<endl<<"Total pizzas sold: "<<totalpizzasold<<endl; 
cout<<"Percentage of small pizzas: "<<percentageofsmallpizzas<<endl;
cout<<"Percentage of medium pizzas sold: "<<percentageofmediumpizzas<<endl; 
cout<<"Percentage of large pizzas sold: "<<percentageoflargepizzas<<endl; 
cout<<"Percentage of family pizzas sold: "<<percentageoffamilypizzas<<endl;
  
  

  
  return 0;
} // end of main function
