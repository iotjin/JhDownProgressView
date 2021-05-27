//
//  JhDownProgressView.h
//  PersonalWage
//
//  Created by Jh on 2018/12/3.
//  Copyright © 2018 Jh. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, JhDownProgressStyle) {
    /** 百分百和文字 默认 */
    JhStylePercentAndText = 0,
    /** 百分百和圆环 */
    JhStylePercentAndRing,
    /** 圆环 */
    JhStyleRing,
    /** 扇形 */
    JhStyleSector,
    /** 长条形 */
    JhStyleRectangle,
    /** 球 */
    JhStyleBall,
};


@interface JhDownProgressView : UIView

/** 下载进度,内部按1.0计算  */
@property (nonatomic, assign) CGFloat Jh_progress;

/** 宽度 默认10  */
@property (nonatomic, assign) CGFloat Jh_progressWidth;

/** 进度条View背景颜色  */
@property(nonatomic,strong) UIColor *Jh_progressViewBgColor;

/** 进度条颜色  */
@property(nonatomic,strong) UIColor *Jh_progressBarColor;

@property (nonatomic, assign) JhDownProgressStyle Jh_downProgressStyle;

/** 创建指定样式的下载进度条  */
+ (id)showWithStyle:(JhDownProgressStyle )viewStyle;

@end

NS_ASSUME_NONNULL_END


/**

 JhDownProgressView *progressView = [JhDownProgressView showWithStyle:JhStylepercentAndText];
 [self.view addSubview:progressView];
 
 CGFloat progressValue =  1.0 *progress.completedUnitCount/progress.totalUnitCount;
 NSLog(@" precent %f ",precent);
 progressView.Jh_progress = progressValue;
 
 */

