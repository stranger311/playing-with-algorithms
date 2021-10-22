#include <stdlib.h>

int LinearSerach(int items[],int len,int key)
{
    for(int i = 0; i < len; i++) {

        if(items[i] == key){

            return i;

        }
    }

    return -1;
}

