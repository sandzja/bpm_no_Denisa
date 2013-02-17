//
//  MasterViewController.h
//  abtest
//
//  Created by Deniss Fedotovs on 2/17/13.
//  Copyright (c) 2013 Deniss Fedotovs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DataSource.h"

@class DetailViewController;

@interface MasterViewController : UITableViewController{
    DataSource *dataSource;
}

@property (strong, nonatomic) DataSource *dataSource;
@property (strong, nonatomic) DetailViewController *detailViewController;

@end
