#include "cableColorCode.h"

void testPairNumberToColorCode(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor)
{
    ColorPair colorCode = GetColorCodeFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorCodeToString(&colorCode, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorCode.majorColorCode == expectedMajor);
    assert(colorCode.minorColorCode == expectedMinor);
}

void testColorCodeToPairNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber)
{
    ColorPair colorCode;
    colorCode.majorColorCode = major;
    colorCode.minorColorCode = minor;
    int pairNumber = GetPairNumberFromColorCode(&colorCode);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
