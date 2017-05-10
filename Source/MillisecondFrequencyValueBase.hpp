//
//  MillisecondFrequencyValueBase.hpp
//  The Lyons' Den Delay Time Calculator
//
//  Created by Joseph Lyons on 5/9/17.
//
//

#ifndef MillisecondFrequencyValueBase_hpp
#define MillisecondFrequencyValueBase_hpp

class MillisecondFrequencyValueBase
{
private:
    
protected:
    double tempo;
    
    double wholeNormal;
    double wholeDotted;
    double wholeTriplet;
    
    double halfNormal;
    double halfDotted;
    double halfTriplet;
    
    double quarterNormal;
    double quarterDotted;
    double quarterTriplet;
    
    double eighthNormal;
    double eighthDotted;
    double eighthTriplet;
    
    double sixteenthNormal;
    double sixteenthDotted;
    double sixteenthTriplet;
    
    double thirtySecondNormal;
    double thirtySecondDotted;
    double thirtySecondTriplet;
    
    double sixtyFourthNormal;
    double sixtyFourthDotted;
    double sixtyFourthTriplet;
    
    double oneHundredAndTwentyEighthNormal;
    double oneHundredAndTwentyEighthDotted;
    double oneHundredAndTwentyEighthTriplet;
    
    double dotted;
    double triplet;
    
public:
    MillisecondFrequencyValueBase();
    
    double getWholeNormal();
    double getWholeDotted();
    double getWholeTriplet();
    
    double getHalfNormal();
    double getHalfDotted();
    double getHalfTriplet();
    
    double getQuarterNormal();
    double getQuarterDotted();
    double getQuarterTriplet();
    
    double getEighthNormal();
    double getEighthDotted();
    double getEighthTriplet();
    
    double getSixteenthNormal();
    double getSixteenthDotted();
    double getSixteenthTriplet();
    
    double getThirtySecondNormal();
    double getThirtySecondDotted();
    double getThirtySecondTriplet();
    
    double getSixtyFouthNormal();
    double getSixtyFouthDotted();
    double getSixtyFouthTriplet();
    
    double getOneHundredAndTwentyEighthNormal();
    double getOneHundredAndTwentyEighthDotted();
    double getOneHundredAndTwentyEighthTriplet();
};

#endif /* MillisecondFrequencyValueBase_hpp */