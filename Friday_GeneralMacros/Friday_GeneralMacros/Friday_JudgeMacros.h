//
//  Friday_JudgeMacros.h
//  Friday_GeneralMacros
//
//  Created by 岳腾飞 on 2019/5/29.
//  Copyright © 2019 yueFriday. All rights reserved.
//

#ifndef Friday_JudgeMacros_h
#define Friday_JudgeMacros_h

/**
 判断对象是否为空

 @param Objc 判断对象
 @return 空对象 1 非空对象 0
 */
#define M_JudgeObjcNull(Objc)       Objc==nil?1:[Objc isKindOfClass:[NSNull class]]?1:0

/**
 判断字典是否为空字典

 @param Dic 判断字典
 @return 1 空字典  0 非空字典
 */
#define M_JudgeDicEmpty(Dic)        [Dic isKindOfClass:[NSDictionary class]]?Dic.count>0?0:1:1

/**
 判断字符串是否为空

 @param String 判断字符串
 @return 1 空字符串 0 非空字符串
 */
#define M_JudgeStringEmpty(String)  String==nil?1:String==NULL?1:[String isKindOfClass:[NSNull class]]?1:[[String stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]] length]==0?1:[String isKindOfClass:[NSString class]]?0:1

#endif /* Friday_JudgeMacros_h */
