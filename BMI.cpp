#include"BMI.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void BMI::set_height(double reheight){
	  if(reheight>0){
	  height=reheight;
	  }
}
void BMI::set_mass(double remass){
	  if(remass>0){
	  mass=remass;
	  }
}
double BMI::get_height(){
	return height;
} 
double BMI::get_mass(){
	return mass;
}
double BMI::BMIvalue(){					//count BMI
	double bmi;
	double tall;
	tall= height/100;
	bmi=mass/(tall*tall);
	return bmi;
}
string BMI::category(double bmi){			//return the category of BMI
	if(bmi>=0&&bmi<15)
                return"very severely underweight";
        else if(bmi>=15&&bmi<16)
                return"Severely underweight";
        else if(bmi>=16&&bmi<18)
                return"Under weight";
        else if(bmi>=18&&bmi<25)
                return"Normal";
        else if(bmi>=25&&bmi<30)
                return"Overweight";
        else if(bmi>=30&&bmi<35)
                return"Obese Class I(Moderately obese)";
        else if(bmi>=35&&bmi<40)
                return"Obese Class II(Severely obese)";
        else if(bmi>=40&&bmi<100)
                return"Obese Class III(Very severely obese)";
       // else if(bmi<0)
         //       break;
        cout<<"?";
}


                 



