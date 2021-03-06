//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class StockGraphImageSet, TintedView, UIImage;

@interface VolumeGraphView : UIView
{
    _Bool _showingTintedRegion;
    TintedView *_tintedVolumeView;
    UIView *_tintedRegionClipView;
    UIImage *_volumeImage;
    StockGraphImageSet *_graphImageSet;
}

@property(retain, nonatomic) StockGraphImageSet *graphImageSet; // @synthesize graphImageSet=_graphImageSet;
- (void).cxx_destruct;
- (void)resizeSelectedVolumeClipViewWithLeftX:(double)arg1 rightX:(double)arg2;
- (void)setShowingSelectedRegion:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

