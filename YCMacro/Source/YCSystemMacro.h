//
//  YCSystemMacro.h
//  YCMacro
//
//  Created by 安跃超 on 2018/12/3.
//  Copyright © 2018年 安跃超. All rights reserved.
//

#ifndef YCSystemMacro_h
#define YCSystemMacro_h


#pragma mark- =============================系统控件默认高度=============================
#define kStatusBarHeight        (20.f)//顶部状态栏
#define kTopBarHeight           (44.f)//顶部导航栏
#define kBottomBarHeight        (49.f)//底部 tabBar
#define kCellDefaultHeight      (44.f)//默认Cell高度
#pragma mark- ==============================默认系统尺寸==============================
// 统一通知
#define YCNoteCenter [NSNotificationCenter defaultCenter]
//
#define YCSharedApplication [UIApplication sharedApplication]
// NSUesrDefaults
#define YCSharedUserDefault [NSUserDefaults standardUserDefaults]
// NSFileManger
#define YCFileManager [NSFileManager defaultManager]

//
#define kDevice [UIDevice currentDevice]
// 屏幕物理Bounds
#define kScreenNativeBounds [UIScreen mainScreen].nativeBounds
// 屏幕bounds
#define kScreenBounds [UIScreen mainScreen].bounds
// 屏幕比例
#define kScreenSacle [UIScreen mainScreen].scale
// 屏幕物理比例
#define kScreenNativeScale [UIScreen mainScreen].nativeScale
// 屏幕宽度
#define kScreenW [UIScreen mainScreen].bounds.size.width
// 屏幕高度
#define kScreenH [UIScreen mainScreen].bounds.size.height
// 屏幕尺寸
// 主window
#define kWindow [[[UIApplication sharedApplication] delegate] window]
#define makeKeyWindow [UIApplication sharedApplication].keyWindow


#pragma mark- ==============================系统方法================================
// 当前版本
#define FSystemVersion          ([[[UIDevice currentDevice] systemVersion] floatValue])
#define DSystemVersion          ([[[UIDevice currentDevice] systemVersion] doubleValue])
#define SSystemVersion          ([[UIDevice currentDevice] systemVersion])

// 是否IOS6
#define isIOS6                  ([[[UIDevice currentDevice]systemVersion]floatValue] < 7.0)
// 是否IOS7
#define isIOS7                  ([[[UIDevice currentDevice]systemVersion]floatValue] >= 7.0)
//是否IOS8
#define isIOS8                  ([[[UIDevice currentDevice]systemVersion]floatValue] >=8.0)
//是否IOS9
#define isIOS9                  ([[[UIDevice currentDevice]systemVersion]floatValue] >=9.0)
//是否IOS10
#define isIOS10                  ([[[UIDevice currentDevice]systemVersion]floatValue] >=10.0)
//是否IOS11
#define isIOS11                  ([[[UIDevice currentDevice]systemVersion]floatValue] >=11.0)
// 是否iPad
#define isPad                   (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

///获取设备
#define iPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone6_Plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPad [[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad



#endif /* YCSystemMacro_h */
