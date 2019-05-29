//
//  ViewController.m
//  Friday_GeneralMacros
//
//  Created by yuefriday on 2018/9/4.
//  Copyright © 2018年 yueFriday. All rights reserved.
//

#import "ViewController.h"
#import "Friday_GeneralMacros/Friday_MacrosList.h"
typedef void (^DefBlock)(void);
#define kGCD_after_TIME_NOW(time,DefBlock)\
dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(time * NSEC_PER_SEC)),dispatch_get_main_queue(),DefBlock);\

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    UIView *view = [[UIView alloc] init];
    NSDictionary *dic = @{@"":@""};
    NSString *astring = @"";
    if(M_JudgeStringEmpty(@"123")) {
        NSLog(@"1");
    }else{
        NSLog(@"0");
    }
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}


@end
