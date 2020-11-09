//
//  CYDevice.h
//  screenSize
//
//  Created by 金石教育 on 2020/11/4.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface CYDevice : NSObject
/// 设备名称
@property(nonatomic,retain) NSString *deviceName;

/// 设备的屏幕逻辑宽度
@property(nonatomic,assign) NSInteger screenWidth_pt;

/// 设备的屏幕逻辑高度
@property(nonatomic,assign) NSInteger screenHeight_pt;

/// 倍图倍数
@property(nonatomic,assign) CGFloat multiple;

/// 屏幕尺寸
@property(nonatomic,assign) CGFloat screenInch;

/// 是否有槽口 可以用来判断是否是流海屏
@property(nonatomic,assign) BOOL notch;

/// 设备的类型字符串（数据中的）
@property(nonatomic,retain) NSString *deviceType;

/// 本设备的类型字符串
@property(nonatomic,retain) NSString *deviceTypeStr;

/// 是否是未知设备 （未知设备指数据中没有的设备）
@property(nonatomic,assign) Boolean unKnownDevice;

+(CYDevice *)shareInstance;
@end

NS_ASSUME_NONNULL_END
