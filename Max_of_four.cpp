#include <iostream>

using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a,int b,int c,int d){
    if(a>b && a>c &&a>d){
        return a;
    }
     else if(b>a && b>c &&b>d){
        return b;
    }
    else if(c>b && c>a &&c>d){
        return c;
    }
    else{
        return d;
    }
}
int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
  cout<<"The max of four is"<<ans<<endl;
    
    return 0;
}