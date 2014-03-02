//
//  BullsEyeViewController.h
//  BullsEye
//
//  Created by Scott Gardner on 2/26/14.
//  Copyright (c) 2014 Optimac, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BullsEyeViewController : UIViewController <UIAlertViewDelegate>

@property (weak, nonatomic) IBOutlet UISlider *slider;
@property (weak, nonatomic) IBOutlet UILabel *targetLabel;
@property (weak, nonatomic) IBOutlet UILabel *scoreLabel;
@property (weak, nonatomic) IBOutlet UILabel *roundLabel;

- (IBAction)showAlert:(id)sender;
- (IBAction)sliderMoved:(UISlider *)slider;

@end
