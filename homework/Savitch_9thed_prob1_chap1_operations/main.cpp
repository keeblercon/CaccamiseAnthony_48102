/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 13, 2016, 10:47 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
int op1,op2;

//input values
cout<<"input 2 integer values to add,sub.multi,div,mod"<<endl;
cin >>op1>>op2;


//display outputs
cout<<op1+op2<<"="<<op1<<"+"<<op2<<endl;
cout<<op1+op2<<"="<<op1<<"-"<<op2<<endl;
cout<<op1+op2<<"="<<op1<<"*"<<op2<<endl;
cout<<op1+op2<<"="<<op1<<"/"<<op2<<endl;
cout<<op1+op2<<"="<<op1<<"%"<<op2<<endl;
    return 0;
}

