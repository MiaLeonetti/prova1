#include "info.h"
#include <stdio.h>
#include <stdlib.h>

int getInfo(char code[], char* info){
    if(rand() % 2 == 0)
    {
            sprintf(info, "%s", "Quadro molto bello!");
    }
    else
    {
        sprintf(info, "%s", "Statua molto brutta");
    }
    return 1;
}
