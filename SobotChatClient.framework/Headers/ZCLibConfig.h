//
//  ZCLibConfig.h
//  ZCLibLib
//
//  Created by zhangxy on 15/10/22.
//  Copyright © 2015年 ZCLibLib. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SobotChatClient/ZCLibInitInfo.h>
#import <SobotCommon/SobotCommon.h>

@class ZCChatRealuateConfigInfo;

/**
 *  配置信息
 */
@interface ZCLibConfig : NSObject


/***大模型机器人 新增转人工说辞 425新增***/
// 大模型机器人转人工成功提示语
@property(nonatomic,copy) NSString *transferSuccessWord;
// 大模型机器人转人工失败提示语
@property(nonatomic,copy) NSString *transferFailureWord;
// 大模型精准话术
@property(nonatomic,copy) NSString *preciseWord;
/***大模型机器人 新增转人工说辞 end***/


// 会话结束是否推送评价开关：1-开启，0-关闭
@property(nonatomic,assign) BOOL aiAgentCommentFlag;


// 大模型机器人接口，模板id
@property (nonatomic , strong) NSString *templateId;


/**
 *  用户id
 */
@property (nonatomic , strong) NSString *uid;

@property (nonatomic , strong) NSString *pu;
@property (nonatomic , strong) NSString *puid;

@property (nonatomic , strong) NSString *equipmentId;

// 记录企业编号
//@property (nonatomic , strong) NSString *sysNumber;


/**
 *  appKey
 */
@property (nonatomic , strong) NSString *app_key;

@property(nonatomic,assign) BOOL realuateStyle;// realuateStyle 0-右侧展示 1-下方展示！机器人点踩按钮

@property(nonatomic,assign) BOOL realuateInfoFlag;// //点踩原因开关 0关闭 1开启 默认0

// 顶踩图标 0-手势 1-心形 默认0 424版本 新增大模型机器人使用
@property(nonatomic,assign) int realuateButtonStyle;

@property(nonatomic,strong) ZCChatRealuateConfigInfo *RealuateConfigInfo;// 机器人点踩配置数据
@property(nonatomic,copy) NSString *realuateConfigInfoJsonStr; // 上传接口使用json 数据
/**
 *  客服不在线标题
 */
@property (nonatomic , strong) NSString *adminNonelineTitle;

/**
 *  机器人头像logo
 */
@property (nonatomic , strong) NSString *robotLogo;

/**
 *  用户超时下线
 */
@property (nonatomic , strong) NSString *userOutWord;

/**
 *  客服欢迎语
 */
@property (nonatomic , strong) NSString *adminHelloWord;

//客服欢迎语规则，1-只显示一次，0-默认值
@property (nonatomic , assign) int      adminHelloWordCountRule;

// 是否为新用户，4.0.3新增属性，新用户首次咨询
@property (nonatomic , assign) int      isNew;

/**
 *  用户无应答提示时间
 */
@property (nonatomic , assign) int      userTipTime;

/**
 *  用户无应答提示文案
 */
@property (nonatomic , strong) NSString *userTipWord;

/**
 *  机器人欢迎语
 */
@property (nonatomic , strong) NSString *robotHelloWord;

/**
 *  客服无应答提示文案
 */
@property (nonatomic , strong) NSString *adminTipWord;

// 客服超时推送规则，1-只显示一次，0-默认值
@property (nonatomic , assign) int      serviceOutCountRule;

/**
 *  企业名称
 */
@property (nonatomic , strong) NSString *companyName;
@property (nonatomic , strong) NSString *companyLogo;

/**
 *  接入方式,1只有机器人,2.仅人工 3.智能客服-机器人优先 4智能客服-人工客服优先',
 */
@property (nonatomic , assign) int      type;

/**
 *  会话id
 */
@property (nonatomic , strong) NSString *cid;

/**
 *  公司付费状态 0试用 1免费 2永久 10都付费 11机器人付费 12人工客服付费
 */
@property (nonatomic , assign) int      companyStatus;

/**
 *  机器人昵称
 */
@property (nonatomic , strong) NSString *robotName;

/**
 *  是否是黑名单 0否 1是
 */
