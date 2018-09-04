//
//  Friday_Function.h
//  General
//
//  Created by 岳腾飞 on 2018/8/29.
//  Copyright © 2018年 岳腾飞. All rights reserved.
//

/*函数宏 一些常用函数做的宏*/

#ifndef Friday_Function_h
#define Friday_Function_h

/**
 在DEBUG和RELEASE两种模式下输出日志
 */
#ifdef DEBUG
    #define M_Log(format, ...)  NSLog(format, ## __VA_ARGS__)
    #define M_LogStr(obj)  NSLog(@"%@",obj)
    #define M_LogFunc(obj)  NSLog(@"%s", __func__)
    #define M_DEBUG    1
#else
    #define M_Log(...)
    #define M_LogStr(obj)
    #define M_LogFunc(obj)
    #define M_DEBUG    0
#endif

#endif /* Friday_Function_h */
