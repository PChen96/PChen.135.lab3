/*
Author: Phillip Chen
Course: {135,136}
Instructor: <Alex Nikolaev
Assignment: Lab 3 task A

Input 2 numbers for height and weight. The program will then use loop code to print out a 
hallow rectangle based on the measurements you input.
*/
#include <iostream>
using namespace std;

int main(){

int w = 0;
int h = 0;

do{
	cout<<"Input weight: ";
	cin>>w;
	}while(w<=0);

do{
	cout<<"Input height: ";
	cin>>h;
	}while(h<=0);

for (int i=0; i<w;i++){		//this make the top of the square
	cout<<"*";}
	
cout<<endl;					//this makes the print start at the next line

for(int i=0;i<(h-2);i++){		//if the height is greater than 1 then it prints more
	cout<<"*";
	for(int a=0;a<(w-2);a++){
		cout<<" ";
		}
	cout<<"*"<<endl;
	}
	
for (int i=0; i<w;i++){		//this make the bottom of the square
	cout<<"*";}

cout<<endl;	
}

