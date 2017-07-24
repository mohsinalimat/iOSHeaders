//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKGraphViewController.h>

@interface HKScalarGraphViewController : HKGraphViewController
{
    double _minimumHeight;
}

@property(readonly, nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
- (void)_setupGraphViewSelectionStyle;
- (id)_buildGraphViewWithLabelDimension:(id)arg1;
- (void)_pinView:(id)arg1 toParentView:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithMinimumHeight:(double)arg1;
- (id)initWithMinimumHeight:(double)arg1 labelDimension:(id)arg2;

@end

