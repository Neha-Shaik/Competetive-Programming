int string_order(char *);
int sub_string_order(char *, int);

int main(){
    printf("Enter a string\n");
    char so[100], sso[100];
    scanf(" %s", so);
    if(string_order(so) == 1){
        printf("The given string is alphabetically ordered.\n\n");
    }
    else{
        printf("The given string is NOT alphabetically ordered.\n\n");
    }

    printf("Enter another string\n>>");
    scanf(" %s", sso);
    printf("Enter the number 'k'\n>>");
    int k;
    scanf("%d", &k);
    printf("The number of sub strings of length k in the given string are %d\n\n",
    sub_string_order(sso, k));
    return 0;
}

int string_order(char *s){
    char *ptr = s;
    while(*(ptr+1) != '\0'){
        if(*(ptr + 1) < *(ptr)){
            return 0;
        }
        ptr++;
    }
    return 1;
}

int sub_string_order(char *s, int k){
    char *ptr = s;
    int cur = 1, count = 0;
    while(*(ptr+1) != '\0'){
        if(*(ptr + 1) >= *(ptr)){
            cur++;
            
        }
        else{
            if(cur >= k){
                count += cur - k + 1;

            }
            cur = 1;
        }
        ptr++;
    }
    if(cur >= k){
        count += cur - k + 1;

    }
    return count;
}
