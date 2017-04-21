//
//  UserViewController+Protect_.h
//  MVX
//
//  Created by 王二 on 17/4/21.
//  Copyright © 2017年 mbs008. All rights reserved.
//

#import "UserViewController.h"

#import "UIView+Alert.h"
#import "UIView+Extension.h"

@interface UserViewController (Protect)

@property (assign, nonatomic) NSUInteger userId;

@property (strong, nonatomic) UserInfoViewController *userInfoVC;
@property (strong, nonatomic) BlogTableViewController *blogVC;

- (void)addUI;
- (void)fetchData;
- (void)configuration;

@end
