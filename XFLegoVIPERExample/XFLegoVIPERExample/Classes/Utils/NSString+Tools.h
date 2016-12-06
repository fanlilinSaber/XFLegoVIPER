//
//  NSString+Tools.h
//
//
//  Created by yizzuide on 16-8-21.
//  Copyright (c) 2016年 yizzuide. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (Tools)

/**
 *  计算当前字符串显示所需的实际frame
 */
- (CGRect)textRectWithSize:(CGSize)size attributes:(NSDictionary *)attributes;

@end
