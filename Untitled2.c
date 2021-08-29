#include <stdio.h>



int main() {
    // Write C code here
    char str[20][30];
    printf("Enter 20 words: ");
    int i;
    for( i=0; i<20; i++){
        scanf("%s", &str[i]);
    }
    int ans1 = 0, ans2 = 0, ans3 = 0;
    for(i=0; i<20; i++){
        if(strlen(str[i]) >=1 && strlen(str[i])<=2) ans1++;
        else if(strlen(str[i]) >=3 && strlen(str[i])<=5) ans2++;
        else ans3++;
    }
    printf("The number of words with length between 1-2 is :%d", ans1);
    printf("\nThe number of words with length between 3-5 is :%d", ans2);
    printf("\nThe number of words with length greater than 5 is :%d", ans3);
    return 0;
}
