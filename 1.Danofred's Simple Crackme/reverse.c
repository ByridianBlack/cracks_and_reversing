
#include <stdio.h>
#include <string.h>

void generator(){


    int key = 0x58;
    char buffer[25];

    char alphabet[25] = "abcdefghijklmnopqrstuvwxy";

    for (int i = 0; ; ++i ){
        if (5 <= i){
            break;
        }

        int index = (alphabet[i] ^ 88) % (25);
        printf("%c\n", alphabet[index]);
        // buffer[i] = alphabet[index];
    }
    // printf("%s\n", buffer);
}

int main(){

    generator();

}