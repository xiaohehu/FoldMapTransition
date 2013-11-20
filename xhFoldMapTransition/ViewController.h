//
//  ViewController.h
//  xhFoldMapTransition
//
//  Created by Xiaohe Hu on 11/20/13.
//  Copyright (c) 2013 Xiaohe Hu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MPFoldEnumerations.h"
#import "MPFlipEnumerations.h"

enum {
	MPTransitionModeFold,
	MPTransitionModeFlip
} typedef MPTransitionMode;

@interface ViewController : UIViewController
{
//    UIView      *uiv_mapContainer;
    UIImageView *uiiv_maps;
}

@property (assign, nonatomic) MPTransitionMode          mode;
@property (assign, nonatomic) NSUInteger                style;
@property (assign, nonatomic) MPFoldStyle               foldStyle;
@property (assign, nonatomic) MPFlipStyle               flipStyle;
@property (readonly, nonatomic) BOOL                    isFold;

@property (weak, nonatomic) IBOutlet UISegmentedControl *modeSegment;
@property (weak, nonatomic) IBOutlet UISegmentedControl *directionSegment;

@property (weak, nonatomic) IBOutlet UIView             *uiv_mapContainer;
@property (strong, nonatomic) UIImageView               *uiiv_mpas;

@property (nonatomic) int                               mapIndex;

- (IBAction)modeValueChanged:(id)sender;
- (IBAction)setepperValueChanged:(id)sender;
- (IBAction)directionChanged:(id)sender;

@end
