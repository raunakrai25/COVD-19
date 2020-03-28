#include<iostream>

using namespace std;

int main(){
    
    int l = 5;

    for(int i=1;i<=l;i++){
        
        if(i==1 || i==l){
            
            for(int a=0;a<3;a++){
                cout << "*";
            }
            
            cout << endl;
            
        }
        else{
            for(int a=0;a<1;a++){
                cout << "*" << " " << "*";
            }
            cout << endl;
        }
        
    }
    
    return 0;
}
