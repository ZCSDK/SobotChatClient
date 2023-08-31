//
//  ZCSatisfactionConfig.h
//  SobotChatClient
//
//  Created by zhangxy on 2023/8/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZCSatisfactionConfig : NSObject

@property (nonatomic,assign) int isCreated;// 0,未复制，1赋值


@property (nonatomic,assign) int defaultQuestionFlag;//：“问题是否解决”默认选中状态：(0)-未解决 (1)-解决 (-1)-不选中
@property (nonatomic,assign) int defaultType;//：默认显示星级  0-5星,1-0星 / 0-10分，1-5分，2-0分，3-不选中
@property (nonatomic,assign) int isQuestionFlag;//：人工客服是否解决问题开关  1-开启 0-关闭
@property (nonatomic,assign) int isQuestionMust;//：“问题是否解决”是否为必填选项： 0-非必填 1-必填
@property (nonatomic,assign) int scoreFlag;//：星级类型 0-旧版5星级评价  1-nps评价 
@property (nonatomic,assign) int status;//：模板状态开关 0-关闭 1-开启

/**  子集 */
@property (nonatomic,strong) NSMutableArray * list;


-(id)initWithMyDict:(NSDictionary *)dict;


@end

NS_ASSUME_NONNULL_END
