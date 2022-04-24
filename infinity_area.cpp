#include <bits/stdc++.h>
using namespace std;

int main(){
  int t,x=1;
  cin>>t;
  while(t--){
      double pi=2*acos(0.0);
      int i=0,r,a,b;
    cin>>r>>a>>b;
    double p=pi*r*r;
    while(r>0){
        
        r=r*a;
            
         p+=(pi*r*r);
        
            r=r/b;
        
        p+=(pi*r*r);
        i++;
        
    }

cout<<"Case #"<<x++<<": "<<fixed<<setprecision(6)<<p<<endl;

  }
    return 0;
}
