//
//  PythonInterpreter.h
//  LarvataPyHotFix
//
//  Created by Kao Ming-Hsiu on 2018/3/8.
//  Copyright © 2018年 Kao Ming-Hsiu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PythonInterpreter: NSObject

+ (id)sharedInterpreter;
- (void)run:(NSString *)script asFile:(NSString *)scriptPath;

@end
