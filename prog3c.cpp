/*
Author: Phillip Chen
Course: {135,136}
Instructor: <Alex Nikolaev
Assignment: Lab 3 task c

Ask for 2 inputs. Then creates a trapeoid with width as a base 
and growings rows above depending on the your height input.
*/

#include <iostream>
using namespace std;

int main(){

int w = 0;
int h = 0;

do{
	cout<<"Input width: ";
	cin>>w;
	}while(w<=0);

do{
	cout<<"Input height: ";
	cin>>h;
	}while(h<=0);

for(int i=0; i<h;i++){				//sets the boundary of how many rows 
	for(int a=0;a<=(w-h)+i;a++){	//constructs the pattern for trapeoid
	cout<<"*";}
	cout<<endl;
	}
}
