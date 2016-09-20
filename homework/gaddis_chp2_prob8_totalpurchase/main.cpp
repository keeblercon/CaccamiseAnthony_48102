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
    float a,b,c,d,e,f; // integers with range (- 32768, 32767) or [-2^15,2^15-1]
    // Initialize or input values
    a=15.95;
    b=24.95;
    c=6.95;
    d=12.95;
    e=3.95;
   
            
    //Process the input by mapping to the output
    f=a+b+c+d+e;
    
    //Display Information
    cout<<"Hello World -> First Program "<<endl;
    cout<<a<<" + "<<b<<" + "<<c<<" + "<<d<<" + "<<e<<" = "<<f<<endl;
    return 0;
}

