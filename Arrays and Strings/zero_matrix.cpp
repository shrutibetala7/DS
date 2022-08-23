//Given NM matrix change entire row and column to 0 
//whenever you encounter 0 in any cell

#include<iostream>
using namespace std;

void _newMatrix(int arr[][10],int r,int c){
int col[10],row[10];
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==0){
                row[i]=1;
                col[j]=1;
            }

        }
    }

//for column
for(int i=0;i<c;i++){
    if(col[i]==1){
        for(int j=0;j<r;j++){
            arr[j][i]=0;
        }
    }
}

//for row
for(int i=0;i<r;i++){
    if(row[i]==1){
        for(int j=0;j<r;j++){
            arr[i][j]=0;
        }
    }
}

 for(int i=0;i<r;i++){
     cout<<endl;
        for(int j=0;j<c;j++){
            cout<<arr[i][j];
        }
    }


}
int main(){
    int m[10][10];
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>m[i][j];
        }
    }

_newMatrix(m,r,c);
return 0;
}