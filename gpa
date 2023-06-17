#include <iostream>
#include <stdlib.h>

using namespace std;

void calculateGPA();
void calculateCGPA();
void method();

int main(){

    system("cls");
    int input;
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"                    GPA & CGPA Calculator (Developed by Ohid)             "<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
    cout<<"            MENU:"<<endl;
    cout<<"                   1. Calculate GPA (Grade Point Average)"<<endl;
    cout<<"                   2. Calculate CGPA (Cummulative Grade Point Average)"<<endl;
    cout<<"                   3. Method that is applied here for calclating GPA & CGPA"<<endl;
    cout<<"                   4. Exit Application"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;

    sub:
    cout<<"Enter your choise: ";
    cin>>input;
    
    switch(input){
        case 1:
            calculateGPA();
            break;
        case 2:
            calculateCGPA();
            break;
        case 3:
            method();
            break;
        case 4:
            exit(EXIT_SUCCESS);
            break;
        default:
            cout<<"you have entered wrong input.Try Again \n";
            goto sub;
            break;

    }



}
