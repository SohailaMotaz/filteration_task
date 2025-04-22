#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n, m;
    cin >> n >> m;
    
   
    for(int i = n+1; i <= m; i++) {
        bool prime = true;
        for(int j = 2; j<=sqrt(i); j++) {
           if(i%j==0){
            prime = false;
            break;
           }
           
        }
        if (prime) {
            cout << i << " ";
        }
        
        
    }
}
