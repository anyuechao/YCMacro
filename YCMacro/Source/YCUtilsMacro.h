//
//  YCUtilsMacro.h
//  YCMacro
//
//  Created by 安跃超 on 2018/12/3.
//  Copyright © 2018年 安跃超. All rights reserved.
//

#ifndef YCUtilsMacro_h
#define YCUtilsMacro_h

/**
 *  本类放一些方便使用的宏定义
 */
//=========================================================================================
#pragma mark- =====================常用 UI 控件方法=====================

// 统一转场动画时长
#define kViewTransDuration 0.5
// CGSize最大值
#define kCGSize_MAXFLOAT CGSizeMake(MAXFLOAT, MAXFLOAT)
//设置颜色
#define RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a];
// View 圆角
#define ViewRadius(View, Radius)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES]

//弱引用/强引用
//默认 self
#define YC_WEAK_SELF __typeof(&*self) __weak weakSelf = self
#define YC_STRONG_SELF __typeof(&*self) __strong strongSelf = weakSelf
//非默认
#define kWeakSelf(type)   __weak typeof(type) weak##type = type;
#define kStrongSelf(type) __strong typeof(type) type = weak##type;

// 单例宏定义h文件
#define YCSINGLETON_FOR_HEADER(className) \
\
+ (className *)shared;

// 单例宏定义m文件
#define YCSINGLETON_FOR_CLASS(className) \
\
+ (className *)shared { \
static className *shared = nil; \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
shared = [[self alloc] init]; \
}); \
return shared; \
}
// 将对象转为字符串
#define Obj2Str(class) [NSString stringWithFormat:@"%@", class]

//1.iPhone4分辨率320x480，像素640x960，@2x
//2.iPhone5分辨率320x568，像素640x1136，@2x
//3.iPhone6分辨率375x667，像素750x1334，@2x
//4.iPhone6 Plus分辨率414x736，像素1242x2208，@3x
///适配以6P 为基准
#define YCRealValueWidth(value) ((value)/414.0f*[UIScreen mainScreen].bounds.size.width)
#define YCRealValueHeight(value) ((value)/736.0f*[UIScreen mainScreen].bounds.size.height)

//=========================================================================================
#pragma mark- =====================常用字体、颜色=====================
///正常字体
#define H30 [UIFont systemFontOfSize:30]
#define H29 [UIFont systemFontOfSize:29]
#define H28 [UIFont systemFontOfSize:28]
#define H27 [UIFont systemFontOfSize:27]
#define H26 [UIFont systemFontOfSize:26]
#define H25 [UIFont systemFontOfSize:25]
#define H24 [UIFont systemFontOfSize:24]
#define H23 [UIFont systemFontOfSize:23]
#define H22 [UIFont systemFontOfSize:22]
#define H20 [UIFont systemFontOfSize:20]
#define H19 [UIFont systemFontOfSize:19]
#define H18 [UIFont systemFontOfSize:18]
#define H17 [UIFont systemFontOfSize:17]
#define H16 [UIFont systemFontOfSize:16]
#define H15 [UIFont systemFontOfSize:15]
#define H14 [UIFont systemFontOfSize:14]
#define H13 [UIFont systemFontOfSize:13]
#define H12 [UIFont systemFontOfSize:12]
#define H11 [UIFont systemFontOfSize:11]
#define H10 [UIFont systemFontOfSize:10]
#define H8 [UIFont systemFontOfSize:8]

///粗体
#define HB20 [UIFont boldSystemFontOfSize:20]
#define HB18 [UIFont boldSystemFontOfSize:18]
#define HB16 [UIFont boldSystemFontOfSize:16]
#define HB14 [UIFont boldSystemFontOfSize:14]
#define HB13 [UIFont boldSystemFontOfSize:13]
#define HB12 [UIFont boldSystemFontOfSize:12]
#define HB11 [UIFont boldSystemFontOfSize:11]
#define HB10 [UIFont boldSystemFontOfSize:10]
#define HB8 [UIFont boldSystemFontOfSize:8]

///常用颜色
#define black_color     [UIColor blackColor]
#define blue_color      [UIColor blueColor]
#define brown_color     [UIColor brownColor]
#define clear_color     [UIColor clearColor]
#define darkGray_color  [UIColor darkGrayColor]
#define darkText_color  [UIColor darkTextColor]
#define white_color     [UIColor whiteColor]
#define yellow_color    [UIColor yellowColor]
#define red_color       [UIColor redColor]
#define orange_color    [UIColor orangeColor]
#define purple_color    [UIColor purpleColor]
#define lightText_color [UIColor lightTextColor]
#define lightGray_color [UIColor lightGrayColor]
#define green_color     [UIColor greenColor]
#define gray_color      [UIColor grayColor]
#define magenta_color   [UIColor magentaColor]


#endif /* YCUtilsMacro_h */
