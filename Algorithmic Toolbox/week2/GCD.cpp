#include <iostream>
using namespace std;
long GCD(long , long );
int main(){
    long a,b;
    cin>>a>>b;
    cout<< GCD(a,b) << endl;
}
long GCD(long a, long b){
    if (b==0) return a;
    return GCD(b,(a%b));
}
