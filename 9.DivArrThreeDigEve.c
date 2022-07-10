#include<stdio.h>
/*Divyaranjan Sahoo
Three digit even Num sort*/
int main(){
  int i,n,Div,Alpha;
  int DivArray[n];
  printf("Num of values in Array ~ ");
  scanf("%i",&n);
  printf("\nArray Data Entry\n");
  for (i=0;i<n;i++){
    printf("Input the value - ");
    scanf("%i",&DivArray[i]);}
  printf("\nThree Digit Even Vals - ");
  for (i=0;i<n;i++){
    if(DivArray[i]%2==0 && DivArray[i]/100!=0){
      if (DivArray[i]/1000==0){
      printf(" %i ",DivArray[i]);}}}
  printf("\n");
  return 0;}
