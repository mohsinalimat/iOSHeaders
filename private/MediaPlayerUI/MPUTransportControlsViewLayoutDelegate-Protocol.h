//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/NSObject-Protocol.h>

@class MPUTransportControlsView;

@protocol MPUTransportControlsViewLayoutDelegate <NSObject>

@optional
- (void)transportControlsViewDidLayoutSubviews:(MPUTransportControlsView *)arg1;
- (struct CGSize)transportControlsView:(MPUTransportControlsView *)arg1 defaultTransportButtonSizeWithProposedSize:(struct CGSize)arg2;
- (double)transportControlsView:(MPUTransportControlsView *)arg1 adjustedMaximumLayoutWidthOfTransportButtonWithControlType:(long long)arg2;
- (struct CGRect)transportControlsView:(MPUTransportControlsView *)arg1 adjustedFrameOfTransportButtonWithControlType:(long long)arg2 proposedFrame:(struct CGRect)arg3;
@end

