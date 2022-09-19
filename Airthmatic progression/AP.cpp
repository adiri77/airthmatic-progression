#include<iostream>
using namespace std;
int ap(int n){
    int ap=(3*n)+1;
    return ap;
}
int main(){
    int n;
    cout<<"ENTER n"<<" ";
    cin>>n;
    cout<<"Nth term of AP is"<<" "<<ap(n);
    return 0;
}