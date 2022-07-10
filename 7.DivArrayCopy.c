#include<stdio.h>
/*Divyaranjan Sahoo
Copying array to another*/
int main(){
  int i,n;
  int AlphaArr[n],BetaArr[n];
  printf("No of values ~ ");
  scanf("%i",&n);
  for(i=0;i<n;i++){
    printf("Input the values ~ ");
    scanf("%i",&AlphaArr[i]);}
  printf("\nArray [Copied] - ");
  for(i=0;i<n;i++){
    BetaArr[i]=AlphaArr[i];}
  for(i=0;i<n;i++){
  printf("%d ",BetaArr[i]);}
  printf("\n");
  return 0;}
