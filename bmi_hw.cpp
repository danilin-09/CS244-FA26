#include <iostream>
#include <cmath>

using namespace std;

int main(){
    bool start = true;
    do {
        int weight, height
        cout << "Please give your weight in pounds \n";
        cin >> weight;
        cout << "Please give your height in inches \n";
        cin >> height;
        double bmi = 703 * (weight * (height^2));

        string bmi_type;
        if (bmi < 18){
            bmi_type = "underweight";
        }else if(bmi > 18 && bmi < 24){
            bmi_type = "normal";
        }else if(bmi > 24 && bmi < 30){
            bmi_type = "overweight";
        }else if(bmi > 30){
            bmi_type = "obese";
        }

        cout << "Your BMI is " << bmi << ", whcih classifies you as being " << bmi_type; 

        char continue_choice;
        cout << "Do you want to calculate another BMI? (Y/N)" << endl;
        cin >> continue_choice;
        if (continue_choice = 'Y'){
            start = false;
            break;
        }else if(continue_choice = 'N'){
            start = true;
        }
    } while(start = true);

    return 0;
}