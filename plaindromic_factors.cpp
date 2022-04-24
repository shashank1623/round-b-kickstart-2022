#include <iostream>
#include <stdlib.h>
using namespace std;


//test-set1 only accepted

bool isPalindrome(long long int num)
{   int n=num;
    long long int rev = 0;
    while (num!=0) {
        int last_digit = num %10;
        rev = rev * 10 + last_digit;
        num = num / 10;
    }
    if (rev== n)
        return true;
    return false;
}

int main(){
    int t;
    cin>>t;
    int Case = 1;
    while(t--){
        
        long long int num;
        cin>>num;
        int count=0;
        for(long long int i = 1; i <= num; ++i) {
        if(num % i == 0)
            if(isPalindrome(i)==true){
                count++;
            }
        }
        cout<<"Case #"<<Case<<": "<<count<<endl;
        Case++;
    }
}
