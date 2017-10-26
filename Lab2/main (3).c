/*Задано масив цілих чисел. Потрібно знайти і поміняти місцями мінімальний та максимальний елементи і вивести новий масив на екран*/
#include<stdio.h>
int i;
int main (){
  int a[5];
  
  for (i=0;i<5;i++){
    scanf("%d",&a[i]);
  }
  
  int min =a[0];
  int max=a[0];
  int minI=0;
  int maxI=0;
  int x;
  
  for (i=0;i<5;i++){
    if (a[i]<min){
      min =a[i];
      minI=i;
    }
  }
  printf ("min=%d",min);

 
  printf("\n");
  

for(i=0;i<5;i++){
 if (a[i]>max){
 max=a[i];
 maxI=i;
 }
}
printf ("max=%d",max);
 
 printf("\n");

  x=a[minI];
  a[minI]=a[maxI];
  a[maxI]=x;
  for (i=0;i<5;i++){
printf("%d\n",a[i]);
}

  return 0;
}