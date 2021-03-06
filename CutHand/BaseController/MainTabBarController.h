//
//  MainTabBarController.h
//  CutHand
//
//  Created by hztuen on 2017/4/13.
//  Copyright © 2017年 cesar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ADTabBarSource.h"

@interface MainTabBarController : UITabBarController

/**
 传入BarSource创建Tabbar
 不包含UINavigationController
 @param dataSoucre tabbar数据源
 */
- (void)tabBarSetDataSource:(ADTabBarSource *)dataSoucre;
/**
 通过self.selectIndex改变tabbar当前controller时调用
 类似 self.selectIndex = index 功能
 @param index 想要选择某个controller
 */
- (void)changeSelectIndex:(NSInteger)index;

@end
