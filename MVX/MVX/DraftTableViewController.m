//
//  DraftTableViewController.m
//  MVX
//
//  Created by 王二 on 17/4/21.
//  Copyright © 2017年 mbs008. All rights reserved.
//

#import "DraftTableViewController.h"
#import "MJRefresh.h"
#import "DraftTableViewCell.h"

#import "UIView+Alert.h"
#import "DraftCellHelper.h"

@interface DraftTableViewController ()

@property (copy, nonatomic) void(^didSelectedRowHandler)(Draft *);
@property (assign, nonatomic) NSUInteger userId;
@property (strong, nonatomic) UserAPIManager *apiManager;

@property (strong, nonatomic) UITableView *tableView;
@property (strong, nonatomic) NSMutableArray<DraftCellHelper *> *drafts;

@end

@implementation DraftTableViewController

@end
