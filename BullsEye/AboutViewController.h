//
//  AboutViewController.h
//  BullsEye
//
//  Created by Scott Gardner on 2/26/14.
//  Copyright (c) 2014 Optimac, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AboutViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIWebView *webView;

- (IBAction)close:(id)sender;

@end
