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

/**
 弱引用 可以直接使用weakself.
 */
#define M_FunWeakSelf(type)     __weak typeof(type) weak##type = type;
#define M_FunStrongSelf(type)   __strong typeof(type) type = weak##type;

/**
 GCD OnceBlock  只运行一次
 */
#define M_FunGCDOnceBlock(onceBlock) static dispatch_once_t onceToken; dispatch_once(&onceToken, onceBlock);


/**
 GCD 获取Main线程上运行
 */
#define M_FunGCDMainBlock(mainQueueBlock) dispatch_async(dispatch_get_main_queue(), mainQueueBlock);


/**
 GCD 开启异步线程
 */
#define M_FunGCDAsyncGlobal(globalQueueBlock) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), globalQueueBlock);

#endif /* Friday_Function_h */
