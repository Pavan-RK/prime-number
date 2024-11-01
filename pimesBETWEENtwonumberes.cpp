#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int a,b;

    cin>> a>>b;
    int x;
    int i;
    for( i= a+1 ; i<b ; i++){

        for( x=2; x<i; x++){
            if(i%x==0){
                break;
            }
            
        }

        if( x==i){
            cout<< i << " is a prime number"<<endl;
        
            
        }
    }
      
 
    return 0;
}

