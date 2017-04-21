//
//  UserViewController.h
//  MVX
//
//  Created by 王二 on 17/4/21.
//  Copyright © 2017年 mbs008. All rights reserved.
//

#import <UIKit/UIKit.h>

#define LoginUserId 123

@interface UserViewController : UIViewController

+ (instancetype)instanceWithUserId:(NSUInteger)userId;

@end
