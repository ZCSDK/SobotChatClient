//
//  SobotDragView.h
//  SobotCallSDK
//
//  Created by zhangxy on 2023/7/6.
//

#import <UIKit/UIKit.h>
#import <SobotCommon/SobotCommon.h>
NS_ASSUME_NONNULL_BEGIN

@interface SobotDragView : UIView

@property (nonatomic, strong)  void(^tapClick)(UIView  * view);


/// 显示拖拽控件到父view上
/// - Parameter superView: 如果为空自动添加到当前window上显示
-(void)showDragView:(UIView * _Nullable) superView;


/// 隐藏拖拽控件
/// - Parameter removeSuper: 是否从父类中移除
-(void)hideDragView:(BOOL) removeSuper;

-(void)onleHidDragView;

-(void)openDragView;

@property(nonatomic,strong) SobotImageView *iconImg; 
@property(nonatomic,strong) UILabel *tipLab;


@end

NS_ASSUME_NONNULL_END
