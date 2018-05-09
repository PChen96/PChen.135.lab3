/*
Author: Phillip Chen
Course: {135,136}
Instructor: <Alex Nikolaev
Assignment: Lab 3 task d

Ask for 1 input and outputs a right triangle with it's right located at the top right
of print screen
*/

#include <iostream>
using namespace std;

int main(){

int s = 0;
do{
	cout<<"Input side length: ";
	cin>>s;}while(s<=0);

for (int i=0; i<s;i++){			//how many rows repeated
	int b=0; b++;				//another counter
	for(int a=1; a-i<b;a++){	//fills in the spaces in rows
		cout<<" ";}
	for(int c=0; c+i<s;c++){	//fills in the * in rows
		cout<<"*";}
	cout<<endl;
	}
}
