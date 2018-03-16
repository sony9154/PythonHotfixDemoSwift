//
//  PAEExtensionContext.h
//  LarvataPyHotFix
//
//  Created by Kao Ming-Hsiu on 2018/3/8.
//  Copyright © 2018年 Kao Ming-Hsiu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PAEExtensionContext : NSObject

@property (retain) UIViewController *rootViewController;
@property (retain) UIApplication *app;
+ (instancetype)sharedContext;

@end
