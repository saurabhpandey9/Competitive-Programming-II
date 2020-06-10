#include<iostream>
#include<vector>
using namespace std;

int n;
char a='X',b='Y';

int l=0,r=1000000000;
int mid;

void update(){

            if (a=='G'){

                l=mid+1;

                mid=l+(r-l)/3;


            }

            else if (a=='L'){

                r=mid-1;

                mid=l+(r-l)/3;


            }

    
}

int main(){
    
    cin>>n;

    l=0;
    r=n;

    mid=n/2;

    for (int i=0;i<n;i++){

        cout<<mid<<endl;

            cin>>a;
        if (a=='E'){
            exit(0);
        }


            // c.push_back(a);
        cout<<mid<<endl;

        cin>>b;

        if (b=='E'){
            exit(0);
        }

        if (a==b){

            update();

            
        }

        else{
            cout<<mid<<endl;
            cin>>a;

            if (a==b){

            update();

            }




        }

        
    }

return 0;
    
}