//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIBackdropView.h>

@interface BSUIBackdropView : _UIBackdropView
{
    double _transitionProgress;
    double _initialScale;
    double _finalScale;
    double _scaleForNoBlur;
    double _rasterizationScale;
}

@property(nonatomic) double rasterizationScale; // @synthesize rasterizationScale=_rasterizationScale;
@property(nonatomic) double scaleForNoBlur; // @synthesize scaleForNoBlur=_scaleForNoBlur;
- (void)transitionComplete;
- (void)applySettings:(id)arg1;
- (void)transitionIncrementallyToSettings:(id)arg1 weighting:(double)arg2;

@end
