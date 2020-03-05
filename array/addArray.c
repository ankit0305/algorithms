#include<stdio.h>

int main(){

int i, n[]={1,2,3,4};
int counter=0;
for(i=3;i>=0;i--){
counter=counter+n[i];
}
printf("%d",counter);

}
