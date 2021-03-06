//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKitUI/JSExport-Protocol.h>

@class JSValue, NSArray;

@protocol WLKUIOnboardingInterface <JSExport>
@property(readonly, nonatomic, getter=isTvosMigrated) _Bool tvosMigrated;
@property(readonly, nonatomic) _Bool isShowing;
@property(readonly, nonatomic) NSArray *eligibleBids;
@property(readonly, nonatomic, getter=isOptedIn) _Bool optedIn;
- (void)migrateTvos:(JSValue *)arg1;
- (void)dismiss;
- (void)showForBids:(NSArray *)arg1:(JSValue *)arg2:(JSValue *)arg3;
- (void)show:(JSValue *)arg1;
- (void)setOptedIn:(_Bool)arg1:(JSValue *)arg2;
@end

