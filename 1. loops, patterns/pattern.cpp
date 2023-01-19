
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space = i-1;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        int j = n-i+1;
        while(j>0){
            cout<<"*";
            j=j-1;

        }
        cout<<endl;
        i=i+1;

    }
}
