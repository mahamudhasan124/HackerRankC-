#include<bits/stdc++.h>
using namespace std;



int main() {
    int str[5],i,big;
    for(i=1;i<=4;i++){
        cin>>str[i];
    }
    big=str[1];

    for(i=1;i<=4;i++){
        if(big<str[i]){
            big=str[i];
        }
    }
    cout<<big<<endl;
    return 0;
}
