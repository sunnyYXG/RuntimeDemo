//
//  TestClass+Category.h
//  RuntimeDemo
//
//  Created by rongyun on 2017/7/5.
//  Copyright © 2017年 YXGang. All rights reserved.
//

#import "TestClass.h"

@interface TestClass (Category)

@property (nonatomic, copy) NSString *categroyProperty;

- (void)categoryClassMethod;

- (void)categoryMethod;

@end
