//
//  ZIKTimeService.h
//  ZIKRouterDemo
//
//  Created by zuik on 2017/8/9.
//  Copyright © 2017 zuik. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZIKTimeServiceInput.h"

@interface ZIKTimeService : NSObject <ZIKTimeServiceInput, EasyTimeServiceInput1, EasyTimeServiceInput2, EasyTimeServiceInput3>

+ (instancetype)sharedInstance;
- (NSString *)currentTimeString;

@end
