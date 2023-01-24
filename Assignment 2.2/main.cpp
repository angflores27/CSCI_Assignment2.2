//  Assignment 2.2
//  Angela Flores Figueroa
//  CSCI 40 Fall 2022
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string majorYear;
    
    cout<<"Please enter the student code for major and year:"<<endl;
    cin>>majorYear;
    
    // will check the status code is only two characters long
    if(majorYear.length()!=2){
        cout<<"Invalid input!"<<endl;
    }
    
    //moving on to check first character
    else {
    
        //checking for M
        if (majorYear.at(0)=='M'){
            switch (majorYear.at(1)){
                case '1':
                    cout<< "Mathematics Freshman" <<endl;
                    break;
                    
                case '2':
                    cout<< "Mathematics Sophmore" <<endl;
                    break;
                    
                case '3':
                    cout<< "Mathematics Junior" <<endl;
                    break;
                    
                case '4':
                    cout<< "Mathematics Senior" <<endl;
                    
                default:
                cout<< "Invalid input!" <<endl; }}
            
        //Checking for C
            else if (majorYear.at(0)=='C'){
                switch (majorYear.at(1)){
                    case '1':
                        cout<< "Computer Science Freshman" <<endl;
                        break;
                        
                    case '2':
                        cout<< "Computer Science Sophmore" <<endl;
                        break;
                        
                    case '3':
                        cout<< "Computer Science Junior" <<endl;
                        break;
                        
                    case '4':
                        cout<< "Computer Science Senior" <<endl;
                        
                    default:
                    cout<< "Invalid input!" <<endl; }}
        //Checking for I
            else if (majorYear.at(0)=='I'){
                switch (majorYear.at(1)){
                    case '1':
                        cout<< "Information Technology Freshman" <<endl;
                        break;
                        
                    case '2':
                        cout<< "Information Technology Sophmore" <<endl;
                        break;
                        
                    case '3':
                        cout<< "Information Technology Junior" <<endl;
                        break;
                        
                    case '4':
                        cout<< "Information Technology Senior" <<endl;
                        
                    default:
                        cout<< "Invalid input!" <<endl; }}
        
        //Checking for others
            else {
                cout<<"Invalid Input!"<<endl;
            }
    }
    return 0;
}
