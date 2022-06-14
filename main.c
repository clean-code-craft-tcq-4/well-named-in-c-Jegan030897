#include <stdio.h>
#include <assert.h>

int main() {
    testPairNumberToColorCode(4, WHITE, BROWN);
    testPairNumberToColorCode(5, WHITE, SLATE);

    testColorCodeToPairNumber(BLACK, ORANGE, 12);
    testColorCodeToPairNumber(VIOLET, SLATE, 25);

    return 0;
}
