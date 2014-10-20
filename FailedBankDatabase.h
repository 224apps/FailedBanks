//
//  FailedBankDatabase.h
//  FailedBanks
//
//  Created by A. Diallo on 8/10/14.
//  Copyright 2010 Ray Wenderlich 2014 Remote Tiger. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FailedBankDetails.h"
#import<sqlite3.h>

@interface FailedBankDatabase : NSObject{
        sqlite3 *_database;
    }
+(FailedBankDatabase*) database;
-(NSArray*)failedBankInfos;
-(FailedBankDetails *)failedBankDetails:(int)uniqueId;

@end
