//
//  AnimationButton.h
//  CutHand
//
//  Created by hztuen on 2017/4/17.
//  Copyright © 2017年 cesar. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AnimationButton;
@protocol AnimationButtonDelegate <NSObject>
/**
 *  动画开始回调
 *
 *  @param AnimationButton self
 */
-(void)AnimationButtonDidStartAnimation:(AnimationButton*)AnimationButton;

/**
 *  动画已经结束时回调
 *
 *  @param AnimationButton self
 */
-(void)AnimationButtonDidFinishAnimation:(AnimationButton *)AnimationButton;

/**
 *  动画将要结束时回调  即 结束动画未执行时
 *
 *  @param AnimationButton self
 */
-(void)AnimationButtonWillFinishAnimation:(AnimationButton *)AnimationButton;

@end
@interface AnimationButton : UIButton
/**
 *  创建对象
 *
 *  @return 对象
 */
+(instancetype)buttonWithFrame:(CGRect)frame;
/**
 *  边缘色
 *
 */
-(void)setborderColor:(UIColor*)color;
/**
 *  边缘宽度
 *
 */
-(void)setborderWidth:(CGFloat)width;
/**
 *  手动调用执行动画  一般在 button 的响应里调用  调用后会走代理进行回调
 */
-(void)startAnimation;
/**
 *  手动停止动画 停止前和停止后会走代理回调
 */
-(void)stopAnimation;
/**
 *  代理对象
 */
@property (nonatomic, weak) id <AnimationButtonDelegate> delegate;


@end
