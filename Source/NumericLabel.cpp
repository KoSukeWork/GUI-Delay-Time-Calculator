//
//  NumericLabel.cpp
//  The Lyons' Den Delay Time Calculator - App
//
//  Created by Joseph Lyons on 6/22/19.
//  Copyright © 2019 The Lyons' Den. All rights reserved.
//

#include "NumericLabel.hpp"

TextEditor* NumericLabel::createEditorComponent()
{
    TextEditor* const ed = Label::createEditorComponent();
    ed->setInputRestrictions(7, "0123456789.");
    return ed;
}
