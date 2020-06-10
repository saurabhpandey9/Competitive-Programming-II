#include<iostream>
using namespace std;

int main(){
    int n;
    char a;
    cin>>n;

    int s1=0,e1=n;
    int s2=0,e2=n;

    bool b1=true,b2=true;

    int mid1,mid2;

    mid1=(s1+e1)/2;

    mid2=(s2+e2)/2;

    for(int i=1;i<=300;i++){


        if(i%2==0){

            cout<<mid1<<endl;

        }
        else{
            cout<<mid2<<endl;
        }

       

        // reading G L E 
        cin>>a;

        if (a=='E'){
            exit(0);
        }

        else if (a=='G'){

            

            if (i%2==0){

                if (b1==false){
                    continue;
                }

                if (s1<=mid1 && mid1 <e1 ){
                    s1=mid1+1;

                    mid1=(s1+e1)/2;

                }
                else{
                    b1=false;
                    continue;
                }


            }

            else{

                if (b2==false){
                continue;
                }

                if (s2<=mid2 && mid2 <e2 ){
                    s2=mid2+2;

                    mid2=(s2+e2)/2;

                }
                else{
                    b2=false;
                    continue;
                }

            }

        }

        else if (a=='L'){

            if (i%2==0){

                if (b1==false){
                    continue;
                }

                if (s1<mid1 && mid1<=e1){

                    e1=mid1-1;
                    mid1=(s1+e1)/2;

                }
                else{
                    b1=false;
                    continue;
                }


            }




            else{

                if (b2==false){
                    continue;
                }

                if (s2<mid2 && mid2<=e2){

                    e2=mid2-2;
                    mid2=(s2+e2)/2;

                }
                else{
                    b2=false;
                    continue;
                }



            }

        }


        

    }
}