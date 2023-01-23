
#include<stdio.h>
#include<conio.h>

#define SIZE 10
int main(){
float num[SIZE],minValue;
int i,amongNum;
float min(float[],int);
int minIndex(float[],int);

for(i=0;i<SIZE;i++){
printf("Enter number %d: ",i+1);
scanf("%f",&num[i]);
}
printf("\n Enter a number among which you want to find the minimum number: ");
scanf("%d",&amongNum);

minValue=min(num,amongNum);

printf("\n The minimum number among first %d numer is %.2f",amongNum,minValue);

printf("\n The minimum number's index is %d",minIndex(num,amongNum));
getch();
return 0;
}

float min(float arr[],int n){
 int i;
 float min;
 min=arr[0];
 for(i=1;i<n;i++)
   if (min>arr[i])
    min=arr[i];
 return min;
}
int minIndex(float arr[],int n){
 int i,index=0;
 float min=0;
 min=arr[0];
 for(i=1;i<n;i++)
   if (min>arr[i]){
    min=arr[i];
    index=i;
   }
 return index;
}
