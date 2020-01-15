
 // Title: palindrome.cpp
 //Abstract: Write a C++ program “palindrome.cpp” that reads a string of characters from user and determines if the string is a palindrome or not.  For the program, you should store each character of the string in an array (use dynamic memory to create array(s)) and follow the algorithm described in the lecture.
 //Author: Mark Mariscal
 //ID: 7198
 //Date: 01/14/2020



#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    
    
    string entry;
    char *input; //allocated array 
    int length;
    int flag=0;

    cout << "Enter a string: "; cin >> entry;// user input

    //input is initialized with the length of the string
    input = new (nothrow) char[entry.length()];
    
    //stringcopy(input and convert to character
    strcpy(input, entry.c_str());
    
    //the input of the string 
    length = strlen(input);
    
    
    //going through the length of the string and comparing the front of the string to the back of the string
    for(int i=0; i < length ;i++){
        //if the front of string does not equal the end of the string -1. the front of the array does not equal the back of the array so if it is 7 charcters in 4 and will check then go one more and stop.
        if(input[i] != input[length-i-1]){
            // return false then break into the if statement is not true.
            flag = 1;
            break;
        }
        if(i > (length - i - 1)) {
            break;
        }

    }

    if (flag) {
        cout << input << " is not a palindrome" << endl;

    }
    else {
        cout << input << " is a palindrome" << endl;

    }
    delete[] input; //deletes array
    return 0;
}