@property (nonatomic , assign) BOOL     isblack;

/**
 *  用户超时下线时间
 */
@property (nonatomic , assign) int      userOutTime;

/**
 *  机器人未知措辞
 */
@property (nonatomic , strong) NSString *robotUnknownWord;

/**
 *  标示
 */
@property (nonatomic , strong) NSString *token;

/**
 *  颜色代码
 */
@property (nonatomic , strong) NSString *color;

/**
 *  1 开启语音 2 关闭语音功能 3只选择机器人客服
 */
@property (nonatomic , assign) int      onORoff;

/**
 *  客服无应答提示时间
 */
@property (nonatomic , assign) int      adminTipTime;


/**
 *  是否人工服务
 */
@property (nonatomic , assign) BOOL     isArtificial;

/**
 *  评论人工，以逗号隔开
 */
@property (nonatomic , strong) NSString *manualCommentTitle;

/**
 *  评论机器人
 */
@property (nonatomic , strong) NSString *robotCommentTitle;


/**
 * 机器人引导转人工 勾选为1，默认为0 固定位置，比如1,1,1,1=直接回答勾选，理解回答勾选，引导回答勾选，未知回答勾选
 */
@property (nonatomic , strong) NSString *manualType;


/**
 * 顶踩开关 0关闭 1开启
 */
@property (nonatomic , assign) BOOL     realuateFlag;

/**
 * 点踩 转人工开关  1 开启  0关闭
 */
@property (nonatomic, assign) BOOL  realuateTransferFlag;

/**
 *realuateFlag 顶踩开关 0关闭 1开启
 留言相关 1显示 0不显示
 telShowFlag 电话是否显示
 telFlag 电话是否必填
 enclosureShowFlag 附件是否显示
 enclosureFlag 附件是否必填  0 可选 1 必填
 emailFlag 邮箱是否必填
 emailShowFlag 邮箱是否显示
 ticketStartWay 工单发起方式 1邮箱，2手机
 */
@property (nonatomic , assign) BOOL     telShowFlag;
@property (nonatomic , assign) BOOL     telFlag;
@property (nonatomic , assign) BOOL     enclosureShowFlag;
@property (nonatomic , assign) BOOL     enclosureFlag;
@property (nonatomic , assign) BOOL     emailFlag;
@property (nonatomic , assign) BOOL     emailShowFlag;
@property (nonatomic , assign) int      ticketStartWay;

/**
 *  是否显示技能组
 */
@property (nonatomic , assign) BOOL     groupflag;


/**
 *  用户当前状态：
 *  -2.排队中
 *  -1.机器人
 *  0.离线
 *  1.在线
 */
@property (nonatomic , assign) int      ustatus;


/**
 *  发送正在输入的频率
 */
@property (nonatomic , assign) int      inputTime;



/**
 是否显示机器人引导语,1-开启，0-关闭
 */
@property (nonatomic , assign) int      guideFlag;


/**
 *  初始化参数
 *  自己设置，服务器端未返回
 */
@property (nonatomic , strong) ZCLibInitInfo *zcinitInfo;


/**
 *  临时属性，用于显示发送人头像
 */
@property (nonatomic , strong) NSString *senderFace;

/**
 *  临时属性，用于存储发送人名称
 */
@property (nonatomic , strong) NSString *senderName;

/**
 *  用于留言工单
 */
@property (nonatomic,strong) NSString *companyID;

/**
 *  留言引导文案
 */
@property (nonatomic,strong) NSString *msgTxt;

/**
 *  留言内容模板
 */
@property (nonatomic,strong) NSString *msgTmp;

/**
 *  留言开关   0开启 ，1关闭
 */
@property (nonatomic,assign) NSUInteger msgFlag;

/**
 *  用户的头像
 */
@property (nonatomic, strong) NSString *face;

/**
 *  用户的昵称
 */
@property (nonatomic, strong) NSString *uname;

// faqId
@property (nonatomic, copy) NSArray      *sessionPhaseAndFaqIdRespVos;

/**
 * 机器人编号
 */
@property (nonatomic, assign) int      robotFlag;


/// 4.0.3新增，=1时机器人启用chatgpt，超时时间增加
@property (nonatomic, assign) int      aiStatus;


