//
//  BSKDefinitions.h
//  BugshotKit
//
//  Created by Thijs Bastiaens on 24/02/14.
//  Copyright (c) 2014 Marco Arment. All rights reserved.
//

typedef enum : NSUInteger {
    BSKActionTypeJira = 0,
    BSKActionTypeTwitter = 1,
    BSKActionTypeCustom = 2
} BSKActionType;

typedef void(^BugShotCustomActionCallBack)(UIImage *img, NSString *log, NSDictionary *userDict);

