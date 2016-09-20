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
    float tank,city,highway,distancec,distanceh; // integers with range (- 32768, 32767) or [-2^15,2^15-1]
    // Initialize or input values
    tank = 20;
   city = 23.5;
    highway =28.9;
    
    //Process the input by mapping to the output
    distancec = tank*city;
    distanceh = tank*highway;
    
    //Display Information
    cout<<"mgp city"<<endl;
    cout<<tank<<" * "<<city<<" = "<<distancec<<endl;
    cout<<"mpg highway"<<endl;
    cout<<tank<<" * "<<highway<<" = "<<distanceh<<endl;
    return 0;
}

