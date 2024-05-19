//Size  
//Base Price   
//Price per Toppings 
//S	$4.99	$0.75
//M	$5.99	$1.50
//L	$6.99	$2.25


#include <iostream>

using namespace std;
 
int main () {
   
   char option;
   double small = 0;
   double medium = 0;
   double large = 0;

cout << "What size pizza would you like to order?" << endl;

   cin >> option;

   double t1 = 0;  //# of toppings
double t2 = 0;
double t3 = 0;


   switch(option) {
      case 'S' :
         cout << "How many toppings do you want?" << endl; 
          small = 4.99;
          t1 = 0.75;            
          t2 = 1.50;
          t3 = 2.25;
         break;
    
      case 'M' :
         cout << "How many toppings do you want?" << endl;
          medium = 5.99;
           t1 = 1.50;            
          t2 = 3.00;
          t3 = 4.50;
         break;
      case 'L' :
         cout << "How many toppings do you want?" << endl;
           large = 6.99;
            t1 = 2.25;           
          t2 = 4.50;
          t3 = 6.75;
     
         break;
         case 'T' :
         cout << "Please enter a valid input" << endl;
    
         break;
      }


char option2;
  


cin >> option2;
      switch(option2) {
     case '0' :
         cout << "Your total is $" << small + medium + large << endl; 
         break;
      case '1' :
         cout << "Your total is $" << small + medium + large + t1 << endl; 
         break;
    
      case '2' :
         cout << "Your total is $" << small + medium + large + t2<< endl;
         break;
      case '3' :
      cout << "Your total is $" << small + medium + large + t3 << endl;
         break;
        //  case '2' :
         //cout << "Please enter a valid input" << endl;
    
         break;
      }
   
 
   return 0;
}