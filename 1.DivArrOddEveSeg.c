#include<stdio.h>
/*Divyaranjan Sahoo
Array odd eve segregation*/
int main(){
  int n,i,j,k,Div,Alpha=0,Beta=0;
  int DivArray[n+1];
  printf("Enter the no of values ~ ");
  scanf("%i",&n);
  for (i=0;i<n;i++){
    printf("Input the value ~ ");
    scanf("%i",&DivArray[i]);}
  for (j=0;j<n;j++){
    if (DivArray[j]%2==1){
      Alpha+=DivArray[j];}
    else if (DivArray[j]%2==0){
      Beta+=DivArray[j];}}
  if (Alpha>Beta){
    printf("The sum of odd numbers is greater - %i",Alpha);}
  else if (Alpha<Beta){
    printf("The sum of even numbers is greates- %i",Beta);}
  else{
    printf("Equal sum or Invalid input");}
  return 0;}
