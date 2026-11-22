#include <iostream>
using namespace std;
int main() {
     double temp = 0;
     
    while(temp != -1){
        
    
    cout<<"Enter a temperature value: ";
     cin>> temp;
    if(temp == -1){
        break;
    }
    
     if(temp > 30) {
     cout<<"ALERT: too hot"<< endl;
     } else if (temp < 10) {
         cout<<"Too cold" << endl;
     } else {
         cout<<"Normal" << endl;
     }
   }  
    return 0;
}
