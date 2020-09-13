#include <iostream>
using namespace std;

int main(int argc, char** argv){
    cout<<endl;
    
    for(int i = 0; i< argc; i++){
        cout<< "palabra: " << argv[i]<< endl;
        cout<<"Hola mundo"<<endl;

    }
    
    return 0;
}