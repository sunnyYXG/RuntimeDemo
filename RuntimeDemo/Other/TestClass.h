//
//  TestClass.h
//  RuntimeDemo
//
//  Created by rongyun on 2017/7/5.
//  Copyright © 2017年 YXGang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TestClass : NSObject<UIWebViewDelegate>

@property (nonatomic, copy) NSString *publicProperty;

+ (void)classMethod:(NSString *)param;

- (void)publicMethod:(NSString *)param;

@end
