//
//  BlogCellHelper.h
//  MVX
//
//  Created by 王二 on 17/4/21.
//  Copyright © 2017年 mbs008. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Blog.h"

@interface BlogCellHelper : NSObject
+ (instancetype)helperWithBlog:(Blog *)blog;

- (Blog *)blog;

- (BOOL)isLiked;
- (NSString *)blogTitleText;
- (NSString *)blogSummaryText;
- (NSString *)blogLikeCountText;
- (NSString *)blogShareCountText;

@end
