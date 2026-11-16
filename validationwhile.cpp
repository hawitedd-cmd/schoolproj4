//====================================
//ACTIVITY 3A:INPUT VALIDATION WITH WHILE LOOP
//====================================
//Learning outcome:Evaluate while vs do-while for validation
//====================================
//Include the input/output library
#include <iostream>
//Use the standard namespace
using namespace std;
//The main fuction
int main()
{
    //Declare a variable to hold the user input
    int number;
    //Display a prompt for a positive number
    cout << "Please enter a positive number: ";
    //Read the first input from the user BEFORE executing the
    //this is neccesary because the while loop checks the condition first 
    cin >> number;
    //While loop:checks condition BEFORE executing the body
    //If the user entered a valid number (positive),the loop never runs 
    //if the user entered a invalid number,the loop repeats 
    while(number<=0){
        //Display an error message 
        cout << "Invalid! please enter positive number: ";
        //Read a new input from the user
        cin >> number;
    }//END OF WHILE LOOP-condition is re-checked 
    //This line runs only when a valid number is entered 
    cout << "You entered: " << number << endl;
    //return 0 to signal successful completion 
    return 0;
}

