#include<stdio.h>
/*Divyaranjan Sahoo
N prime numbers in Arr*/
int main(){
  int i=2,j,k=0,l,n,Div;
  printf("Num of primes to etch ~ ");
  scanf("%i",&n);
  int DivArray[n];
  for(i=2;i>=0;i++){
    Div=1;
    for(j=2;j<=i/2;j++){
      if(i%j==0){
        Div=0;
        break;}}
    if(Div==1){
      DivArray[k]=i;
      k+=1;
      if (k==n+1){
        break;break;}}}
  for (l=0;l<n;l++){
    printf("%i ",DivArray[l]);}
  return 0;}
