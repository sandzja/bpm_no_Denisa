//
//  MasterViewController.h
//  abtest
//
//  Created by Deniss Fedotovs on 2/17/13.
//  Copyright (c) 2013 Deniss Fedotovs. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
