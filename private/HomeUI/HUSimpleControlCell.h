//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUControlPanelCell.h>

@class NSArray, UIView;
@protocol HUControlView;

@interface HUSimpleControlCell : HUControlPanelCell
{
    UIView<HUControlView> *_controlView;
    NSArray *_controlViewConstraints;
}

@property(copy, nonatomic) NSArray *controlViewConstraints; // @synthesize controlViewConstraints=_controlViewConstraints;
@property(retain, nonatomic) UIView<HUControlView> *controlView; // @synthesize controlView=_controlView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_updateSliderConstraints;
- (id)allControlViews;

@end