/// 4.2.0新增
///
///
@property (nonatomic, assign) BOOL      aiAgent;
@property (nonatomic, copy) NSString *aiAgentCid;

/*
 *  通告是否置顶
 */
@property (nonatomic,assign) int announceTopFlag;

/**
 *   通告是否打开
 */
@property (nonatomic,assign) int  announceMsgFlag;

/**
 *
 *  msgToTicketFlag-留言按钮模式：1-转工单，2-转离线消息
 *
 **/
@property (nonatomic,assign) int msgToTicketFlag;

/**
 *
 *  msgLeaveTxt-转离线消息时，顶部引导文案
 *
 **/
@property (nonatomic,copy) NSString * msgLeaveTxt;

/**
 *
 *   msgLeaveContentTxt-转离线消息时，内容引导文案
 *
 **/
@property (nonatomic,copy) NSString * msgLeaveContentTxt;



/**
 *  通告的标题
 */
@property (nonatomic,strong) NSString * announceMsg;

/**
 *   通告的链接
 */
@property (nonatomic,strong) NSString *announceClickUrl;

/**
 *  通告点击之后是否关闭(4.1.6版本开始废弃)
 */
@property (nonatomic,assign) int   announceClickFlag;

/**
 *  用户超时提示开关
 */
@property (nonatomic,assign) BOOL   customOutTimeFlag;


/**
 *  客服超时提示开关
 */
@property (nonatomic,assign) BOOL   serviceOutTimeFlag;

/**
 *   切换机器人开关 1-开启，0-关闭
 */
@property (nonatomic,assign) int  robotSwitchFlag;

/**
 *
 *  是否开启快捷入口
 *
 **/
@property (nonatomic,assign) int quickEntryFlag;


/**
 *
 *  -1待激活，0免费版，1试用版，2专业版，3企业版  4旗舰版
 *
 **/
@property (nonatomic,assign) int accountStatus;

/**
 *
 * 智能路由开关   0 没有  1 有
 *
 **/
@property (nonatomic,assign) BOOL smartRouteInfoFlag;



/**
 *
 *  机器人欢迎语开关：robotHelloWordFlag
 *
 **/
@property (nonatomic,assign) BOOL robotHelloWordFlag;


/**
 *
 *  客服欢迎语开关：adminHelloWordFlag
 *
 **/
@property (nonatomic,assign) BOOL adminHelloWordFlag;


/**
 *
 *  客服移除用户推送文案开关：serviceEndPushFlag
 *
 **/
@property (nonatomic,assign) BOOL serviceEndPushFlag;

/**
 *
 *  说辞会在用户转人工时返回，serviceEndPushMsg
 *
 **/
@property (nonatomic,copy) NSString* serviceEndPushMsg;

/**
 *   转人工提示暂无客服在线 说辞 的开关  1 显示 0 不显示
 *   adminNoneLineFlag
 *
 **/
@property (nonatomic,assign) BOOL adminNoneLineFlag;


@property (nonatomic,copy) NSString *queueToMsgDoc;
/**
 *
 *  转人工排队说辞的 开关  1 显示 0 不显示
 * queueFlag
 **/
@property (nonatomic,assign) BOOL queueFlag;

// 获取用户留言记录列表接口 使用入参
@property (nonatomic,strong) NSString * customerId;


/// 离线消息开关，1:开; 0:关
@property (nonatomic,assign) BOOL offlineMsgConnectFlag;

/// 离线消息的客服ID，当id不为空是，说明当前客户发送了离线消息，需要直接转人工
@property (nonatomic,strong) NSString *offlineMsgAdminId;



/// 延迟转人工，1:开; 0:关
@property (nonatomic,assign) BOOL invalidSessionFlag;

/// 会话结束是否推送评价开关：1-开启，0-关闭
@property(nonatomic,assign) BOOL commentFlag;

/// *******************************************  v4.0.0 主题相关参数 千人千面 *******************************************
@property(nonatomic,copy) NSDictionary *visitorScheme;

// 主题色 :"#2DB4F9,#272EDC"
@property(nonatomic,copy) NSString *topBarColor;

