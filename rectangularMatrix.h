#include <iostream>
#include <string>
#include <set>
using namespace std;

template < typename T > class actionsOnRectangularMatrix
{
private:
  int row;
  int col;
typedef set<int, greater<int> > MySet;
string line="----------------------------------";

  T **matrix;
public:

  actionsOnRectangularMatrix ()
  {

   cout<<" *Creating a rectangular matrix:"<<endl;
   cout<<line<<endl;
   cout<<"Enter the number of rows:";
   cin>>row;
   cout<<"Enter the number of columns:";
   cin>>col;
   cout<<line<<endl;
   
   if(row>col||col>row){
    matrix = new T *[row];
    for (int i = 0; i < row; i++)
      matrix[i] = new T[col];

    for (int i = 0; i < row; i++) // ввод 
        for ( int j = 0; j < col; j++) 
        { 
            cout << "Enter element " << "[" << i << "][" << j << "]  "; 
            cin >> matrix[i][j]; 
        }
  }
  else cout<<" *The given matrix is not rectangular"; 
}

void rowsWithoutZeros(){
    int rowsWithZeros=0;
    
     for (int i = 0; i < row; i++)
      for (int j = 0; j < col; j++){
          if(matrix[i][j]==0){
              ++rowsWithZeros;
              
             break;
 
          }
      }
    
    
    cout<<line<<endl;
    cout<<" *Rows with out Zeros:";
    cout<<(row-rowsWithZeros)<<endl;
    cout<<line<<endl;
}

void maxNumberWitchWasFindTwoTimes(){
    
    bool found = false;
    int rez = 0;
    MySet check;

  
    for( int i = 0; i < row; i++ )
        for( int ii = 0; ii < col; ii++ ) {
            const int val = matrix[i][ii];
            if( ( !found || val > rez ) && !check.insert( val ).second ) {
                found = true;
                rez = val;
            }
        }
  
    if( !found ){
      cout<<line<<endl;
        cout << " *No numbers in matrix that met more than once" <<endl;
          cout<<line<<endl;
    }
    else{
        cout<<line<<endl;
        cout << " *Biggest number is:" << rez <<endl;
          cout<<line<<endl;
    }

};

void taskX(){
  T *matrixSimpleArray = new T[(row*col)]; 
  int k = 0;
   for (int i = 0; i < row; i++)
      for (int j = 0; j < col; j++)	{
  matrixSimpleArray[k]=matrix[i][j];
  k++;
}
k=0;

for (int i = ((row*col)-1); i >= 0; i--){
for (int j = 0; j <= i; j++)
{
if (matrixSimpleArray[j] == 0)
{
int t = matrixSimpleArray[i];
matrixSimpleArray[i] = matrixSimpleArray[j];
matrixSimpleArray[j] = t;
break;
}
}
}

for (int i = 0; i < row; i++)
      for (int j = 0; j < col; j++){
        matrix[i][j]=matrixSimpleArray[k];
        k++;
      }
}


void printMatrix(){
   cout<<line<<endl;
   cout<<" *Your matrix:"<<endl;
   cout<<line<<endl;
   
    for (int i = 0; i < row; i++){
      for (int j = 0; j < col; j++)	{
	  cout << matrix[i][j]<<' ';
	}
    cout << endl;
   }
   cout << endl;
   }
};
