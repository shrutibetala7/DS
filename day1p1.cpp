// Problem Statement: Given a matrix if an element
// in the matrix is 0 then you will have to set its
// entire column and row to 0 and then return the matrix.

#include<iostream>
#include<stdio.h>

using namespace std;

int setMatrix(int mat[][10]){

int matDup[10][10];
for(int i=0;i<r;i++){
        for(int k=0;k<r;k++){
            matDup[i][k]=mat[i][k];
        }



for(int i=0;i<r;i++){
        for(int k=0;k<r;k++){
            if(matDup[i][j]==0)
            {
                setRow(mat[0][0],i,r);
                setCol(mat[0][0],j,r);
            }
        }
    }
return mat[0][0];
}

void setRow(int *mat,int r,int R){
   
        for(int j=0;j<R;j++){
            mat[r][j]=0;
        }
}
void setCol(int *mat,int c,int R){
        for(int i=0;i<R;i++){
            mat[i][c]=0;
        }
}

int main(){
    int matrix[10][10],r;
    cout<<"Enter number of rows: ";
    cin>>r;

cout<<"Enter the matrix: "<<endl;

    for(int i=0;i<r;i++){
        for(int k=0;k<r;k++){
            cin>>matrix[i][k];
        }
    }

cout<<"New matrix is :" <<setMatrix(matrix,r);


return 0;
}