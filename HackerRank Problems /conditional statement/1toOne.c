int main()
{
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    // Write Your Code Here
    if(n > 0){
        switch(n){
        case 1: printf("one");
            break;
        case 2: printf("two");
            break;
        case 3: printf("three");
            break;
        case 4 : printf("four");
            break;
        case 5 : printf("five");
            break;
        case 6 : printf("six");
            break;
        case 7 : printf("seven");
            break;
        case 8 : printf("eight");
            break;
         default: printf("Greater than 9");                       
    } 
    }else {
        printf("pls enter positive int");
        
    }
    return 0;
}
