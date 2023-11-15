#include<iostream>
using namespace std;
int main(){
    int T,N,X;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N>>X;
        if(X==0){
            cout<<X<<endl;
        }

        else{
            int m=(2*X-2*N);
            if(m>0)
                cout<<m<<endl;
            else
                cout<<"0"<<endl;
        }
    }

return 0;
}
