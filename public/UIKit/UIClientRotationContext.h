//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UISnapshotView, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface UIClientRotationContext : NSObject
{
    UIView *_headerView;
    UIView *_footerView;
    UIView *_contentView;
    UIView *_snapshotTargetView;
    UIView *_rotatingSnapshotView;
    UIView *_footerStartSnapshotView;
    UIView *_footerEndSnapshotView;
    _Bool _headerWasHidden;
    _Bool _footerWasHidden;
    _Bool _contentWasHidden;
    _Bool _snapshotTargetWasHidden;
    _Bool _orderKeyboardInAfterRotating;
    _Bool _skipFooterRotation;
    _Bool _skipHeaderRotation;
    long long _fromOrientation;
    long long _toOrientation;
    double _duration;
    UISnapshotView *_headerSnapshotViewStart;
    UISnapshotView *_footerSnapshotViewStart;
    UISnapshotView *_contentSnapshotViewStart;
    double _contentTopAdjustmentStart;
    id _rotatingClient;
    CDStruct_8bdd0ba6 _rotationSettings;
    double contentBottomInset;
    UIWindow *_window;
    _Bool _skipClientRotationCallbacks;
}

@property(nonatomic) _Bool skipClientRotationCallbacks; // @synthesize skipClientRotationCallbacks=_skipClientRotationCallbacks;
@property(readonly, nonatomic) long long toOrientation; // @synthesize toOrientation=_toOrientation;
@property(readonly, nonatomic) long long fromOrientation; // @synthesize fromOrientation=_fromOrientation;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) id rotatingClient; // @synthesize rotatingClient=_rotatingClient;
- (void)finishFullRotateUsingOnePartAnimation:(_Bool)arg1;
- (void)finishFirstHalfRotation;
- (void)rotateSnapshots;
- (void)setupRotationOrderingKeyboardInAfterRotation:(_Bool)arg1;
- (_Bool)_isFooterTranslucent;
- (_Bool)_isHeaderTranslucent;
- (void)_slideFooterWithStartSnapshot:(id)arg1 endSnapshot:(id)arg2 duration:(double)arg3;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3;
- (void)slideHeaderViewAndFooterViewOffScreen:(_Bool)arg1 forInterfaceOrientation:(long long)arg2;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(_Bool)arg3 forInterfaceOrientation:(long long)arg4;
- (void)dealloc;
- (id)initWithClient:(id)arg1 toOrientation:(long long)arg2 duration:(double)arg3 andWindow:(id)arg4;

@end

