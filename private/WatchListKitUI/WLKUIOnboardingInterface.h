//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <WatchListKitUI/WLKUIOnboardingInterface-Protocol.h>

@class NSArray, NSNumber, WLKUIOnboardingController;

@interface WLKUIOnboardingInterface : IKJSObject <WLKUIOnboardingInterface>
{
    WLKUIOnboardingController *_controller;
    _Bool _hasSynced;
    NSNumber *_lastReportedOptedInValue;
    _Bool _isShowing;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setOptedIn:(_Bool)arg1:(id)arg2;
- (void)migrateTvos:(id)arg1;
- (void)dismiss;
- (void)showForBids:(id)arg1:(id)arg2:(id)arg3;
- (void)show:(id)arg1;
@property(readonly, nonatomic) _Bool isShowing;
@property(readonly, nonatomic, getter=isTvosMigrated) _Bool tvosMigrated;
@property(readonly, nonatomic) NSArray *eligibleBids;
@property(readonly, nonatomic, getter=isOptedIn) _Bool optedIn;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1;

@end

