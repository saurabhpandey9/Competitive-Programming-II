#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;

    for( int i=0;i<test;i++){

        int n,p;

        cin>>n>>p;

        int mid=(n*n)/2;

        int arr[n][n];

        if(n==1){
            
            int max;
            cout<<"1 "<<"1 "<<"1 "<<"1 "<<"1"<<endl;
            cin>>max;

            if(max==-1){
                exit(0);
            }

            arr[0][0]=max;

        }

        int max1;

        cout<<"1 "<<"1"<<" "<<"1"<<" "<<n<<" "<<n<<endl;
        cin>>max1;

        if(max1==-1){
            exit(0);
        }
        else if (max1==(n*n)){
            for ( int j=0;j<n;j++){
                for ( int k=0;k<n;k++){
                    arr[j][k]=1;
                    }

            }
        }
        else if (max1==0){

            for ( int j=0;j<n;j++){
                for ( int k=0;k<n;k++){
                    arr[j][k]=0;
                    }

            }

        }

        else if (max1<=mid){

            for ( int j=0;j<n;j++){
                for ( int k=0;k<n;k++){
                    arr[j][k]=0;
                
                }

            }

            

            // even start

            if(n%2==0){

                int max=max1;

                if(max==-1){
                exit(0);
                }
                else{

                    for ( int j=0;j<n;j++){
                        for ( int k=0;k<n;k+=2){

                        cout<<"1 "<<(j+1)<<" "<<(k+1)<<" "<<(j+1)<<" "<<(k+2)<<endl;

                    int x;
                    cin>>x;

                    if(x==-1){
                        exit(0);
                    }
                    else if (x==2){

                        arr[j][k]=1;
                        arr[j][k+1]=1;
                        max-=2;

                        if(max==0){
                            break;
                        }

                    }
                    else if(x==1){

                        cout<<"1 "<<(j+1)<<" "<<(k+1)<<" "<<(j+1)<<" "<<(k+1)<<endl;

                        cin>>x;

                        if(x==-1){
                            exit(0);
                        }

                        if(x==1){
                            arr[j][k]=1;
                            max--;
                            if(max==0){
                                break;
                            }
                        }
                        else if(x==0){

                            arr[j][k+1]=1;
                            max--;
                            if(max==0){
                                break;
                            }

                        }
                        

                    }
                }

                    if(max==0){break;}

                    }


                }

            }


            // even end


            // when n is odd 
            else if(n%2==1){

                int max;

                cout<<"1 "<<"1"<<" "<<"1"<<" "<<n<<" "<<n<<endl;
                cin>>max;

                    if(max==-1){
                        exit(0);
                    }
                    else if(max==0){
                        max=0;
                    }
                    else if (max==(n*n)){

                        for ( int j=0;j<n;j++){
                            for ( int k=0;k<n;k++){
                                arr[j][k]=1;
                            }
                        }
                    }
                    else{

                        int x;

                        for ( int j=0;j<n;j++){
                            for ( int k=0;k<(n-1);k+=2){

                                cout<<"1 "<<(j+1)<<" "<<(k+1)<<" "<<(j+1)<<" "<<(k+2)<<endl;

                                
                                cin>>x;

                                if(x==-1){
                                    exit(0);
                                }
                                else if (x==2){

                                    arr[j][k]=1;
                                    arr[j][k+1]=1;
                                    max-=2;

                                    if(max==0){
                                        break;
                                    }

                                }
                                else if(x==1){

                                    cout<<"1 "<<(j+1)<<" "<<(k+1)<<" "<<(j+1)<<" "<<(k+1)<<endl;
                                    cin>>x;

                                    if(x==-1){
                                        exit(0);
                                    }
                                    else if(x==1){
                                        arr[j][k]=1;
                                        max--;
                                        if(max==0){
                                            break;
                                        }
                                    }
                                    else if(x==0){

                                        arr[j][k+1]=1;
                                        max--;
                                        if(max==0){
                                            break;
                                        }

                                    }
                                    

                                }
                            }

                            if(max==0){break;}
                        }
                    

        
                        if(max>0){

                            int k;

                            k==n-1;

                            for ( int j=0;j<(n-1);j+=2){

                                cout<<"1 "<<(j+1)<<" "<<(k+1)<<" "<<(j+2)<<" "<<(k+1)<<endl;

                                cin>>x;

                                if(x==-1){
                                    exit(0); 
                                }
                                else if (x==2){
                                    arr[j][k]=1;
                                    arr[j+1][k]=1;
                                    max-=2;

                                    if(max==0){
                                        break;
                                    }
                                }
                                else if(x==1){

                                    cout<<"1 "<<(j+1)<<" "<<(k+1)<<" "<<(j+1)<<" "<<(k+1)<<endl;

                                    cin>>x;

                                    if(x==-1){
                                        exit(0);
                                    }
                                    else if(x==1){

                                            arr[j][k]=1;
                                            max--;
                                            if(max==0){
                                                break;
                                            }

                                    }
                                    else if (x==0){
                                        arr[j+1][k]=1;
                                            max--;
                                            if(max==0){
                                                break;
                                            }

                                    }

                                }

                            }
                        

                            if (max==1){
                                arr[n-1][n-1]=1;
                            }


                        }
        
                    }

            }

        // odd end

        }

        // when zero is less then we will apply this 

        else{

            for ( int j=0;j<n;j++){
                for ( int k=0;k<n;k++){
                    arr[j][k]=1;
            
                }

            }

        

            // even start

            if(n%2==0){

                int max=((n*n)-max1);
                
                
                if(true){

                    for ( int j=0;j<n;j++){
                        for ( int k=0;k<n;k+=2){

                        cout<<"1 "<<(j+1)<<" "<<(k+1)<<" "<<(j+1)<<" "<<(k+2)<<endl;

                    int x;
                    cin>>x;

                    if(x==-1){
                        exit(0);
                    }
                    else if (x==0){

                        arr[j][k]=0;
                        arr[j][k+1]=0;
                        max-=2;

                        if(max==0){
                            break;
                        }

                    }
                    else if(x==1){

                        cout<<"1 "<<(j+1)<<" "<<(k+1)<<" "<<(j+1)<<" "<<(k+1)<<endl;

                        cin>>x;

                        if(x==-1){
                            exit(0);
                        }

                        if(x==0){
                            arr[j][k]=0;
                            max--;
                            if(max==0){
                                break;
                            }
                        }
                        else if(x==1){

                            arr[j][k+1]=0;
                            max--;
                            if(max==0){
                                break;
                            }

                        }
                        

                    }
                }

                    if(max==0){break;}

                    }


                }

            }


            // even end


            // when n is odd 
            else if(n%2==1){

                int max=((n*n)-max1);

                    if(true){

                        int x;

                        for ( int j=0;j<n;j++){
                            for ( int k=0;k<(n-1);k+=2){

                                cout<<"1 "<<(j+1)<<" "<<(k+1)<<" "<<(j+1)<<" "<<(k+2)<<endl;

                                
                                cin>>x;

                                if(x==-1){
                                    exit(0);
                                }
                                else if (x==0){

                                    arr[j][k]=0;
                                    arr[j][k+1]=0;
                                    max-=2;

                                    if(max==0){
                                        break;
                                    }

                                }
                                else if(x==1){

                                    cout<<"1 "<<(j+1)<<" "<<(k+1)<<" "<<(j+1)<<" "<<(k+1)<<endl;
                                    cin>>x;

                                    if(x==-1){
                                        exit(0);
                                    }
                                    else if(x==0){
                                        arr[j][k]=0;
                                        max--;
                                        if(max==0){
                                            break;
                                        }
                                    }
                                    else if(x==1){

                                        arr[j][k+1]=0;
                                        max--;
                                        if(max==0){
                                            break;
                                        }

                                    }
                                    

                                }
                            }

                            if(max==0){break;}
                        }
                    

        
                        if(max>0){

                            int k;

                            k==n-1;

                            for ( int j=0;j<(n-1);j+=2){

                                cout<<"1 "<<(j+1)<<" "<<(k+1)<<" "<<(j+2)<<" "<<(k+1)<<endl;

                                cin>>x;

                                if(x==-1){
                                    exit(0); 
                                }
                                else if (x==0){
                                    arr[j][k]=0;
                                    arr[j+1][k]=0;
                                    max-=2;

                                    if(max==0){
                                        break;
                                    }
                                }
                                else if(x==1){

                                    cout<<"1 "<<(j+1)<<" "<<(k+1)<<" "<<(j+1)<<" "<<(k+1)<<endl;

                                    cin>>x;

                                    if(x==-1){
                                        exit(0);
                                    }
                                    else if(x==0){

                                            arr[j][k]=0;
                                            max--;
                                            if(max==0){
                                                break;
                                            }

                                    }
                                    else if (x==1){
                                        arr[j+1][k]=0;
                                            max--;
                                            if(max==0){
                                                break;
                                            }

                                    }

                                }

                            }
                        

                            if (max==1){
                                arr[n-1][n-1]=0;
                            }


                        }
        
                    }

            }

            // odd end


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