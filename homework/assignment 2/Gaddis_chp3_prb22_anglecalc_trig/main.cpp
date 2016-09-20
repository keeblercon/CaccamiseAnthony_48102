/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Caccamise, anthony
 *
 * Created on September 20th, 2016, 12:11 PM
 *purpose to find the angle
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//global constants
const float PI=4*atan(1.0);
const float CNVDEGR=PI/180;

int main(int argc, char** argv) {
    float deg,radians;
    
    
    //input values
    deg=5;
    radians=deg*CNVDEGR;
    
    //display output
    cout<<"[degrees ,radians ,sine   ,cosine ,tanget  ]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians 
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    
    
    //input values
    deg+=5;
    radians=deg*CNVDEGR;
    
    //display output
    
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians 
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    
    
    //input values
    deg+=5;
    radians=deg*CNVDEGR;
    
    //display output
    
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians 
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
            
    //input values
    deg+=5;
    radians=deg*CNVDEGR;
    
    //display output
    
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians 
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    
    //input values
    deg+=5;
    radians=deg*CNVDEGR;
    
    //display output
    
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians 
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    
    
    //input values
    deg+=5;
    radians=deg*CNVDEGR;
    
    //display output
    
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians 
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    
    
    //input values
    deg+=5;
    radians=deg*CNVDEGR;
    
    //display output
    
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians 
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
           
  return 0;
}

