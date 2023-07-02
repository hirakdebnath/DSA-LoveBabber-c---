#include <iostream>
using namespace std;
int fac(int i){
    if(i==0) return 1;

return fac(i-1)*i;
}
int main(){
    int i=5;
    int ans=fac(i);
    cout<<ans<<endl;
    return 0;
}