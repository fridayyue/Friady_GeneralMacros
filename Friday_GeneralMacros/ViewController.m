//
//  ViewController.m
//  Friday_GeneralMacros
//
//  Created by 岳腾飞 on 2018/9/4.
//  Copyright © 2018年 yueFriday. All rights reserved.
//

#import "ViewController.h"
#import "Friday_MacrosList.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    M_FunWeakSelf(self);
    M_FunGCDOnceBlock(^{
        M_FunGCDAsyncGlobal(^{
            M_LogStr(weakself.view);
            M_FunGCDMainBlock(^{
                M_LogFunc(self);
            });
        });
    });
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
