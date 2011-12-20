//
//  BullsEyeViewController.h
//  BullsEye
//
//  Created by Nathan Chan on 12/19/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BullsEyeViewController : UIViewController;
@property (nonatomic, strong) IBOutlet UISlider *slider;

- (IBAction)showAlert;
- (IBAction)sliderMoved:(UISlider *)sender;

@end
