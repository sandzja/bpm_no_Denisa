//
//  DataSource.h
//  abtest
//
//  Created by Deniss Fedotovs on 2/17/13.
//  Copyright (c) 2013 Deniss Fedotovs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YAJLiOS/YAJL.h>

@interface DataSource : NSObject {
    NSString *jsonString;
}

@property (nonatomic, retain) NSString *jsonString;

-(NSArray *) getMenuData;
-(NSArray *) getItemsList;
@end
