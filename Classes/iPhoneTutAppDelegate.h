//
//  iPhoneTutAppDelegate.h
//  iPhoneTut
//
//  Created by Wayne Hoy on 12-09-05.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class iPhoneTutViewController;

@interface iPhoneTutAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    iPhoneTutViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet iPhoneTutViewController *viewController;

@end

