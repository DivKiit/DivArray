#include<stdio.h>
/*Divyaranjan Sahoo
Swapping pairing vals*/
int main(){
  int n,i,j,k,Div;
  printf("Enter the no of values ~ ");
  scanf("%i",&n);
  int DivArray[n];
  for (i=0;i<n;i++){
    printf("Input the value ~ ");
    scanf("%i",&DivArray[i]);}
  for (j=0;j<n-1;j+=2){
    Div=DivArray[j];
    DivArray[j]=DivArray[j+1];
    DivArray[j+1]=Div;}
  for(k=0;k<n;k++){
    printf("%i",DivArray[k]);}
  return 0;}
