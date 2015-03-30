#include<iostream>
#include<fstream>
#include"BMI.h"
#include<string>
using namespace std;
int main(){
	ifstream inFile("file.in",ios::in);
	double reheight,remass;
	ofstream outfile("file.out",ios::out);		//open a file for output
	double tall,b;
	BMI bmi;	
	while(inFile>>reheight>>remass){
		if(reheight!=0&&remass!=0){		//avoid if the value is zero
		   bmi.set_height(reheight);
		   bmi.set_mass(remass);
		   outfile<<bmi.BMIvalue()<<"\t"
			  <<bmi.category(bmi.BMIvalue())//input the value of BMIvalue function
			  <<endl;
		}
        }
return 0;
}
