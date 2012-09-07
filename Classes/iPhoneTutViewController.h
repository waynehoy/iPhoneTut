//
//  iPhoneTutViewController.h
//  iPhoneTut
//
//  Created by Wayne Hoy on 12-09-05.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface iPhoneTutViewController : UIViewController {
	
	IBOutlet UILabel *myLabel;
	IBOutlet UIButton *myButton;

}

@property (nonatomic, retain) IBOutlet UILabel *myLabel;
@property (nonatomic, retain) IBOutlet UIButton *myButton;

- (IBAction) myButton_OnClick: (id) sender;

@end

