#include <stdio.h>

int forma(int b, int h){

    if(b == h){
        return 1;
    }
    else if(b != h){
        return 0;
    }

}

int main(){

    int b, h;

    scanf("%d %d", &b, &h);

    printf("%d\n", forma(b, h));

    return 0;
}
