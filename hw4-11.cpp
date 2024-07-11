// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
 
  //declare name and constant variables
  double beginningbalance = 0.0;
  double totaldeposits = 0.0;
  double totalwithdraws = 0.0;
  double accountbalance = 0.0; 
  double totalbalance = 0.0;
  
  //enter input items
  cout << "Enter the beginning balance: "; 
  cin >> beginningbalance; 
  cout << "Enter the total deposits: "; 
  cin >> totaldeposits;
cout << "Enter the total withdraws: "; 
  cin >> totalwithdraws; 
  
  //calculate and display 
  totalbalance = beginningbalance + totaldeposits; 
  accountbalance = totalbalance - totalwithdraws; 
  cout << accountbalance << endl; 
  
  return 0;
} // end of main function
