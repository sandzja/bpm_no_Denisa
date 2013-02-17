//
//  ItemViewController.h
//  abtest
//
//  Created by Deniss Fedotovs on 2/17/13.
//  Copyright (c) 2013 Deniss Fedotovs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuickLook/QuickLook.h>

@interface ItemViewController : UIViewController<QLPreviewControllerDataSource, QLPreviewControllerDelegate>

-(IBAction)openPdf:(UIButton*)sender;

@end
