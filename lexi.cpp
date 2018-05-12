// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
 int size;
 int *trans;
 int newsize;
 int next=0;
 cout << "Enter the size of Array" << endl;
 cin >> size;
 int *generalarray[size];
 int elements[size];
 for (int i=0;i<size;i++)
 {
 cout << "Enter the number of elements of size " << (i+1) << endl ;
 cin >> elements[i] ;
 generalarray[i] = new int[elements[i]] ;
 }
 for(int h=0;h<size;h++)
     {
         for(int k=0;k<elements[h];k++)
         {
             cout << "Enter a number for size " << (h+1) << " element " << (k+1) << endl;
             cin >> generalarray[h][k];
         }
     }
 for(int j=0;j<size-1;j++)
     {

         for(int m=j+1;m<size;m++)
         {
             if(generalarray[j][next] > generalarray[m][next])
             {
                 trans=generalarray[j];
                 generalarray[j]=generalarray[m];
                 generalarray[m]=trans;
                 newsize=elements[j];
                 elements[j]=elements[m];
                 elements[m]=newsize;
             }
             if(generalarray[j][next]==generalarray[m][next])
             {
                do {
                  next = next + 1;
                } while(generalarray[j][next]==generalarray[m][next]);

               if(generalarray[j][next] > generalarray[m][next])
                 {
                 trans=generalarray[j];
                 generalarray[j]=generalarray[m];
                 generalarray[m]=trans;
                 newsize=elements[j];
                 elements[j]=elements[m];
                 elements[m]=newsize;
                 }
                 next = 0;
             }
         }
     }
     for(int y=0;y<size;y++)
     {
         for (int x=0;x<elements[y];x++)
         {
             cout << generalarray[y][x] << " " ;

         }
         cout << endl ;
     }
}

