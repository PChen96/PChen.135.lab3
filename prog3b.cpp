/*
Author: Phillip Chen
Course: {135,136}
Instructor: <Alex Nikolaev
Assignment: Lab 3 task B

Ask for 1 input. Then prints out a right triangle with input as height
*/

#include <iostream>
using namespace std;

int main(){

int s=0;
do{
	cout<<"Input side length: ";
	cin>>s;}while(s<=0);

for(int i=0;i<s;i++){
	for(int a=-1;i>a ;a++){
	cout<<"*";}
	cout<<endl;}
}
