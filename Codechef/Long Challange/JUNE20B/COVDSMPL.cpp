#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;

    for( int i=0;i<test;i++){

        int n,p;

        cin>>n>>p;

        int arr[n][n];

        for ( int j=0;j<n;j++){
            for ( int k=0;k<n;k++){
                arr[j][k]==0;
            
            }

        }

        for ( int j=0;j<n;j++){
            for ( int k=0;k<n;k++){
                cout<<"1 "<<(j+1)<<" "<<(k+1)<<" "<<(j+1)<<" "<<(k+1)<<endl;

                int x;
                cin>>x;

                if(x==-1){
                    exit(0);
                }
                else{

                    arr[j][k]=x;

                }

                
            
            }

        }

        cout<<'2'<<endl;

        for ( int j=0;j<n;j++){
            for ( int k=0;k<n;k++){
                cout<<arr[j][k]<<" ";
            
            }
            cout<<endl;

        }

                int x;
                cin>>x;

                if(x==-1){
                    exit(0);
                }

                else if(x==1){
                    continue;
                }





    }

    return 0;
}