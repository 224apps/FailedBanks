//
//  FailedBankDetails.h
//  FailedBanks
//
//  Created by A's macAir on 10/20/14.
// Copyright 2010 Ray Wenderlich 2014 Remote Tiger. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FailedBankDetails : NSObject{

int _uniqueId;
NSString *_name;
NSString *_city;
NSString *_state;
int _zip;
NSDate *_closeDate;
NSDate *_updatedDate;
}

@property (nonatomic, assign) int uniqueId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, assign) int zip;
@property (nonatomic, retain) NSDate *closeDate;
@property (nonatomic, retain) NSDate *updatedDate;

- (id)initWithUniqueId:(int)uniqueId name:(NSString *)name city:(NSString *)city state:(NSString *)state zip:(int)zip closeDate:(NSDate *)closeDate updatedDate:(NSDate *)updatedDate;

@end
