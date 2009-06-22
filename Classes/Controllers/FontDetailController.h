//
//  FontDetailController.h
//  FontKit
//
//  Created by Adrian on 11/12/08.
//  Copyright 2008 Adrian Kosmaczewski. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FontDetailController : UIViewController <UITextViewDelegate>
{
@private
    IBOutlet UISlider *slider;
    IBOutlet UILabel *sizeLabel;
    IBOutlet UITextView *sampleView;
    IBOutlet UITextView *alphabetTextView;
    IBOutlet UISegmentedControl *displayType;
    IBOutlet UISegmentedControl *specialSizes;
    UIBarButtonItem *button;
    NSString *fontName;
}

@property (nonatomic, copy) NSString *fontName;

- (IBAction)sliderValueChanged:(id)sender;
- (IBAction)changedDisplayType:(id)sender;
- (IBAction)selectedSpecialSize:(id)sender;

@end
