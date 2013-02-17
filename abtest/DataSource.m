//
//  DataSource.m
//  abtest
//
//  Created by Deniss Fedotovs on 2/17/13.
//  Copyright (c) 2013 Deniss Fedotovs. All rights reserved.
//

#import "DataSource.h"

@implementation DataSource
@synthesize jsonString;
-(NSArray *) getMenuData {
//    NSLog(@"getDatasource");
    jsonString=@"[{\"id\":\"34\", \"displayName\": \"Klienti\"}, {\"id\":\"37\", \"displayName\": \"Kredīti\"},{\"id\":\"35\", \"displayName\": \"Atskaites\"}]";
    return [jsonString yajl_JSON];
}
-(NSArray *) getItemsList {
    jsonString=@"[{\"id\":\"34\", \"displayName\": \"Item 1\"}, {\"id\":\"37\", \"displayName\": \"Item 2\"},{\"id\":\"35\", \"displayName\": \"Item 3\"}]";
    return [jsonString yajl_JSON];
}
@end
