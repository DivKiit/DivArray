#include<stdio.h>
/*Divyaranjan Sahoo
Frequency of element in array*/
int main(){
  int i,n,Div=0,DivElement;
  int DivArray[n];
  printf("Number of elements in the array - ");
  scanf("%i",&n);
  for (i=0;i<n;i++){
    printf("Enter the elements - ");
    scanf("%i",&DivArray[i]);}
  printf("\nInput the element to find frequency of -");
  scanf("%i",&DivElement);
  for (i=0;i<n;i++){
    if (DivArray[i]==DivElement){
      Div+=1;}}
  printf("\nThe frequency of %i is %i times\n",DivElement,Div);
  return 0;}
