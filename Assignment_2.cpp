// Question 2 To implement operator Overloading for (+) operation in matrix


// Suggestion for the input array

// arr1[][] = { {2, 5, 14, 15}, {41, 45, 43, 46}, {22, 23, 24, 26}} (4 x 4)  
// arr2[][] = { {1, 12, 2, 3}, {17, 15, 18, 16}, {4, 6 , 5, 1}} (4 x 4)


#include<iostream>
using namespace std;

class Matrix
{
        int a[4][4];
    public:
        void accept();
        void display();
        void operator + (Matrix x);
};
void Matrix :: accept()
{
        cout<<"\n Enter your Matrix element (4 X 4) : \n";
        for(int i=0; i<4; i++)
        {
                for(int j=0; j<4; j++)
                {
                        cout<<" ";
                        cin>>a[i][j];
                }
        }
}
void Matrix :: display()
{
        for(int i=0; i<4; i++)
        {
                cout<<" ";
                for(int j=0; j<4; j++)
                {
                        cout<<a[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
void Matrix :: operator +(Matrix x)
{
        int mat[4][4];
        for(int i=0; i<4; i++)
        {
                for(int j=0; j<4; j++)
                {
                        mat[i][j] = ( a[i][j] + x.a[i][j] );
                }
        }
        cout<<"\n Addition of Matrix : \n\n";
        for(int i=0; i<4; i++)
        {
                cout<<" ";
                for(int j=0; j<4; j++)
                {
                        cout<<mat[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
int main()
{
        Matrix m,n;
        m.accept();      
        n.accept();     
        cout<<"\n First Matrix : \n\n";
        m.display();  
        cout<<"\n Second Matrix : \n\n";
        n.display(); 
        v = m + n;  
        return 0;
}