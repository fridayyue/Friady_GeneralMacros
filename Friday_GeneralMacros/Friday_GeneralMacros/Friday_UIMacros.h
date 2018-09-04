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

#pragma mark - judge
/**
 判断设备是否是横屏
 */
#define M_UILanspace    ([UIDevice currentDevice].orientation == UIDeviceOrientationLandscapeLeft || [UIDevice currentDevice].orientation == UIDeviceOrientationLandscapeRight)
/**
 判断是否是ipad设备
 */
#define M_UIIpad        ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
/**
 判断是否是iPhone设备
 */
#define M_UIIphone      ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone)
/**
 是否是4、4s的设备（指的是屏幕尺寸）
 */
#define M_UISize4       (M_UIIphone && M_UIScreenHeight < 568.0)
/**
 是否是5、5s、SE的设备（指的是屏幕尺寸）
 */
#define M_UISize5       (M_UIIphone && M_UIScreenHeight == 568.0)
/**
 是否是6、6s、7的设备（指的是屏幕尺寸）
 */
#define M_UISize6       (M_UIIphone && M_UIScreenHeight == 667.0)
/**
 是否是6、6s、7PLUS的设备（指的是屏幕尺寸）
 */
#define M_UIPlus        (M_UIIphone && M_UIScreenHeight == 736.0 || M_UIScreenWidth == 736.0) // Both orientations
/**
 是否是X的设备（指的是屏幕尺寸）
 */
#define M_UIX           (M_UIIphone && M_UIScreenHeight == 812.0 || M_UIScreenWidth == 375.0)
/*未完待续。。。谁知道苹果公司会继续出什么尺寸设备*/
#pragma mark - Size
/**
 获取屏幕的宽度

 @return 屏幕宽
 */
#define M_UIScreenWidth   [UIScreen mainScreen].bounds.size.width

/**
 获取屏幕高度

 @return 屏幕高
 */
#define M_UIScreenHeight   [UIScreen mainScreen].bounds.size.height

/**
 状态栏高度 这里的x状态栏拉高到44 为了适配
 */
#define M_UIStatusBar           M_UIX ? 44 : 20

/**
 NavgationBar的高度
 */
#define M_UINavgationBarHeight  44

/**
 传统页面顶部NavgationBar和StatusBar的高度已经对X尺寸的设备做了适配
 */
#define M_UITopBarHeight        M_UINavgationBarHeight + M_UIStatusBar

/**
 传统地步tabbar的高度 实际是49+1 有1像素的阴影线
 */
#define M_UITabbarHeight        50
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

#pragma mark - Layer

/**
 设置view的圆角，描边宽度，描边颜色 描边颜色小于0.01颜色和描边不起作用
 */
#define M_ViewBorderRadius(View, Radius, BWidth, BColor)\
        [View.layer setMasksToBounds:YES];\
        [View.layer setCornerRadius:(Radius)];\
        if(BWidth > 0.01){\
        [View.layer setBorderWidth:(BWidth)];\
        [View.layer setBorderColor:[BColor CGColor]]}

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

/**
 随机获取到一个颜色
 */
#define  M_ColorRandomC M_ColorRGB(arc4random_uniform(256)/255.0,arc4random_uniform(256)/255.0,arc4random_uniform(256)/255.0)
#endif /* Friday_UIMacros_h */
