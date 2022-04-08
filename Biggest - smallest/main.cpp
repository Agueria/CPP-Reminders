#include <iostream>
using namespace std;

    int f (int *a, int size) {
        
        int big= a[0]; // first we'll give both of them 0
        int small=a[0];
        
        for (int i=0; i< size; i++) {
            //then we compare it so that we can update its largest and additional values
            
            if (big<a[i]) {
                big=a[i];
                }
            if (small>a[i]) {
                small=a[i];
                }
            }
        return big-small;
        }

     int main() {
     int a[9] = {1,2,8,45,6,-2,7,52,1};
     cout << "difference: " << f(a,9) << endl;
    
}
