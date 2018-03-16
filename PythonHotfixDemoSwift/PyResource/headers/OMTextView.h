//
//  OMTextView.h
//  LarvataPyHotFix
//
//  Created by Kao Ming-Hsiu on 2018/3/8.
//  Copyright © 2018年 Kao Ming-Hsiu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OMTextColorTheme.h"

@interface OMTextView : UIView

@property (nonatomic, retain) OMTextColorTheme *colorTheme;
@property (nonatomic, retain) OMTextColorTheme *inactiveColorTheme;

@end
