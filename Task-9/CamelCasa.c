#include <stdio.h>
#include <string.h>

int main(){

    char s[100];
    gets(s);
    int n= strlen(s);
    int count =1;
    for(int i=1;i<n;i++){
        if(s[i]>=60 && s[i]<=90)
            count++;
    }
    printf("%d",count);
}
