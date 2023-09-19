//
//  SobotDateTimes.h
//  SobotCommon
//
//  Created by zhangxy on 2021/8/30.
//

#import <Foundation/Foundation.h>

#define SOBOT_FORMATE_DATETIME @"YYYY-MM-dd HH:mm:ss"
#define SOBOT_FORMATE_DATETIMESSS @"YYYY-MM-dd HH:mm:ss SSS"

NS_ASSUME_NONNULL_BEGIN

@interface SobotDateTimes : NSObject


NSString *sobotGetCurrentTimes(void);

// 几天之后
NSString *sobotBackToPassedTimeWithDaysNumber(NSInteger number);

/**
 *  日期格式
 *
 *  @param fromate 格式
 *  @param date    要格式的日期
 *
 *  @return 格式化后的字符串
 */
NSString * sobotDateTransformString(NSString* fromate,NSDate*date);

/**
 *  longlong类型日期，转换为字符串
 *
 *  @param fromate  格式
 *  @param longdate 转换的类型，主要php和java日期精确度不一样
 */
NSString * sobotLongdateTransformString(NSString* fromate,long long longdate);

// 时间戳转字符串
NSString* sobotTimeWithYearMonthDayCountDown(NSString *timestamp);

/**
 *  字符串转日期,指定fromate
 */
NSDate * sobotStringFormateDateFormateString(NSString * stringDate,NSString *formate);
/**
 *  字符串转日期
 */
NSDate * sobotStringFormateDate(NSString * stringDate);


/// long字符串，转日期
/// - Parameter stringDate: 时间戳
NSDate *sobotLongTimeToDate(NSString *stringDate);

/**
 *  计算日期与当前时间的差
 */
NSString *sobotIntervalSinceNow(NSString *theDate);


/**
 返回时差秒
 /60 分钟
 /3600 小时
 **/
int sobotIntervalDateSinceSimpleNow(NSString *theDate);

/**
 *  获取日期的年,返回哪一年
 */
NSInteger sobotGetDataYear(NSDate *date);


// 计数日期之间的差值
NSTimeInterval sobotDiffTimeSinceNow(NSString *theDate);

NSInteger sobotGetDataMonth(NSDate *date);

NSInteger sobotGetDataDay(NSDate *date);
// 获取本月第一天
NSString *sobotGetMonthBeginWith(NSString*data);

// 获取本月最后一天
NSString *sobotGetMonthEndWith(NSString*data);

// 获取上个月第一天
NSString *sobotGetLastMonthBeginWith(NSString*data);

// 获取上个月最后一天
NSString *sobotGetLastMonthEndWith(NSString*data);

// 通过 秒数 转换成 时：分：秒
NSString *sobotTimeFormattedShow(int totalSeconds);

// 获取本周的第一天和最后一天 传1 第一天按星期日，传2 第一天按星期日计算
NSArray *sobotGetCurrentWeekFistDayAndLastDay(NSUInteger firstWeekday);

// 获取上周 第一天和最后一天 firstWeekday 传1 第一天按星期日，传2 第一天按星期日计算
NSArray *sobotGetLastWeekFistDayAndLastDay(NSUInteger firstWeekday);
@end

NS_ASSUME_NONNULL_END
