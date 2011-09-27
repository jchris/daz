//
//  DazAppDelegate.h
//  daz
//
//  Created by John Anderson on 9/18/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Couchbase/CouchbaseMobile.h>

@interface DazAppDelegate : UIResponder <UIApplicationDelegate, CouchbaseDelegate>

@property (strong, nonatomic) UIWindow *window;

@end
