#include<stdio.h>
/*Divyaranjan Sahoo
Array reversing*/
int main(){
  int n,i,k,Div,Alpha=0,Beta=0;
  int DivArray[n+1];
  printf("Enter the no of values ~ ");
  scanf("%i",&n);
  for (i=0;i<n;i++){
    printf("Input the value ~ ");
    scanf("%i",&DivArray[i]);}
  printf("Rev Array - ");
  for (i=0;i<n;i++){
    printf(" %i ",DivArray[n-i-1]);}
  return 0;}
