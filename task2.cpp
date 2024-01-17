#include<iostream>
using namespace std;
float sum(int a,int b){
    return a+b;
}
float sub(int a,int b){
    return a-b;
}
float mul(int a,int b){
    return a*b;
}
float divide(int a,int b){
    return a/b;
}

int main(){
    cout<<"Enter two numbers: ";
    float a,b;
    cin>>a>>b;
    cout<<"for sum press 1\nfor sub press 2\nfor mul press 3\nfor divide press 4\n";
    int choice;
    cin>>choice;
    switch(choice){
        case 1:
            cout<<sum(a,b);
            break;
        case 2:
            cout<<sub(a,b);
            break;
        case 3:
            cout<<mul(a,b);
            break;
        case 4:
            cout<<divide(a,b);
            break;
        default:
            cout<<"Invalid choice";
    }
    

}