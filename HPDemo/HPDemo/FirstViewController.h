//
//  FirstViewController.h
//  HPDemo
//
//  Created by Bernd Rabe on 19.04.13.
//  Copyright (c) 2013 RABE_IT Services. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HorizontalPickerView;

@interface FirstViewController : UIViewController
@property (weak, nonatomic) IBOutlet HorizontalPickerView *horizontalPicker;
@property (weak, nonatomic) IBOutlet UILabel *selectedRowLabel;

@end
