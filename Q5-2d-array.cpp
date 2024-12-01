#include<iostream>
using namespace std;
void print(int trnpose[][3]){
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
         cout<<trnpose[i][j]<<" ";

    }
    cout<<endl;
}
cout<<endl;
}
void transpose(int arr[][3]){
 int transpose[3][3];
for(int j=0;j<3;j++){
    for(int i=0;i<3;i++){
transpose[i][j]=arr[j][i];
    }
}
print(transpose);
}
int main(){
    
int arr[3][3];
cout<<"Enter array elements : ";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
}
transpose(arr);
    return 0;

}