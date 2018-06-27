#include<iostream>
#include<iomanip>

using namespace std ;
void PrintMat(int mat[][20] , int n,int weight[][20])
{
int i, j;
cout<<”\n\n”<<setw(4)<<””; for(i = 0; i < n; i++)
cout<<setw(3)<<”(”<<i+1<<”)”; cout<<”\n\n” ;
for(i = 0; i < n; i++) {
cout<<setw(3)<<”(”<<i+1<<”)”; for(j = 0; j < n; j++)
{
cout<<setw(4)<<mat[ i ][ j]<<setw(3)<<” cout<<”\n\n” ;
2
weight is=”
     } }
}
void PrintMat(int mat[][20] , int n) {
int i, j;
cout<<”\n\n”<<setw(4)<<””; for(i = 0; i < n; i++)
cout<<setw(3)<<”(”<<i+1<<”)”; cout<<”\n\n” ;
for(i = 0; i < n; i++) {
} }
int main() {
char int int
}
ch ; choice ;
mat[20][20] ,
weight [20][20];
cout<<setw(3)<<”(”<<i+1<<”)”; for(j = 0; j < n; j++)
{
cout<<setw(4)<<mat[ i ][ j ]; cout<<”\n\n” ;
do{
cout<<”1.undirected graph”<<endl; cout<<”2.directed graph”<<endl; cout<<”3.weighted graph”<<endl; cout<<”enter your choice=”; cin>>choice ;
switch( choice ){
case 1:{
int i, j, v;
     cout<<”Enter the cin>>v;
int mat[20][20] ,
number
of vertexes :
” ;
     weight [20][20];
3

cout<<”\n”;
for(i = 0; i < v; i++) {
for(j = i; j < v; j++) {
i f ( i != j ){
cout<<”Enter 1 if the vertex ”<<i+1<<” is c i n >> m a t [ i ] [ j ] ;
       } }
PrintMat(mat, v);} break ;
case 2:
{
}
else
mat[j][i] = mat[i][j];
mat[i][j] = 0;
int i, j, v; cout<<”Enter the number of vertexes: ”;
cin>>v;
int mat[20][20];
cout<<”\n”;
for(i = 0; i < v; i++) {
for(j = 0; j < v; j++) {
     cout<<”Enter 1 if the vertex ”<<i+1<<” is c i n >> m a t [ i ] [ j ] ;
       } }
PrintMat(mat, v);} break ;
case 3:
4
a
d

{{
int i, j, v;
cout<<”Enter the number of cin>>v;
int mat[20][20];
cout<<”\n”;
for(i = 0; i < v; i++) {
vertexes :
” ;
     for(j = 0; j < v; j++) {
cout<<”Enter 1 if the vertex ”<<i+1<<” is c i n >> m a t [ i ] [ j ] ;
i f ( mat [ i ] [ j ]==1){
       } }
PrintMat(mat, v,weight);} break ;
default :
c o u t <<” i n v a l i d ”<< e n d l ;
}
}
cout<<”do you want to continue Y/N=”; cin>>ch;
} w h i l e ( ( c h== ’ Y ’ ) | | ( c h== ’ y ’ ) ) ; }
