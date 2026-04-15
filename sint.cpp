 #include<iostream>
 using namespace std;
 int main()
 {
    int p,r,t,si;
    cout<<"enter principle amount ";
    cin>>p;
    cout<<"enter rate";
    cin>>r;
    cout<<"enter time";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"simple interest = " <<si;
 }