//
//  DetailViewController.h
//  abtest
//
//  Created by Deniss Fedotovs on 2/17/13.
//  Copyright (c) 2013 Deniss Fedotovs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DataSource.h"
#import "ItemViewController.h"


@interface DetailViewController : UIViewController <UISplitViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>{
    IBOutlet UITableView *table;
    DataSource *dataSource;
}

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (strong, nonatomic) IBOutlet UITableView *table;
@property (strong, nonatomic) DataSource *dataSource;

@end
