//
//  FailedBannListDetailViewController.h
//  FailedBanks
//
//  Created by A. Diallo on 8/10/14.
//  Copyright (c) 2014 Remote Tiger. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FailedBankDatabase.h"
#import "FailedBankInfo.h"

@interface FailedBannListDetailViewController : UIViewController {

UILabel *_nameLabel;
UILabel *_cityLabel;
UILabel *_stateLabel;
UILabel *_zipLabel;
UILabel *_closedLabel;
UILabel *_updatedLabel;
int _uniqueId;
}

@property (nonatomic, retain) IBOutlet UILabel *nameLabel;
@property (nonatomic, retain) IBOutlet UILabel *cityLabel;
@property (nonatomic, retain) IBOutlet UILabel *stateLabel;
@property (nonatomic, retain) IBOutlet UILabel *zipLabel;
@property (nonatomic, retain) IBOutlet UILabel *closedLabel;
@property (nonatomic, retain) IBOutlet UILabel *updatedLabel;
@property (nonatomic, assign) int uniqueId;

@end
