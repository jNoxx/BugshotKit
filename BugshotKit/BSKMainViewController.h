//  BSKMainViewController.h
//  See included LICENSE file for the (MIT) license.
//  Created by Marco Arment on 1/17/14.

#import <UIKit/UIKit.h>
#import "BSKDefinitions.h"

@import MessageUI;

@class BSKMainViewController;

@protocol BSKMainViewControllerDelegate <NSObject>

- (void)mainViewControllerDidClose:(BSKMainViewController *)mainViewController;

@end


@interface BSKMainViewController : UITableViewController <MFMailComposeViewControllerDelegate>

- (instancetype)initWithCallback:(BugShotCustomActionCallBack)callback;

@property (nonatomic, weak) id<BSKMainViewControllerDelegate> delegate;

@property (strong, nonatomic) NSString *customCallBackTitle;
@property (nonatomic, weak) BugShotCustomActionCallBack callback;

@end
