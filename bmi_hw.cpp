#include <iostream>
#include <cmath>
//this program calculates the user's BMI
using namespace std;

int main(){
    bool start = true;

    while(start == true){
        double weight, height, bmi;
        cout << "Please give your weight in pounds \n";
        cin >> weight;
        cout << "Please give your height in inches \n";
        cin >> height;
        bmi = 703 * (weight / (height*height));

        string bmi_type;
        if (bmi <= 18){
            bmi_type = "underweight";
        }else if(bmi > 18 && bmi < 24){
            bmi_type = "normal";
        }else if(bmi > 24 && bmi < 30){
            bmi_type = "overweight";
        }else if(bmi >= 30){
            bmi_type = "obese";
        }

        cout << "Your BMI is " << bmi << ", which classifies you as being " << bmi_type << endl; 
    
        char continue_choice;
        cout << "Do you want to calculate another BMI? (Y/N)" << endl;
        cin >> continue_choice;
        if (continue_choice == 'N'){
            start = false;
            break;  
        }else if(continue_choice == 'Y'){
            start = true;
        }
    }
    cout << "Thank you for using the BMI calculator." << endl;
    return 0;
}