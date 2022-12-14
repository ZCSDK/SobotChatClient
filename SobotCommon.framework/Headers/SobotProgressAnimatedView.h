//
//  SobotProgressAnimatedView.h
//  SobotProgressHUD, https://github.com/SobotProgressHUD/SobotProgressHUD
//
//  Copyright (c) 2017-2019 Tobias Tiemerding. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SobotProgressAnimatedView : UIView

@property (nonatomic, assign) CGFloat radius;
@property (nonatomic, assign) CGFloat strokeThickness;
@property (nonatomic, strong) UIColor *strokeColor;
@property (nonatomic, assign) CGFloat strokeEnd;

@end
