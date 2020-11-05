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
@property(nonatomic,retain) NSString *iphoneName;
@property(nonatomic,assign) NSInteger screenWidth_pt;
@property(nonatomic,assign) NSInteger screenHeight_pt;
@property(nonatomic,assign) CGFloat multiple;
@property(nonatomic,assign) CGFloat screenInch;
@property(nonatomic,assign) BOOL notch;
@property(nonatomic,retain) NSString *phoneType;
@property(nonatomic,retain) NSString *phoneTypeStr;
@property(nonatomic,assign) Boolean unKnownDevice;
+(CYDevice *)shareInstance;
@end

NS_ASSUME_NONNULL_END