// 对话框 主题色 返回多个颜色（用于从左到右渐变） ，分割 ，分割后右侧是主题色"#FA846A,#F9576F"
@property(nonatomic,copy) NSString *rebotTheme;

// 显示导航条 1 开启 0 关闭
@property(nonatomic,assign) BOOL topBarFlag;

// 导航条样式 1展示接待客服+企业名称    2.展示企业信息 +接待状态
@property(nonatomic,assign) int topBarType;

// 导航条客服昵称是否勾选 0否 1是
@property(nonatomic,assign) int topBarStaffNickFlag;

// 导航条客服头像 是否勾选 0否 1是
@property(nonatomic,assign) int topBarStaffPhotoFlag;

// 导航条企业名称 是否勾选 0否 1是
@property(nonatomic,assign) int topBarCompanyNameFlag;

// 导航条企业logo 是否勾选 0否 1是
@property(nonatomic,assign) int topBarCompanyLogoFlag;

// 导航条企业名称
@property(nonatomic,copy) NSString *topBarCompanyName;

// 导航条企业logo图片url
@property(nonatomic,copy) NSString *topBarCompanyLogoUrl;

// 导航条接待状态
@property(nonatomic,assign) int topBarReceptionFlag;

// 导航条显示状态文案
@property(nonatomic,copy) NSString *topBarReceptionText;

// 输入框引导文案(机器人接待)
@property(nonatomic,copy) NSString *robotDoc;

// 输入框引导文案(人工接待)
@property(nonatomic,copy) NSString *customDoc;

// 输入框引导文案(排队中)
@property(nonatomic,copy) NSString *waitDoc;

// 客服发送消息时是否展示客服头像 0 否 1是
@property(nonatomic,assign) BOOL showFace;

// 客服发送消息时是否 展示客服昵称 0否 1是
@property(nonatomic,assign) BOOL showStaffNick;

// 超链点击颜色
@property(nonatomic,copy) NSString *msgClickColor;

// app渠道  机器人对话框 拓展功能
@property(nonatomic,strong)NSMutableArray *appExtModelList;


// app渠道  人工对话框 拓展功能
@property(nonatomic,strong)NSMutableArray *appExtModelManList;

// 快捷菜单  menuSessionPhase 有 0 1 2 三种值组合 ，0 进入会话 1 机器人 2 转人工成功后  opportunity 调用规则
@property(nonatomic,strong)NSArray *menuSessionPhase;

// 是触发阶段 0.进入会话时、1.进入机器人会话时、2.进入人工会话时
@property(nonatomic,copy)NSString *opportunity;

// 是否显示转人工开关   0-否  1-是
@property(nonatomic,assign) BOOL showTurnManualBtn;
// 仅在客户消息累计触发n次机器人未知回答后，常驻显示 0-关闭 1-开启
@property(nonatomic,assign) BOOL isManualBtnFlag;
// 多少次后显示转人工按钮
@property(nonatomic,assign) int manualBtnCount;

// 访客端消息引用 1-开启，0-关闭。
@property (nonatomic,assign) int msgAppointFlag;


/**
 人工消息是否开启已读未读，1开启，0未开启
 --当readFlag=1时，人工发送接口（文字、图片、视频、文件等）新增readStatus=0
 --当readFlag=0，不处理
 */
@property (nonatomic,assign) int readFlag;

/**
 机器人消息是否开启已读未读，1开启，0未开启;
 adminReadFlag = 1时，发送机器人消息(文字、图片、视频等)成功以后，调用标记接口
 adminReadFlag = 0时，不处理
 */
@property (nonatomic,assign) int adminReadFlag;


/**
 转人工提示语开关: 0-关闭 1-开启(默认开启)
 */
@property (nonatomic,assign) int transferManualPromptFlag;
/**
 转人工提示语;4.1.3 新增
 默认值:"对不起，未能解决您的问题，正 在为您转接人工服务"
 */
@property (nonatomic,copy) NSString *transferManualPromptWord;

/**
 接入人工提示语开关: 0-关闭 1-开启(默认开启)
 */
@property (nonatomic,assign) int servicePromptFlag;

