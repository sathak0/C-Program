//output = 101 121 123 210 212 232 234 321 323 343 345 432 434 454 456 

#include<stdio.h>
#include<stdbool.h>
void number(int n){
    int start = 0, end = 0, middle = 0, m = n;
    bool a, b;
    
    end = n % 10;         
    n = n / 10;
    middle = n % 10;      
    n = n / 10;
    start = n % 10;       
    

    a = (middle == start + 1 || middle == start - 1);
    b = (middle == end + 1 || middle == end - 1);
    
    if (a && b) {
        printf("%d ", m);
    }
}


int main() {
    for(int i=100;i<500;i++){
        number(i);
    }
    return 0;
}
