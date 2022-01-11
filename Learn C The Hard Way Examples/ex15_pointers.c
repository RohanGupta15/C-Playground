#include<stdio.h>

int main(int argc, char *argv[]){
    int ages[] = {12, 21, 34,45,61};
    char *names[] = { "Alan", "Frank", "Mary", "Jenifer", "Lawerance"};

    //Ge size of Array
    int size = sizeof(ages)/sizeof(int);
    int i =0;

    //First way: using Indexes
    printf("\n-First way: using Indexes-\n");
    for(i=0; i<size; i++){
        printf("%s has lived for %d years\n", names[i], ages[i]);
    }

    //Second Way :Set Pointer to start of Array
    int *cur_age = ages;
    char **cur_name = names;
    printf("\n-Second Way :Set Pointer to start of Array-\n"); 
    for (i = 0; i < size; i++)
    {
        printf("%s has lived for %d years\n", *(cur_name+i), *(cur_age+i));
    }

    //Third Way: Pointers are just Arrays
    printf("\n-Third Way: Pointers are just Arrays-\n");
    for(i=0;i<size;i++) {
        printf("%s has lived for %d years\n", cur_name[i], cur_age[i]);
    }

    //Fourth Way: With Pointers in a complex way
    printf("\n-Fourth Way: With Pointers in a complex way-\n");
    for(cur_name = names, cur_age = ages; (cur_age - ages) < size; cur_age++, cur_name++){
        printf("%s has lived for %d years\n", *cur_name, *cur_age);
    }
    return 0;
}