#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    int array[7]={5,2,3,1,6,7,4};
    int size=sizeof(array)/sizeof(array[0]);
    // printf("%d",size);
    for(int i=0;i<size-1;i++){
        bool flag=false;
        for(int j=0;j<size-1;j++){
            if(array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
            flag=true;
        }
        if(flag==false) break;
    }
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    return 0;

}