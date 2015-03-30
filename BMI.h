#include<string>
#include<iostream>
#include<unistd.h>
#ifndef BMI_H
#define BMI_H
using namespace std;

class BMI{
	public:
	  void set_height(double);
	  void set_mass(double);
	  double get_height();
	  double get_mass();
	  double BMIvalue();
	  string category(double);
	private:
	  double height;
	  double mass;
}; 
#endif

