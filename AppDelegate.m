//
//  AppDelegate.m
//  FailedBanks
//
//  Created by A. Diallo on 8/10/14.
//  Copyright 2010 Ray Wenderlich 2014 Remote Tiger. All rights reserved.
//

#import "AppDelegate.h"

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions

{
    // Override point for customization after application launch.
    NSArray *failedBankInfos=[FailedBankDatabase database].failedBankInfos;
    for(FailedBankInfo *info in failedBankInfos){
        NSLog(@"%d:  %@---%@---%@", info.uniqueId, info.name, info.city, info.state);
    }
    return YES;
}
							


@end
