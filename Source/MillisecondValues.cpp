//
//  MillisecondValues.cpp
//  Delay Time Calculator
//
//  Created by Joseph Lyons on 4/14/17.
//
//

#include "MillisecondValues.hpp"

void MillisecondValues::calculateMillisecondValues(const double &input)
{
    tempo = input;
    
    // quarterNormal value must be calculated first, since other values depend on it
    quarterNormal                    = 60000 / tempo;
    
    wholeNormal                      = quarterNormal * 4;
    wholeDotted                      = wholeNormal * dotted;
    wholeTriplet                     = wholeNormal * triplet;
    
    halfNormal                       = quarterNormal * 2;
    halfDotted                       = halfNormal * dotted;
    halfTriplet                      = halfNormal * triplet;
    
    // quarterNormal
    quarterDotted                    = quarterNormal * dotted;
    quarterTriplet                   = quarterNormal * triplet;
    
    eighthNormal                     = quarterNormal / 2;
    eighthDotted                     = eighthNormal * dotted;
    eighthTriplet                    = eighthNormal * triplet;
    
    sixteenthNormal                  = quarterNormal / 4;
    sixteenthDotted                  = sixteenthNormal * dotted;
    sixteenthTriplet                 = sixteenthNormal * triplet;
    
    thirtySecondNormal               = quarterNormal / 8;
    thirtySecondDotted               = thirtySecondNormal * dotted;
    thirtySecondTriplet              = thirtySecondNormal * triplet;
    
    sixtyFourthNormal                = quarterNormal / 16;
    sixtyFourthDotted                = sixtyFourthNormal * dotted;
    sixtyFourthTriplet               = sixtyFourthNormal * triplet;
    
    oneHundredAndTwentyEighthNormal  = quarterNormal / 32;
    oneHundredAndTwentyEighthDotted  = oneHundredAndTwentyEighthNormal * dotted;
    oneHundredAndTwentyEighthTriplet = oneHundredAndTwentyEighthNormal * triplet;
}