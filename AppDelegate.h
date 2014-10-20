//
//  AppDelegate.h
//  FailedBanks
//
//  Created by A. Diallo on 8/10/14.
//  Copyright 2010 Ray Wenderlich 2014 Remote Tiger. All rights reserved.
//

#import <UIKit/UIKit.h>
#import"FailedBankDatabase.h"
#import"FailedBankInfo.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>{
    UIWindow *window;
    UINavigationController *_navController;
}


@property (strong, nonatomic)  UIWindow *window;
@property(strong, nonatomic)  UINavigationController *navController;

@end
