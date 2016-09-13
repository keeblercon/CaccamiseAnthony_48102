/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Caccamise, Anthony
 *
 * Created on September 13, 2016, 11:51 AM
 *purpose to see when riverside will get its beachfront property
/
#include <iostream>

using namespace std;

 
/*
 * 
 */
const float convmmft= 304.8;//conversion millimeters to feet from google
const float convmm= 1000.0f
int main(int argc, char** argv) {
    float waterlev = 1.5f //water level goes up 1.5mm per year
    int nyear1=5,nyear2=7,nyear3=10//years to calculate rise
    float  rise1,rise2,rise3;//solutions for the 3 years from above
    int nyrbch;//number of years before your home is beach front property
    float elevriv=860;//elevation of riverside in feet according to wikipedia
    
    
    //process values _> map inputs to outputs
    rise1=rate*nyear1;
    rise2=rate*nyear2;
    rise3=rate*nyear3;
    nyrbch=elevriv/rate*convmmft;
    
    //display output
    cout<<"the rate of sea level rise = "<<rate<<"mm/year"<<endl;
    cout<<"after "<<nyear1<<" years the sea will rise "<<rise<<"mm"<<endl;
    cout<<"after "<<nyear2<<" years the sea will rise "<<rise<<"mm"<<endl;
    cout<<"after "<<nyear3<<" years the sea will rise "<<rise<<"mm"<<endl;
    cout<<"at this rate riverside citizens will own beach frot properties for "<<nyrbch << "years" <<endl;  
    cout<<nyrbch<<
    
    return 0;
    
}



