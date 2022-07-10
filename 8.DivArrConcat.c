#include<stdio.h>
/*Divyaranjan Sahoo
Concatenation of arrays*/
int main(){
  int i,j,k,m,n,DivArray[n+m];
  printf("No of values in array-I ~ ");
  scanf("%i",&m);
  printf("No of values in array-II ~ ");
  scanf("%i",&n);
  int AlphaArr[m],BetaArr[n];
  for(i=0;i<m;i++){
    printf("Input the values in Array-I ~ ");
    scanf("%i",&AlphaArr[i]);}
  for(j=0;j<n;j++){
    printf("Input the values in Array-II ~ ");
    scanf("%i",&BetaArr[j]);}
  printf("\nConcatenated Array - ");
  for(k=0;k<m;k++){
  DivArray[k]=AlphaArr[k];}
  for(k=m;k<m+n;k++){
    DivArray[k]=BetaArr[k-m];}
  for(k=0;k<m+n;k++){
  printf("%d ",DivArray[k]);}
  printf("\n");
  return 0;}
