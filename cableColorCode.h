#include <stdio.h>
#include <assert.h>

#define MAX_COLORPAIR_NAME_CHARS 16

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
    enum MajorColor majorColorCode;
    enum MinorColor minorColorCode;
} ColorPair;

void ColorCodeToString(const ColorPair* colorCode, char* buffer);
ColorPair GetColorCodeFromPairNumber(int pairNumber);
int GetPairNumberFromColorCode(const ColorPair* colorCode);
void testPairNumberToColorCode(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testColorCodeToPairNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
