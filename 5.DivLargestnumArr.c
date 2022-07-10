#include<stdio.h>
/*Divyaranjan Sahoo
Largest and smallest num*/
int main(){
  int n,i,j,k,Larg,Leas;
  printf("No of Values ~ ");
  scanf("%i",&n);
  int DivArray[n],Array[n];
  Larg = DivArray[0];
  Leas = Array[0];
  for(i=0;i<n;i++){
    printf("Input the value ~ ");
    scanf("%i",&DivArray[i]);
    Array[i]=DivArray[i];}
  for(i=0;i<n;i++){
    if (DivArray[i]>Larg){
      Larg=DivArray[i];}}
  for(j=0;j<n;j++){
    if (Array[j]<Leas){
      Leas=Array[j];}}
    printf("\nLargest - %i\nLeast - %i\n",Larg,Leas);
    return 0;}
