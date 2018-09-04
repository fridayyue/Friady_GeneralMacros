//
//  Friday_UIMacros.h
//  General
//
//  Created by 岳腾飞 on 2018/8/29.
//  Copyright © 2018年 岳腾飞. All rights reserved.
//
/*
    UI相关的宏
 */
#ifndef Friday_UIMacros_h
#define Friday_UIMacros_h

#pragma mark - Size
/**
 获取屏幕的宽度

 @return 屏幕宽
 */
#define M_ScreenWidth   [UIScreen mainScreen].bounds.size.width

/**
 获取屏幕高度

 @return 屏幕高
 */
#define M_ScreenHeight   [UIScreen mainScreen].bounds.size.height

/**
 获取某一View的宽

 @param OneView 想要获取宽的view
 @return CGFloat类型的宽
 */
#define M_ViewFrameWidth(OneView)   OneView.frame.size.width

/**
 获取某一view的高

 @param OneView 想要获取高的view
 @return CGFloat类型的高
 */
#define M_ViewFrameHeight(OneView)   OneView.frame.size.height

/**
 获取某一view的X坐标

 @param OneView 目标view
 @return CGFloat view的x坐标
 */
#define M_ViewFrameX(OneView)   OneView.frame.origin.x

/**
 获取某一view的Y坐标

 @param OneView 目标view
 @return CGFloat view的y坐标
 */
#define M_ViewFrameY(OneView)    OneView.frame.origin.y

/**
 获取某一view的横坐标加宽度值--既view的left.y坐标

 @param SomeView 目标view
 @return CGFloat
 */
#define M_ViewFullFrameX(SomeView)   M_ViewFrameX(SomeView) + M_ViewFrameWidth(SomeView)

/**
 获取某一view的纵坐标加高度度值--既view的bottom.y坐标

 @param SomeView 目标view
 @return CGFloat
 */
#define M_ViewFullFrameY(SomeView)  M_ViewFrameY(SomeView) + M_ViewFrameHeight(SomeView)

/**
 对某一view进行centerx的修改centery不变

 @param OneView 目标view
 @param X 修改后的centerx
 @return nil
 */
#define M_ViewCenterX(OneView,X)   OneView.center = CGPointMake(X, OneView.center.y)
/**
 对某一view进行centery的修改centerx不变
 
 @param OneView 目标view
 @param Y 修改后的centery
 @return nil
 */
#define M_ViewCenterY(OneView,Y)   OneView.center = CGPointMake(OneView.center.x, Y)

#pragma mark - Color
/**
 根据RGB值来获取颜色 默认透明度为1

 @param R 红色色值
 @param G 绿色色值
 @param B 蓝色色值
 @return UIcolor类型颜色
 */
#define M_ColorRGB(R,G,B)   M_ColorRGBA(R,G,B,1.0)

/**
 根据RGB值来获取颜色

 @param R 红色色值
 @param G 绿色色值
 @param B 蓝色色值
 @param Alpha 透明度
 @return UIcolor类型颜色
 */
#define M_ColorRGBA(R,G,B,Alpha) [UIColor colorWithRed:(R)/255.0f green:(G)/255.0f blue:(B)/255.0f alpha:(Alpha)]

/**
 根据哈希色值来获取颜色 默认透明度为1

 @param Hex 哈希色值
 @return UIcolor类型颜色
 */
#define M_ColorHex(Hex)  M_ColorHexA(Hex,Alpha)

/**
 根据哈希色值来获取颜色

 @param Hex 哈希色值
 @param Alpha 透明度
 @return UIcolor类型颜色
 */
#define M_ColorHexA(Hex,Alpha) ([UIColor colorWithRed:((float)((Hex & 0xFF0000) >> 16))/255.0 green:((float)((Hex & 0xFF00) >> 8))/255.0 blue:((float)(Hex & 0xFF))/255.0 alpha:Alpha])
#endif /* Friday_UIMacros_h */
