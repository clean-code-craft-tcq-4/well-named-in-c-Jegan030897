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
    return colorPair;
}

int GetPairNumberFromColorCode(const ColorPair* colorCode) {
    return colorCode->majorColorCode * numberOfMinorColors + colorCode->minorColorCode + 1;
}
