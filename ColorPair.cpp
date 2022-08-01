#include <iostream>
#include "ColorPair.h"

    
     std::string TelCoColorCoder::ColorPair::ToString() {
         std::string colorPairStr = MajorColorNames[majorColor];
         colorPairStr += " ";
         colorPairStr += MinorColorNames[minorColor];
         return colorPairStr;
     }

    TelCoColorCoder::ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        TelCoColorCoder::MajorColor majorColor = 
            (TelCoColorCoder::MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        TelCoColorCoder::MinorColor minorColor =
            (TelCoColorCoder::MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return TelCoColorCoder::ColorPair(majorColor, minorColor);
    }
    int TelCoColorCoder::GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

