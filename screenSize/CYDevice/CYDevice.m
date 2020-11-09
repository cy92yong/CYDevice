//
//  CYDevice.m
//  screenSize
//
//  Created by 金石教育 on 2020/11/4.
//

#import "CYDevice.h"
#import <sys/utsname.h>
@interface CYDevice()
@property(nonatomic,retain)NSArray *iphoneArr;
@end
@implementation CYDevice
static CYDevice *device = nil;
+(CYDevice *)shareInstance{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        device = [[CYDevice alloc]init];
    });
    return device;
}
- (instancetype)init
{
    self = [super init];
    if (self) {
        [self loadData];
    }
    return self;
}
-(void)loadData{
    // 获取文件路径
    NSString *path = [[NSBundle mainBundle] pathForResource:@"deviceType" ofType:@"json"];
    // 将文件数据化
    NSData *data = [[NSData alloc] initWithContentsOfFile:path];
    // 对数据进行JSON格式化并返回字典形式
    NSArray *arr = [NSJSONSerialization JSONObjectWithData:data options:kNilOptions error:nil];
    // 获取屏幕的宽和高
    CGFloat screenW = [UIScreen mainScreen].bounds.size.width;
    CGFloat screenH = [UIScreen mainScreen].bounds.size.height;
    // 定义第一个与本设备屏幕符合的数据，当数据中没有完全符合的设备数据时可以用这个数据进行初始化（新设备或者模拟器会用到）
    NSDictionary *firstDic = nil;
    // 定义完全符合本设备的数据
    NSDictionary *deviceDic = nil;
    // 获取本设备的设备类型字符串
    struct utsname systemInfo;
    uname(&systemInfo);
    self.deviceTypeStr = [NSString stringWithCString: systemInfo.machine encoding:NSASCIIStringEncoding];
    for (NSDictionary *iphoneDic in arr)
    {
        NSInteger w = [iphoneDic[@"screenWidth_pt"] integerValue];
        NSInteger h = [iphoneDic[@"screenHeight_pt"] integerValue];
        if (screenW == w && screenH == h)
        {
            if (!firstDic)
            {
                firstDic = iphoneDic;
            }
            if ([iphoneDic[@"deviceType"] isEqualToString:self.deviceTypeStr])
            {
                deviceDic = iphoneDic;
                break;
            }
        }
    }
    //  初始化数据
    NSDictionary *initDic = nil;
    if (deviceDic)
    {
        initDic = deviceDic;
    }else if(firstDic)
    {
        self.unKnownDevice = YES;
        initDic = firstDic;
    }else{
        self.unKnownDevice = YES;
    }
    if (initDic)
    {
        self.deviceName = initDic[@"deviceName"];
        self.screenWidth_pt = [initDic[@"screenWidth_pt"] integerValue];
        self.screenHeight_pt = [initDic[@"screenHeight_pt"] integerValue];
        self.multiple = [initDic[@"multiple"] floatValue];
        self.screenInch = [initDic[@"screenInch"] floatValue];
        self.notch = [initDic[@"notch"] boolValue];
        self.deviceType = initDic[@"deviceType"];
    }
}
@end
