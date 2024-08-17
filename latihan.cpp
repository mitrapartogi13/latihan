#include<bits/stdc++.h>

using namespace std;

int main(){

    string a;

    cin >> a;
/*halo nama aku yuki suou*/

    int cek =a.size();

    int iya=0;
    for(int i=0;i<cek;i++){
        if(a[i]=='4' ||a[i]=='7' ){
            iya++;
        } else {
            cout << "NO";
            return 0;
        }
    }

    if(iya == 4 || iya == 7){
        cout << "YES";
    } else{
        cout << "NO";
    }

    
}
