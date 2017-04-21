//
//  BlogTableViewController.h
//  MVX
//
//  Created by 王二 on 17/4/21.
//  Copyright © 2017年 mbs008. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UserAPIManager.h"

/**
 博客控制器C
 */
@interface BlogTableViewController : NSObject <UITableViewDelegate, UITableViewDataSource>

+ (instancetype)instanceWithUserId:(NSUInteger)userId;
- (UITableView *)tableView;
- (void)fetchDataWithCompletionHandler:(NetworkCompletionHandler)completionHander;
- (void)setVCGenerator:(ViewControllerGenerator)VCGenerator;

@end
