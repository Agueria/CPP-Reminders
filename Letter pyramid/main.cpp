#include <iostream>
using namespace std;
int main()
{
    //creating a pyramid of letters
    char c;
    cout << "Please enter a capital letter: " << endl;
    cin>>c;
    for ( int i=c-65; i<=26; i++)
        {
         for (int j=c-65; j<=i; j++)
             {
               cout << (char)(j+65) ;
             }        
         for (int j=i-1;j>=0;j--)
             {
             cout << (char)(j+65) ;
             }
             cout << endl;
        }
    
    return 0;
}
