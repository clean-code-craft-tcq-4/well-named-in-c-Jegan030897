#include "cableColorCode.h"

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

void ColorCodeToString(const ColorPair* colorCode, char* buffer) {
    sprintf(buffer, "%s %s", MajorColorNames[colorCode->majorColorCode], MinorColorNames[colorCode->minorColorCode]);
}

ColorPair GetColorCodeFromPairNumber(int pairNumber) {
    ColorPair colorCode;
    int zeroBasedPairNumber = pairNumber - 1;
    colorCode.majorColorCode = (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorCode.minorColorCode = (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorCode;
}

int GetPairNumberFromColorCode(const ColorPair* colorCode) {
    return colorCode->majorColorCode * numberOfMinorColors + colorCode->minorColorCode + 1;
}

void PrintColorCodeReferenceManual(void)
{
    int majorColorCode_Index;
    int minorColorCode_Index;
    int pairNumber = 1;
    
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
}
