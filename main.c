


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i;
    
    for(i = 1; i < 101; i++) {
        
        if(i % 3 == 0 && i % 5 == 0){
            printf("FizzBuzz\n");
        }
    
        else if(i % 3 == 0){
            printf("Fizz\n");
        }
        
        else if(i % 5==0){
            printf("Buzz\n");
        
        }else{
        
        printf("%d\n" , i);

}

}

}

/* 

1) I had to Google what the divisible/multiple input is
2) originally I only had for example: if(i % 3){  ......... printf("Fizz\n");  <-- I looked at other solutions and determined that it wasn't working because I needed to have the ==0, which means whatever number "i" divided by 3 (or 5) will equal out to 0 vs i % 3 which can be equal to anything
3) the last problem i ran into was that i wasn't including "\n" in my print statements and every line had Fizz + a number next to it. I thought it was because of the final print statement and kept trying to mess around with that only to realize I needed a new line for each if statement!

*/
