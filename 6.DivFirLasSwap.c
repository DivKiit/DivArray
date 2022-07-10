#include<stdio.h>
/*Divyaranjan Sahoo
Swapping fir-las vals*/
int main(){
  int n,i,j,k,Div;
  printf("Enter the no of values ~ ");
  scanf("%i",&n);
  int DivArray[n];
  for (i=0;i<n;i++){
    printf("Input the value ~ ");
    scanf("%i",&DivArray[i]);}
  for (j=0;j<n/2;j++){
    Div=DivArray[j];
    DivArray[j]=DivArray[n-j-1];
    DivArray[n-j-1]=Div;}
  printf("Fir-Las Swapped Array - ");
  for(k=0;k<n;k++){
    printf("%i",DivArray[k]);}
  return 0;}
