#include <stdio.h>
#include <string.h>

int main(){
    char a[10];

    printf("enter a string: ");
    scanf("%s",a);

    int length = strlen(a);
    
    
    for(int i=0; i<length/2; i++){
        if(a[i] != a[length-1-i]){
            printf("not a palindrom");
            return 0;
        }
    }
    printf("palindrom");
    return 0;
}