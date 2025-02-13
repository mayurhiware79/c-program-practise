//TEST CASE 10 NOT SATISFIED

int main()
{
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    // Write Your Code Here
    // if(n >= 1 && n <=9 ){
    //     switch(n){
    //     case 1: printf("one");
    //         break;
    //     case 2: printf("two");
    //         break;
    //     case 3: printf("three");
    //         break;
    //     case 4 : printf("four");
    //         break;
    //     case 5 : printf("five");
    //         break;
    //     case 6 : printf("six");
    //         break;
    //     case 7 : printf("seven");
    //         break;
    //     case 8 : printf("eight");
    //         break;     
    // } 
    // }else {
    //     printf("Greater than 9");                       
        
    // }


    //SUCCESS
     char *number[30] = {"one","two","three","four","five","six","seven","eight","nine"};
    
    if(n >= 1&& n <=9){
        printf("%s",number[n-1]);
    }else {
        printf("Greater than 9");
    }
    return 0;
}
