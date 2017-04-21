//
//  DraftTableViewController.h
//  MVX
//
//  Created by 王二 on 17/4/21.
//  Copyright © 2017年 mbs008. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Draft.h"
#import "UserAPIManager.h"

@interface DraftTableViewController : NSObject<UITableViewDelegate, UITableViewDataSource>

+ (instancetype)instanceWithUserId:(NSUInteger)userId;

- (UITableView *)tableView;

- (void)fetchData;
- (void)setDidSelectedRowHandler:(void (^)(Draft *))didSelectedRowHandler;

@end
