#include "add-nbo.h"
#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>
#include <cstdint>

void sum(uint8_t input1[], uint8_t input2[])
{
    uint32_t* p1 = reinterpret_cast<uint32_t*>(input1);
    uint32_t n1 = ntohl(*p1);

    uint32_t* p2 = reinterpret_cast<uint32_t*>(input2);
    uint32_t n2 = ntohl(*p2);

    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n",n1, n1, n2, n2, n1+n2, n1+n2);
}