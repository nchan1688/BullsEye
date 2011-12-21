//
//  AboutViewController.h
//  BullsEye
//
//  Created by Nathan Chan on 12/20/11.
//  Copyright (c) 2011 UC Berkeley. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface AboutViewController : UIViewController

@property (nonatomic, strong) IBOutlet UIWebView *webView;

- (IBAction)close;

@end
