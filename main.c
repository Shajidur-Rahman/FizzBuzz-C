# include<stdio.h>


int main(){

    int ask;
    printf("Give me a number: ");
    scanf("%d", &ask);

    // backend
    if (ask%3 == 0 && ask%5 ==0){
        printf("FizzBuzz\n");
    }
    else if(ask%3 == 0){
        printf("Fizz\n");
    }
    else if (ask%5 ==0){
        printf("Buzz\n");
    }
    else{
        printf("Try other numbers\n");
    }
    return 0;

}