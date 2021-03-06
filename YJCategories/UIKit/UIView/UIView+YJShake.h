//
//  UIView+YJShake.h
//  YJCategoriesGather
//
//  Created by YJHou on 2016/2/18.
//  Copyright © 2016年 侯跃军 houmanager@Hotmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>

/** 摇晃的方向 */
typedef NS_ENUM(NSInteger, YJShakeDirectionType) {
    YJShakeDirectionHorizontal = 0,  // 水平
    YJShakeDirectionVertical         // 竖直
};

@interface UIView (YJShake)

/** 默认参数配置Shake */
- (void)yj_shakeDefaultHorizontal;

/** 设置水平摇晃的 次数times和幅度offset Block */
- (void)yj_shakeHorizontalWithTimes:(int)times offset:(CGFloat)offset completion:(void(^)())completion;

/** 晃动 相关参数配置 */
- (void)yj_shakeWithTimes:(int)times offset:(CGFloat)offset speed:(NSTimeInterval)speed shakeDirection:(YJShakeDirectionType)shakeDirection completion:(void (^)(void))completion;

@end
