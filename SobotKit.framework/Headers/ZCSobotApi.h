//
//  ZCSobotApi.h
//  SobotKit
//
//  Created by zhangxy on 2022/8/29.
//

#import <Foundation/Foundation.h>
#import "SobotClientBaseController.h"
#import <SobotChatClient/SobotChatClient.h>
#import <SobotCommon/SobotCommon.h>
#import "ZCKitInfo.h"
#import "ZCUICore.h"

NS_ASSUME_NONNULL_BEGIN

@interface ZCSobotApi : NSObject

/** 初始化
 @param appkey 智齿appkey(如果是电商版本，请填写自己公司的APPKEY),默认SaaS平台域名为:https://api.sobot.com
 @param resultBlock 初始化结果回调
 */
+(void)initSobotSDK:(NSString *) appkey result:(void (^)(id object))resultBlock;


/** 初始化
 @param appkey 智齿appkey(如果是电商版本，请填写自己公司的APPKEY)
 @param apiHost
 * 默认SaaS平台域名为:https://api.sobot.com
 * 如果您是腾讯云服务，请设置为：https://www.soboten.com
 * 如果您是本地化部署，请使用你们自己的部署的服务域名
 @param resultBlock 初始化结果回调
 */
+(void)initSobotSDK:(NSString *) appkey host:(NSString *) apiHost result:(void (^)(id object))resultBlock;



/// 主动获取访客信息，必须配置了appkey和partnerid以后调用
/// @param resultBlock resultBlock description
/// code = 0，成功，可直接进入使用
+(void)getVisitorConfigInfo:(void (^)(id object,int code))resultBlock;


/// 启动聊天页面，简单处理
/// @param info 自定义UI属性
/// @param byController  启动的页面
/// @param pageClick 页面当前状态
+ (void)openZCChat:(ZCKitInfo *) info
            with:(UIViewController *) byController
       pageBlock:(void (^)(id object,ZCPageStateType type))pageClick;



/// 点击链接拦截 帮助中心、留言、聊天、留言记录
/// @param messagelinkBlock 获取到链接，如果返回 YES 则拦截
+(void)setMessageLinkClick:(BOOL (^)(ZCLinkClickType type,NSString *linkUrl,id _Nullable object))messagelinkBlock;


/// 点击拦截 小程序事件
/// @param appletBlock 获取到的参数对象
+(void)setAppletClickBlock:(BOOL(^)(SobotChatMessage *_Nonnull))appletBlock;

// 点击拦截留言，跳转到用户自己的留言页面
+(void)customLeavePageClickBlock:(BOOL(^)(NSDictionary *dict))leavePageBlock;

/// 拦截留言事件，如果实现该方法，SDK内部不在处理留言事件，用户可以跳转到自己的留言页面
/// @param leavePageBlock 获取到的参数对象
+(void)setCustomLeavePageBlock:(BOOL(^)(NSDictionary * dict))leavePageBlock;

/// 点击返回功能事件监听，使用setFunctionClickListener替换
/// @param backBlock id当前viewcontroller，type：帮助中心、留言、聊天、会话列表
+(void)setZCViewControllerBackClick:(void (^)(id currentVC,ZCPageCloseType type))backBlock;

/// 包含（留言返回、客服服务中心返回、电商消息中心返回、聊天返回、点击电话按钮）
/// 点击返回功能事件监听, 替换setZCViewControllerBackClick方法，和其他平台统一函数名
/// @param backBlock 点击事件回调
+(void)setFunctionClickListener:(void (^)(id currentVC,ZCPageCloseType type))backBlock;



// 打开客户中心页面
+ (void)openZCServiceCenter:(ZCKitInfo *) info
                         with:(UIViewController *) byController
                  onItemClick:(void (^)(SobotClientBaseController *object))itemClickBlock;


// 打开消息中心页面
+ (void)openZCChatListView:(ZCKitInfo *)info with:(UIViewController *)byController onItemClick:(void (^)(SobotClientBaseController *object,ZCPlatformInfo *info))itemClickBlock;

/**
直接打开留言页面

@param showRecored  是否选中留言记录，0不选择，默认功能，1仅显示留言记录，2默认选中留言记录,可切换到留言
@param byController 当前执行跳转的VC           not null
@param CloseBlock 留言点击返回时间 code = 0 ,正常关闭， ，其他情况发送错误 如获取不到模版
*/
+ (void)openLeave:(int )showRecored kitinfo:(ZCKitInfo *)kitInfo with:(UIViewController *)byController onItemClick:(void (^)(NSString *msg,int code))CloseBlock;

// 打开留言记录详情页面
+(void)openRecordDetail:(NSString *)ticketId viewController:(UIViewController *) byController;

// 打开webview页面
//+(void)openWebView:(NSString*)url viewController:(UIViewController *)byController;

// 获取当前企业id
+(NSString *)getCommanyId;

// 发送位置
+ (void)sendLocation:(NSDictionary *)locations resultBlock:(void (^)(NSString *msg,int code))ResultBlock;

// 发送文字消息
+ (void)sendTextToUser:(NSString *)textMsg resultBlock:(void (^)(NSString *msg,int code))ResultBlock;

/// 发送消息给人工
/// @param textMsg  消息内如，如果是视频、图片、音频、文件时，请传本地图片路径
/// @param msgType  0, //文本   1, //图片  4, // 文件   3, // 视频
/// @param richType
///   0,//-富文本 1, //多轮 2, // 位置 3, // 商品卡片 4, // 订单 6, // 小程序卡片 17,// 文章 20,// 通用卡片
/// @param ResultBlock 发送结果 code == 0表示已发送
+ (void)sendMessageToUser:(NSString *)textMsg type:(NSInteger ) msgType richType:(NSInteger) richType resultBlock:(nonnull void (^)(NSString *, int code))ResultBlock;