/**
 转人工提示语;4.1.3 新增，中文替换“#客服昵称#”其它语言替换“#Customer nickname#”
 默认值:您好，客服 #客服昵称# 为您提供服务
 已对默认值“#客服昵称#”做了多语言处理
 */
@property (nonatomic,copy) NSString *servicePromptWord;

// 分词联想开关  0-关闭 1-开启
@property(nonatomic,assign) int robotGuessFlag;

// 4.1.8新增需求，如果上次意外结束，转人工需要传入
@property(nonatomic,assign) int userRemoveConnectFlag;
@property (nonatomic,copy) NSString *userRemovedAdminId;



/// *******************************************  v4.0.0 主题相关参数 千人千面  end*******************************************


// 4.2.0 新增参数
@property(nonatomic,assign) int chooseLanType;// 判断是否弹窗语言列表 0 关闭  1 未获取到语言弹  2 总是弹 3.每次都弹
@property(nonatomic,copy)NSString *language;// 当前接口语言
@property(nonatomic,copy)NSString *lan;// 当前接口默认语言
@property(nonatomic,strong)NSMutableArray *languageArr;// 切换语言列表数据

// 421 新增 询前表单ID
@property(nonatomic,copy)NSString *inquiryPlanId;

// 421 新增 询前表单 收集信息声明 开关 1 开启 0 关闭
@property(nonatomic,assign)int formAuthFlag;

// [0,1,2]  2 代表有SDK
@property(nonatomic,copy)NSString *formEffectiveScope;

// 421 新增 询前表单 声明文案
@property(nonatomic,copy)NSString *formExplain;

// 425新增 进入会话时 弹询前表单 cusActFlag「客户侧触发动作收集表单 1-转人工时 2-进入会话时」
@property(nonatomic,assign)int cusActFlag;

/**
 *  对象封装
 *
 *  @param dict 获取数据解析后的数据
 *
 *  @return ZCLibConfig
 */
-(id)initWithMyDict:(NSDictionary *)dict;

@end



@interface ZCLibOnlineCustomerParams : NSObject

// 指定客服
@property (nonatomic,strong) NSString *chooseAdminId;
/**
*  指定客服 转接类型
*       0 可转入其他客服 ， 1 必须转入指定客服
  （注意：如果当前指定的客服不在线，选择之后不能在转接到其他客服）
*/
@property (nonatomic,assign) int tranFlag;

// 指定技能组
@property (nonatomic,strong) NSString *groupId;
@property (nonatomic,strong) NSString *groupName;

// 当前是否正在排队，1是，0不是
@property (nonatomic,assign) int current;

// queueFlag  排队方式标记  只在关键字转人工（transferType=3）的时候传给服务端，其他情况传空
//  1:展示排队或者客服不在线提示，为0不展示(如果转人工失败显示机器人回复，如果成功，不显示机器人回复)
@property (nonatomic,assign) int queueFlag;

// 触发关键字转人工时的关键字
@property (nonatomic,strong) NSString *keywordId;
// 关键字，多个逗号隔开
@property (nonatomic,strong) NSString *keyword;

// 智能路由
@property (nonatomic,strong) NSArray *transferAction;


// 指定客户优先
//  同PC端 设置-在线客服分配-排队优先设置-指定客户优先   开启传1 默认不设置
@property (nonatomic,assign) int queueFirst;

//转人工类型：1-重复提问，2-负向情绪 ,3-关键词转人工 4-多轮会话转人工 5:机器人自动转人工(新版拆分为6-9,activeTransfer此时为1) 6直接转人工，7理解转人工，8引导转人工，9未知转人工 10，点踩转人工 11，多轮节点转人工
@property (nonatomic,assign) int transferType;

// 词条触发转人工的词条id
@property (nonatomic,strong) NSString *docId;

// 未知问题触发转人工的客户问的未知问题,机器人接口返回originQuestion字段
@property (nonatomic,strong) NSString *unknownQuestion;

//转人工方式 0：机器人触发转人工 1：客户主动转人工  ， 当transferType>=5是均为0
@property (nonatomic,assign) int activeTransfer;


@property (nonatomic,copy) NSString *ruleId;// 一问多答一问多答时的规则id

