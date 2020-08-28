#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void sort(char *word){
        // sort
    for(int i = 0; i < strlen(word); i++){
        for(int j = 0; j < strlen(word); j++){
            if(word[i] < word[j]){
                int temp = word[j];
                word[j] = word[i];
                word[i] = temp;
            }
        }
    }
}
int main(){
    char a;
    int *h = malloc(sizeof(int) * 26), len;
    for(int h_i = 0; h_i < 26; h_i++){
       scanf("%d",&h[h_i]);
    }
    char* word = (char *)malloc(512000 * sizeof(char));
    scanf("%s",word);
    // sort
    sort(word);
    // get original length
    len = strlen(word);
    // remove duplicate
    int j = 0;
    for(int i = 0; i < strlen(word); i++){
        if(word[i] != word[i+1]){
            word[j++] = word[i];
        }
    }
    word[j] = '\0';
    int max = 0;
    for(int i = 0, temp; i < strlen(word); i++){
        for(j = 0, a = 97; j < 26; j++,a++){
            if(word[i] == a){
                temp = h[j];
                break;
            }
        }
        if(max < temp)
            max = temp; // find the largest
    }
    printf("%ld",(long int)len*max);
       
    return 0;
}