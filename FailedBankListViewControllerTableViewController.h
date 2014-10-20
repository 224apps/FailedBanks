//
//  FailedBankListViewControllerTableViewController.h
//  FailedBanks
//
//  Created by A. Diallo on 8/10/14.
 //Copyright 2010 Ray Wenderlich 2014 Remote Tiger. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FailedBankListViewControllerTableViewController : UITableViewController{
    
    NSArray *failedBankList;
}
@property(nonatomic, retain) NSArray *failedBankInfos;

@end
