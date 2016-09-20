/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Caccamise, Anthony
 * Created on August 30, 2016, 11:43 AM
 * Purpose: First Program Hello World
 */
//System Libraries 
#include <iostream>

using namespace std; //most system libraries under the standard name

/*user libraries
 * Global Constants
 * Function Prototypes
 * Execution BeginsHere!
 */
int main(int argc, char** argv) {
// Declare variables
    short a,b,c; // integers with range (- 32768, 32767) or [-2^15,2^15-1]
    // Initialize or input values
    a=100;
    b=50;
    
    //Process the input by mapping to the output
    c=a+b;
    
    //Display Information
  
    cout<<a<<" + "<<b<<" = "<<c<<endl;
    return 0;
}

