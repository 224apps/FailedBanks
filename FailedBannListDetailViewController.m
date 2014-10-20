//
//  FailedBannListDetailViewController.m
//  FailedBanks
//
//  Created by A. Diallo on 8/10/14.
//  Copyright 2010 Ray Wenderlich 2014 Remote Tiger. All rights reserved.
//

#import "FailedBannListDetailViewController.h"
#import "FailedBankDatabase.h"
#import "FailedBankDetails.h"

@implementation FailedBannListDetailViewController
@synthesize nameLabel = _nameLabel;
@synthesize cityLabel = _cityLabel;
@synthesize stateLabel = _stateLabel;
@synthesize zipLabel = _zipLabel;
@synthesize closedLabel = _closedLabel;
@synthesize updatedLabel = _updatedLabel;
@synthesize uniqueId = _uniqueId;



- (void)viewWillAppear:(BOOL)animated {
    FailedBankDetails *details = [[FailedBankDatabase database] failedBankDetails:_uniqueId];
    
    
    if (details != nil) {
        [_nameLabel setText:details.name];
        [_cityLabel setText:details.city];
        [_stateLabel setText:details.state];
        [_zipLabel setText:[NSString stringWithFormat:@"%@", details.name]];
        NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
        [formatter setDateFormat:@"MMMM dd, yyyy"];
        [_closedLabel setText:[formatter stringFromDate:details.closeDate]];
        [_updatedLabel setText:[formatter stringFromDate:details.updatedDate]];
    }
}



@end
