#include<stdio.h>
#include<math.h>
/*Divyaranjan Sahoo
Dec to Bin using Arr*/
int main(){
  int Num,i,k,Div,n=0;
  printf("Enter the number in decimal ~ ");
  scanf("%i",&Num);
  Div=log(Num)/log(2);
  //Div is the number of elements-1/0 in binary value
  int DivArray[Div];
  for (i=Div;i>=0;i--){
    DivArray[i]=Num%2;
    Num/=2;}
  //Here Div is already one less than real value
  //Hence we can use <= than <.
  printf("Binary Value - ");
  for (k=0;k<=Div;k++){
    printf("%i",DivArray[k]);}
  return 0;}
