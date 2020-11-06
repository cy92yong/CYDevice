//
//  CYDevice.h
//  screenSize
//
//  Created by 金石教育 on 2020/11/4.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
//typedef enum {
//    IPhone_1G = 0,
//    IPhone_3G = 1,
//    IPhone_3GS = 2,
//    IPhone_4 = 3,
//    Verizon_IPhone_4 = 4,
//    IPhone_4S = 5,
//    IPhone_5_GSM = 6,
//    IPhone_5_GSM_CDMA = 7,
//    IPhone_5c_GSM = 8,
//    IPhone_5c_GSM_CDMA = 9,
//    IPhone_5s_GSM = 10,
//    IPhone_5s_GSM_CDMA = 11,
//    IPhone_6_Plus = 12,
//    IPhone_6 = 13,
//    IPhone_6s_Plus = 14,
//    IPhone_6s = 15,
//    IPod_Touch_1G = 16,
//    IPod_Touch_2G = 17,
//    IPod_Touch_3G = 18,
//    IPod_Touch_4G = 19,
//    IPod_Touch_5G = 20,
//    IPad = 21,
//    IPad_2_WiFi_1 = 22,
//    IPad_2_GSM = 23,
//    IPad_2_CDMA = 24,
//    IPad_2_WiFi_4 = 25,
//    IPad_Mini_WiFi = 26,
//    IPad_Mini_GSM = 27,
//    IPad_Mini_GSM_CDMA = 28,
//    IPad_3_WiFi = 29,
//    IPad_3_GSM_CDMA = 30,
//    IPad_3_GSM = 31,
//    IPad_4_WiFi = 32,
//    IPad_4_GSM = 33,
//    IPad_4_GSM_CDMA = 34,
//    IPad_Air_WiFi = 35,
//    IPad_Air_Cellular = 36,
//    IPad_Mini_2G_WiFi = 37,
//    IPad_Mini_2G_Cellular = 38,
//    IPad_Mini_4_WiFi = 39,
//    IPad_Mini_4_Cellular = 40,
//    IPad_Pro = 41,
//    Simulator_i386 = 42,
//    Simulator_x86_64 = 43,
//    CommonIphone = 44,///< 当设备为手机但没有在上面列出来时，一般新的手机设备会返回此枚举
//    CommonIpad = 45,///< 当设备为Ipad但没有在上面列出来时，一般新的IPad设备会返回此枚举
//    UnknownDevice = 46,///< 当没有找到任何匹配设备时此设备为未知设备
//}DeviceModel;
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
