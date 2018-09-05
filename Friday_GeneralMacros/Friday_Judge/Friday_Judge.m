//
//  Friday_Judge.m
//  Friday_GeneralMacros
//
//  Created by 岳腾飞 on 2018/9/5.
//  Copyright © 2018年 yueFriday. All rights reserved.
//

#import "Friday_Judge.h"

@implementation Friday_Judge
+(BOOL)judgeObjectIsNull:(id)object
{
    if(object == nil){
        return YES;
    }else if([object isKindOfClass:[NSNull class]]){
        return YES;
    }else{
        return NO;
    }
}
+(BOOL)judgeIsEmptyDictionary:(NSDictionary *)judgeDictionary{
    if (![judgeDictionary isKindOfClass:[NSDictionary class]]) {
        return YES;
    }
    if (judgeDictionary.count <= 0) {
        return YES;
    }else{
        return NO;
    }
}
+(BOOL)judgeIsEmptyString:(NSString *)judgeString{
    if (![judgeString isKindOfClass:[NSString class]]) {
        return YES;
    }
    if (judgeString == nil || judgeString == NULL) {
        return YES;
    }
    if ([judgeString isKindOfClass:[NSNull class]]) {
        return YES;
    }
    if ([[judgeString stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]] length]==0) {
        return YES;
    }
    return NO;
}

+ (BOOL)judgeIsPhoneNumber:(NSString *)judgeString {
    
    // 只判断1开头，11位数字
    NSString *phoneRegex = @"1[0-9]{10}";
    NSPredicate *phoneTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", phoneRegex];
    return [phoneTest evaluateWithObject:judgeString];
    
}

//返回去除空格和换行的字符串
+ (NSString *)cutStringWithWihtespaceAndNewLine:(NSString *)sourceStr
{
    return [sourceStr stringByReplacingOccurrencesOfString:@" " withString:@""];
}
@end
