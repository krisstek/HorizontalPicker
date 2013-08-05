//  The MIT License (MIT)
//  Copyright (c) 2011-2013 <RABE_IT Services>
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//  IN THE SOFTWARE.
//
//  HPickerDefinitions.h
//  HorizontalPicker
//
//  Created by Bernd Rabe on 02.05.11.
//  Copyright 2011-2013 RABE_IT Services. All rights reserved.
//

#ifndef __HorizontalPicker
#define __HorizontalPicker

#define DEBUG_HP             0   // forces some views to draw a 1 pixel border

#define PICKER_HEIGHT        44

#define kLabelPadding        10. // to have some space between the UILabel object
#define kTopFrameXOffset     10. // defines the boundaries of the inner frame
#define kTopFrameYOffset     5.  // defines the boundaries of the inner frame
#define kCornerRadius        9.  // defines the boundaries of the inner frame
#define kScrollViewPadding   1.  // the scrollview is a bit smaller so that the black background shines through
#define kMaxLabelWidthFactor 0.5 // a label will be cropped and filled with 3 dots at the end if it exceeds bounds.size.width * Factor

#define kTVReuseID_HPCollectionViewStyle    @"HorizontalPickerStyle"

#endif