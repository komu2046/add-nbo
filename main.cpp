#include "add-nbo.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
        uint8_t input1[32], input2[32];
        FILE *file1, *file2;
        file1 = fopen(argv[1], "rb");
        file2 = fopen(argv[2], "rb");
        fread(input1, 1, 32, file1);
        fread(input2, 1, 32, file2);

        sum(input1, input2);

        fclose(file1);
        fclose(file2);
}