//// 发送订单卡片
+ (void)sendOrderGoodsInfo:(ZCOrderGoodsModel *)orderGoodsInfo resultBlock:(void (^)(NSString *msg,int code))ResultBlock;
//
//// 发送商品卡片
+ (void)sendProductInfo:(ZCProductInfo *)productInfo resultBlock:(void (^)(NSString *msg,int code))ResultBlock;

// 给机器人发送消息
+ (void)sendTextToRobot:(NSString *)textMsg;



/// 发送自定义卡片到会话记录，以系统的方式推荐给客户
/// - Parameters:
///   - customCard: 要发送的卡片对象
///   - ResultBlock: 结果
+ (void)sendCustomCardToRecord:(SobotChatCustomCard *)customCard resultBlock:(nonnull void (^)(NSString * _Nonnull, int))ResultBlock;


/// 发送自定义卡片给聊天对象， 正常聊天消息
/// @param customCard 要发送的卡片对象
/// @param ResultBlock 结果
+ (void)sendCustomCardToChat:(SobotChatCustomCard *)customCard resultBlock:(nonnull void (^)(NSString * _Nonnull, int))ResultBlock;


///同步用户信息，如果没有建立会话，会默认建立一个新会话（同openZCChat）
/// @param ResultBlock
///  msg 操作结果说明，code=0成功，code==1失败
+ (void)synchronizationInitInfoToSDK:(void (^)(NSString *msg,int code))ResultBlock;

// 转人工自定义
+ (void)connectCustomerService:(SobotChatMessage *)message KitInfo:(ZCKitInfo*)uiInfo ZCTurnType:(NSInteger)turnType;


/// 获取最新回复
/// @param partnerid  用户id
/// @param ResultBlock code=1返回成功，
/// dict :data:items:[{(ticketId(工单id),ticketTitle(工单标题),replyContent(回复内容),replyTime(回复时间),customerId(客户id),serviceNick(客服昵称）}]
+ (void)getLastLeaveReplyMessage:(NSString *) partnerid resultBlock:(void (^)(NSDictionary *dict,NSMutableArray *arr,int code))ResultBlock;



/// 发送本地推送
/// @param message  消息内容
/// @param userInfo 参数
+(void)postLocalNotification:(NSString *)message dict:(NSDictionary *) userInfo;

// 获取 SDK 版本号
+ (NSString *)getVersion;

// 获取渠道信息
+ (NSString *)getChannel;

// 显示日志信息 默认不显示
+ (void)setShowDebug:(BOOL)isShowDebug;



/// 根据手机时区，自动适配
/// @param autoMatchTimeZone  默认NO，不自动切换
+(void)setAutoMatchTimeZone:(BOOL) autoMatchTimeZone;

/**
*   获取对应商户客服是否正在和用户聊天
*   appkey：商户id   uid： ZCPlatformInfo 类中的uid
**/
+(BOOL)getPlatformIsArtificialWithAppkey:(NSString *)appkey Uid:(NSString*)uid;


+(void)backgroundInitSDK:(void (^)(NSString *,int code))ResultBlock;

//
+ (NSString *)getSystem;

// 获取当前app的版本号
+ (NSString *)getAppVersion;

// 获取手机型号
+ (NSString *)getIPhoneType;

// 获取当前集成的app名称
+ (NSString *)getAppName;

// 获取用户的 UUID
+ (NSString *)getUserUUID;

// 添加异常统计
+ (void)setZCLibUncaughtExceptionHandler;

// 读取日志文件内容 保存最近的7天
+ (NSString *)readLogFileDateString:(NSString *) dateString;


/// 关闭通道，清理内存，退出智齿客户 移除推送
/// @param isClosePush YES 关闭push；NO 离线用户，但是可以收到push推送
+ (void)outCurrentUserZCLibInfo:(BOOL) isClosePush;



// 获取最后一条消息
+ (NSString *)readLastMessage;


/// 查询用户最后一条聊天记录
/// @param resultBlock 会返回2次，第一次为本地缓存，第二次同步接口结果，必须保证有cid的前提才能获取到
///  info：最后一条消息内容，message：内部使用消息体(不用)，code =0 本地，=1接口结果，其它为异常
+(void ) getLastMessageInfo:(void (^)(ZCPlatformInfo *info,SobotChatMessage *message, int code))resultBlock;

// 检查当前消息通道是否建立，没有就重新建立
+ (void)checkIMConnected;

// 关闭当前消息通道，使其不再接受消息
+ (void)closeIMConnection;

// 清空用户下的所有未读消息(本地清空)
+ (void)clearUnReadNumber:(NSString *) partnerid;

// 获取未读消息数
+ (int)getUnReadMessage;

// 获取最后一条消息
+(NSString *)getLastMessage;


/// 从服务端同步语言文件
/// @param language  要同步的语言，如果本地bundle中已存在不会下载，en_lproj,zh-Hans_lproj
/// @param isReWrite  如果已经下载过了是否重复下载
+(void)synchronizeLanguage:(NSString *) language write:(BOOL) isReWrite result:(void (^)(NSString *message,int code))ResultBlock;;


/// 获取当前语言文件名称
+(NSString *)getCurLanguagePreHeader;

// 测试多语言是否有效，key 参见zh-Hans_lproj中获取
+(NSString *)checkZCSTLocalString:(NSString *)key;


/// md5字符串
/// @param sign 要转换的字符串
+(NSString *)zcMd5Sign:(NSString *) sign;

// 获取当前时间戳(毫秒)
+(NSString *)zcGetCurrentTimes;

// 关闭智齿页面
+(void)closeSobotPage;

@end

NS_ASSUME_NONNULL_END