@property (nonatomic,copy) NSString *answerMsgId;// 消息ID （直接回答的转人工按钮，对应的消息id）

/**
 * 语义id
private String semanticsKeyWordId;
 * 语义名称
private String semanticsKeyWordName;
 * 问法id
private String semanticsKeyWordQuestionId;
 * 问法
private String semanticsKeyWordQuestion;
**/
@property (nonatomic,strong) NSString  *semanticsKeyWordId;
@property (nonatomic,strong) NSString  *semanticsKeyWordName;
@property (nonatomic,strong) NSString  *semanticsKeyWordQuestionId;
@property (nonatomic,strong) NSString  *semanticsKeyWordQuestion;

@end



@interface ZCLibSendMessageParams : NSObject

// 引用消息，仅当msgType是纯文本时有效
@property (nonatomic,strong) SobotChatMessage *referenceMessage;

// 消息内容，文件地址等
@property (nonatomic,strong) NSString *content;

// 发送卡片时的卡片id
@property (nonatomic,strong) NSString *cardId;

// 发生卡片的方式，0=进入会话记录,1=发送给客服或机器人
@property (nonatomic,assign) NSInteger sendType;


@property (nonatomic,assign) SobotMessageRichJsonType richType;

// 如发送多伦时，发送的是json，实际显示的为单个字符串
@property (nonatomic,strong) NSString *msgContent;
@property (nonatomic,strong) NSString *question;
@property (nonatomic,strong) NSString *requestText;

// 0,普通消息，1，有docId的普通消息，2有docId的多伦消息  3.大模型机器人点击btn 按钮  4.大模型机器人点击自定义卡片发送消息
@property (nonatomic,strong) NSString *questionFlag;
@property (nonatomic,strong) NSString *docId;
@property (nonatomic,strong) NSString *duration;
@property (nonatomic,assign) int robotflag;

// 内部知识库 fromEnum=4，机器人知识库=3 ，5快捷问
@property (nonatomic,strong) NSString *fromEnum;

// 卡片信息时，初始化本地模型
/**
 位置：localName/lat/lng/localLabel/file
 视频：conver
 卡片：。。。
 */
@property (nonatomic,strong) NSDictionary *exParams;

@property(nonatomic,copy)NSString *fileSize;
@property(nonatomic,copy)NSString *fileName;
@property(nonatomic,copy)NSString *fileType;
@property(nonatomic,assign)int msgType;

// 机器人发送自定义卡片使用
@property(nonatomic,copy)NSString *customCardQuestion;

// 大模型机器人 点击卡片 保持数据 map
@property(nonatomic,strong)NSDictionary *processInfo;

/************************大模型机器人 点击自定义卡片发送消息使用************************/
@property(nonatomic,strong)NSDictionary *interfaceInfo;
// 去掉 paramInfos； cardStyle 改成 0；
@property(nonatomic,strong)NSDictionary *showQuestion;
// 拼接参数特殊处理
@property(nonatomic,strong)NSDictionary *aiQuestion;
/************************大模型机器人 点击自定义卡片发送消息end************************/
@end

// 对话框 拓展功能
@interface ZCLibExtModel : NSObject

//{
//    "id":"3eb8049525534f849ccbc938c521471b",
//    "configId":"33ad80015b5040a5881b66bce43e29ee",
//    "extModelType":7,
//    "extModelSource":2,
//    "extModelName":"图片 ",
//    "extModelLink":null,
//    "extModelPhoto":"https://img.sobot.com/console/common/res/%E5%9B%BE%E7%89%87.png",
//    "companyId":"66a522ea3ef944a98af45bac09220861"
//},
@property(nonatomic,copy)NSString *extId;
@property(nonatomic,copy)NSString *configId;
@property(nonatomic,copy)NSString *extModelType;
@property(nonatomic,copy)NSString *extModelSource;
@property(nonatomic,copy)NSString *extModelName;
@property(nonatomic,copy)NSString *extModelLink;
@property(nonatomic,copy)NSString *extModelPhoto;
@property(nonatomic,copy)NSString *companyId;


-(id)initWithMyDict:(NSDictionary *)dict;

@end
