#include <iostream>
using namespace std;


int main()
{
    cout << "get matrix transpose" << endl;
    
    int a[3][3]= {5,4,3,4,0,4,7,10,3};
    
    //to print the original matrix
    for(int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            
            cout << " " << a[i][j];
            }
        cout << endl;
        }
    
    //nested for loop where the transpose is done
    
     // int b[3][3];
     for(int i=0;i<3;i++) {
        for (int j=i+1;j<3;j++) {
            int g= a[j][i];
            a[j][i]=a[i][j];
            a[i][j]=g;
            }
        }
    cout << endl;//to ensure that there is no space between the two matrices
    cout << endl;
    cout << endl;
    
    //we print the transposed matrix
    
      for(int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            
            cout << " " << a[i][j];
            }
        cout << endl;
        }
   
    return 0;
}
