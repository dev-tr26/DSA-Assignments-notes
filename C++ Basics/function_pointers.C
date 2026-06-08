#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>


int foo(int x, int y){
    return x + y;
}

bool p(int x){
    return x%2 == 0;
}


void print_if(int xs[10], bool (*predicate)(int)){
    for(int i=0; i<10; i++){
        if(predicate(xs[i])){
            printf("%d\n", xs[i]);
        }
    }
}

int compar(const void *x1, const void *x2){
    return (*(int*)x2) - (*(int*)x1);
}


int main(){
    int xs[] = {1,2,3,4,5,6,7,8,9,10};
    // int (*f)(int,int) = foo;
    // printf("%d\n", foo(3,4));
    print_if(xs, p);    

    printf("-----------------");

    qsort(xs, 10, sizeof(int), compar);
    for(int i=0; i<10; i++){
        printf("%d\n", xs[i]);
    }
    return 0;
}

