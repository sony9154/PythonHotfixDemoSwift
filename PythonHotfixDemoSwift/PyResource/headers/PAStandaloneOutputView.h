//
//  PAStandaloneOutputView.h
//  LarvataPyHotFix
//
//  Created by Kao Ming-Hsiu on 2018/3/8.
//  Copyright © 2018年 Kao Ming-Hsiu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PAStandaloneOutputView : UIView

@property (nonatomic, retain) UIColor *standardOutputColor;
@property (nonatomic, retain) UIColor *errorOutputColor;
@property (nonatomic, retain) OMTextView *consoleOutputTextView;
@property (nonatomic, retain) UITextField *promptTextField;
@property (nonatomic, assign) BOOL showsButtonControls;
@property (nonatomic, assign) BOOL shouldLinkifyURLs;
@property (nonatomic, copy) NSString *mainScriptPath;

@end
