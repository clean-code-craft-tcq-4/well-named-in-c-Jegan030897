#include "cableColorCode.h"

void PrintColorCodeReferenceManual(void)
{
    int majorColorCode_Index;
    int minorColorCode_Index;
    int pairNumber = 1;
    
    printf("-----------------------------------\n");
    printf("25-pair color code reference manual\n");
    printf("-----------------------------------\n");
    printf("| Pair no.| Major color | Minor color |\n");
    printf("-----------------------------------\n");
    for(majorColorCode_Index = 0; majorColorCode_Index < numberOfMajorColors; majorColorCode_Index++)
    {
       for(minorColorCode_Index = 0; minorColorCode_Index < numberOfMinorColors; minorColorCode_Index++) 
       {
           printf("| %d | %s | %s |\n",pairNumber++, MajorColorNames[majorColorCode_Index], MinorColorNames[minorColorCode_Index]);
       }
        printf("-----------------------------------\n");
    }
    printf("-----------------------------------\n");
}
