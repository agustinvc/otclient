/* The MIT License
 *
 * Copyright (c) 2010 OTClient, https://github.com/edubart/otclient
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */


#include <global.h>
#include <graphics/fonts.h>
#include <ui/uilabelskin.h>
#include <ui/uilabel.h>

void UILabelSkin::load(OTMLNode* node)
{
    UIElementSkin::load(node);
}

void UILabelSkin::apply(UIElement* element)
{
    UIElementSkin::apply(element);
    UILabel *label = static_cast<UILabel*>(element);
    label->setSize(getFont()->calculateTextRectSize(label->getText()));
}

void UILabelSkin::draw(UIElement *element)
{
    UIElementSkin::draw(element);
    UILabel *label = static_cast<UILabel*>(element);
    getFont()->renderText(label->getText(), label->getRect(), label->getAlign(), getFontColor());
}
