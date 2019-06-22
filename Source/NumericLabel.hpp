//
//  NumericLabel.hpp
//  The Lyons' Den Delay Time Calculator - App
//
//  Created by Joseph Lyons on 6/22/19.
//  Copyright © 2019 The Lyons' Den. All rights reserved.
//

#ifndef NumericLabel_hpp
#define NumericLabel_hpp

#include "../JuceLibraryCode/JuceHeader.h"

class NumericLabel: public Label
{
private:
public:
    NumericLabel(const std::string& labelName) : Label(labelName) {};
    virtual TextEditor* createEditorComponent() override;
};

#endif /* NumericLabel_hpp */
