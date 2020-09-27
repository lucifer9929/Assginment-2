/*
 Name = Kaushal Singh
 Branch = Computer Science 
 Class = Second Year (Third  Sem.)
 Subject = OOPS (Assignment 2)
 Roll No. = 19/500
*/





// Question 2 To implement operator Overloading for (+) operation in matrix


// Suggestion for the input array

// arr1[][] = { {2, 5, 14, 15}, {41, 45, 43, 46}, {22, 23, 24, 26}} (4 x 4)  
// arr2[][] = { {1, 12, 2, 3}, {17, 15, 18, 16}, {4, 6 , 5, 1}} (4 x 4)

#include<iostream>
using namespace std;

class Matrix
{
        int a[3][3];
    public:
        void pt();
        void display();
        void operator + (Matrix x);
};
void Matrix :: pt()
{
        cout<<"\n Enter your Matrix element (3 X 3) : \n";
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        cout<<" ";
                        cin>>a[i][j];
                }
        }
}
void Matrix :: display()
{
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<a[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
void Matrix :: operator +(Matrix x)
{
        int mat[3][3];
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        mat[i][j] = ( a[i][j] + x.a[i][j] );
                }
        }
        cout<<"\n Addition of Matrix : \n\n";
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<mat[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
int main()
{
        Matrix m,n;
        m.pt();      
        n.pt();     
        cout<<"\n First Matrix : \n\n";
        m.display();  
        cout<<"\n Second Matrix : \n\n";
        n.display(); 
        m + n;  
        return 0;
}
