/**************************************************************************
 *  This file is part of QXmlEdit                                         *
 *  Copyright (C) 2015-2018 by Luca Bellonda and individual contributors  *
 *    as indicated in the AUTHORS file                                    *
 *  lbellonda _at_ gmail.com                                              *
 *                                                                        *
 * This library is free software; you can redistribute it and/or          *
 * modify it under the terms of the GNU Library General Public            *
 * License as published by the Free Software Foundation; either           *
 * version 2 of the License, or (at your option) any later version.       *
 *                                                                        *
 * This library is distributed in the hope that it will be useful,        *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU      *
 * Library General Public License for more details.                       *
 *                                                                        *
 * You should have received a copy of the GNU Library General Public      *
 * License along with this library; if not, write to the                  *
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,       *
 * Boston, MA  02110-1301  USA                                            *
 **************************************************************************/


#ifndef TESTELEMENT_H
#define TESTELEMENT_H

#include "testbase.h"

class TestElement : public TestBase
{
    bool testTooltip();
    bool testSingleTooltip(const QString &testCase, const int selElement, const bool expected );
    bool testHasText();
    bool testHasTextComplex();
    bool testHasTextSingle();
    bool testNotHasTextComplex();
    bool testNotHasTextSingle();
    bool testParentPath();
    bool testConfigTooltipInner(const bool setValue, const bool usePath, const bool expectedPath);
    bool testConfigTooltip();
public:
    TestElement();
    ~TestElement();

    bool testFast();
    bool testUnit();
};

#endif // TESTELEMENT_H
