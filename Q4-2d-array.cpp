#include<iostream>
using namespace std;

/*Write a program to add two matrices  */

void printmat(int mat3[][2]){
    cout<<"Sum of matrices is : ";
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cout<<mat3[i][j]<<" ";
    }
    cout<<endl;
}

}
void addmatrices(int mat1[][2],int mat2[][2]){
    int mat3[2][2];
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
mat3[i][j]=mat1[i][j]+mat2[i][j];
    }
}
printmat(mat3);
}
int main(){

int mat1[2][2];
int mat2[2][2];
cout<<"Enter elements in matrix 1 : ";
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
    cin>>mat1[i][j];
}
}
cout<<"Enter elements in matrix 2 : ";
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
    cin>>mat2[i][j];
}
}
addmatrices(mat1,mat2);


}