#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "Palindrome" << endl;
    cout << "Your word: " << endl;
    
    char c[100]; //Reserved a size of 100 characters
    cin >> c;
    
    char *p,*q;
    p=c; //for the string to start from the beginning
    q=c; /* we will assign a while loop to start from the very end of the string and
     * ask it to proceed until we see the end of string code. 
	 * So the pointer q will start from the end of the word */
     
while(*q!='\0') { //Use pointers because we need to look at the value where q is pointing.
        q++;
        }
    q--; //get a return because the last element is \0
    
    bool palindrome=true; //at first we accept all words palindrome
    
    while (q>p) { //when p and q are not equal (when they do not meet in the middle)
        
        if(*p!=*q) { //they are pointers because we want to compare the values there
        palindrome=false; //we return false if we find even one different element
        }
        p++; //to switch to other letters
        q--;
        }
    //to display the results on the screen.
    if (palindrome) 
        cout << "the entered word is a palindrome" << endl;
    else 
        cout << "the entered word is not a palindrome" << endl;
}
