//
//  ViewController.m
//  screenSize
//
//  Created by 金石教育 on 2020/11/4.
//

#import "ViewController.h"
#import "CYDevice.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.label.text = [NSString stringWithFormat:@"%@ 流海屏：%d",[CYDevice shareInstance].deviceName,[CYDevice shareInstance].notch];
}


@end
