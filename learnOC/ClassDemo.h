//
//  ClassDemo.h
//  learnOC
//
//  Created by ruoyi.sjd on 2017/1/27.
//  Copyright © 2017年 ruoyi.sjd. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface ClassDemo : NSObject
@property (strong, nonatomic) NSString * contents;
@property (nonatomic) BOOL chosen;
@property (nonatomic) BOOL matched;
- (void)sayHello;
@end
