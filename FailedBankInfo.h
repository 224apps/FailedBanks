//
//  FailedBankInfo.h
//  FailedBanks
//
//  Created by A. Diallo on 8/10/14.
//   Copyright 2010 Ray Wenderlich 2014 Remote Tiger. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FailedBankInfo : NSObject{
    //The private Variable;
    int _uniqueId;
    NSString *_name;
    NSString *_state;
    NSString *_city;
}

@property(nonatomic,assign) int uniqueId;
@property(nonatomic,copy) NSString *name;
@property(nonatomic,copy) NSString *city;
@property(nonatomic,copy) NSString *state;

-(id)initWithUniqueId:(int)uniqueId name:(NSString*)name   city:(NSString*) city state:(NSString*)state;

@end
