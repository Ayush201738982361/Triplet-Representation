//WAP to represent sparse matrix in c++
//row|column|value

#include <iostream>
using namespace std;

int main() {
    int row,cols,ele,c=0,c2=0;

    cout <<"Enter The Number Of Rows:"<<endl;
    cin>>row;

    cout <<"Enter The Number Of Columns:"<<endl;
    cin >> cols;

    int sparse[row][cols];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter The Element At: " << i << " " << j << " " << endl;
            cin >> sparse[i][j];
        }
        cout << endl;
    }

    cout << "Original Matrix:"<<endl;

    for (int i=0;i<row;i++) {
        for (int j = 0; j < cols; j++) {
            cout << sparse[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            if (sparse[i][j] == 0) {
                c += 1;
            } else {
                c2 += 1;
            }
        }
    }
    
    if(c2>c){
    	cout<<"Its Not A Sparse Matrix"<<endl;
	}
	
	else{
		int triplet[c2][3];
		int k=0;
		for(int i=0;i<row;i++){
			for(int j=0;j<cols;j++){
				if(sparse[i][j]!=0){
				triplet[k][0] = i;
				triplet[k][1] = j;
				triplet[k][2] = sparse[i][j];
				k++;
				}
			}
		}
		cout<<"Triplet Format"<<endl;
		for(int i=0;i<c2;i++){
			for(int j=0;j<3;j++){
				cout<<triplet[i][j]<<" ";
				}
				cout<<endl;
				}
				}

    return 0;
}
