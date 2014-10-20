//
//  FailedBankListViewControllerTableViewController.m
//  FailedBanks
//
//  Created by A. Diallo on 8/10/14.
//   Copyright 2010 Ray Wenderlich 2014 Remote Tiger. All rights reserved.
//

#import "FailedBankListViewControllerTableViewController.h"
#import "FailedBankInfo.h"
#import "FailedBankDatabase.h"

@interface FailedBankListViewControllerTableViewController ()

@end

@implementation FailedBankListViewControllerTableViewController
@synthesize failedBankInfos=_failedBankInfos;

- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        // Custom initialization
    }
    return self;
}
-(void) dealloc{
    
    self.failedBankInfos=nil;
}
- (void)viewDidLoad
{
    [super viewDidLoad];
    
    // Uncomment the following line to preserve selection between presentations.
    self.failedBankInfos=[ FailedBankDatabase database].failedBankInfos;
    self.title=@"Failed Banks";
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    // Return the number of sections.
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    // Return the number of rows in the section.
    return  [_failedBankInfos count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static  NSString *cellIdentifer=@"Cell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellIdentifer forIndexPath:indexPath];
    if(cell==nil){
        
        cell=[[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellIdentifer];
    }
    // Configure the cell...
    FailedBankInfo *info=[_failedBankInfos  objectAtIndex:indexPath.row];
    cell.textLabel.text=info.name;
    cell.detailTextLabel.text=[NSString stringWithFormat:@"%@ %@",info.city , info.state];
    
    return cell;
}
@end
