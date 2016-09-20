/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: caccamise, anthony
 *
 * Created on September 20, 2016, 11:24 AM
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

//global constants
  const float MAXRAND=pow(2,31)-1;//max signed positive value for int

int main(int argc, char** argv) {
// set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //declaration of variables
    float n,guess,r;
   float scale=90,shift=10; 
   short counter=0;
    //input values-float random number (10,100)
   //               integer random number rand()%scale+shift 
    n=rand()/MAXRAND*scale+shift;
    guess=n/2;
    
    //display the initialization
    cout<<"the number to find the square root of = "<<n<<endl;
    cout<<"the initial guess = "<<guess<<endl;
    
    r=n/guess;
    guess=(guess+r)/2;
    
    //display output
    cout<<fixed<<showpoint<<setprecision(4);
    cout<<"pass"<<counter<<" [r,guess]=["<<setw(7)<<r<<","<<guess<<"]"<<endl
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    
    //second pass
     r=n/guess;
    guess=(guess+r)/2;
    
    //display output
    cout<<fixed<<showpoint<<setprecision(4);
    cout<<"pass"<<counter<<" [r,guess]=["<<setw(7)<<r<<","<<guess<<"]"<<endl
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    
    //third pass
     r=n/guess;
    guess=(guess+r)/2;
    
    //display output
    cout<<fixed<<showpoint<<setprecision(4);
    cout<<"pass"<<counter<<" [r,guess]=["<<setw(7)<<r<<","<<guess<<"]"<<endl
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //next pass
     r=n/guess;
    guess=(guess+r)/2;
    
    //display output
    cout<<fixed<<showpoint<<setprecision(4);
    cout<<"pass"<<counter<<" [r,guess]=["<<setw(7)<<r<<","<<guess<<"]"<<endl
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    
    //next pass
     r=n/guess;
    guess=(guess+r)/2;
    
    //display output
    cout<<fixed<<showpoint<<setprecision(4);
    cout<<"pass"<<counter<<" [r,guess]=["<<setw(7)<<r<<","<<guess<<"]"<<endl
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //next pass
     r=n/guess;
    guess=(guess+r)/2;
    
    //display output
    cout<<fixed<<showpoint<<setprecision(4);
    cout<<"pass"<<counter<<" [r,guess]=["<<setw(7)<<r<<","<<guess<<"]"<<endl
            <<","<<setw(7)<<guess<<"]"<<endl;
    //the answer or solution is
    cout<<"the answer of sqrt("<<n<<")"<<sqrt (n)<<endl;    return 0;
}

