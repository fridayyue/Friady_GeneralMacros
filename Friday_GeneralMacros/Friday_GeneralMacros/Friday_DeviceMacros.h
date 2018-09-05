//
//  Friday_DeviceMacros.h
//  Friday_GeneralMacros
//
//  Created by yuefriday on 2018/9/4.
//  Copyright © 2018年 yueFriday. All rights reserved.
//

#ifndef Friday_DeviceMacros_h
#define Friday_DeviceMacros_h

#pragma mark - System
/**
 当前系统的版本号 例如 9.0

 @param floatValue 版本号
 @return 当前系统的版本号
 */
#define M_SysCurrentVersion  ([[[UIDevice currentDevice] systemVersion] floatValue])

/**
 判断当前系统版本是否是iOS 7.0以上
 */
#define M_SysCurrentVAbove_7    (M_SysCurrentVersion > 7.0)?(YES):(NO)
#define M_SysCurrentVAbove_8    (M_SysCurrentVersion > 8.0)?(YES):(NO)
#define M_SysCurrentVAbove_9    (M_SysCurrentVersion > 9.0)?(YES):(NO)

/**
 当前APP的bulid号string eg.123
 */
#define M_SysBuildVersion       [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"]

/**
 当前APP的version号string eg. 1.2.3
 */
#define M_SysVersionVersion     [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

// 判断是不是iOS系统，如果是iOS系统在真机和模拟器输出都是YES
#if TARGET_OS_IPHONE
#endif

#if (TARGET_IPHONE_SIMULATOR)
// 在模拟器的情况下
#else
// 在真机情况下
#endif

#endif /* Friday_DeviceMacros_h */
