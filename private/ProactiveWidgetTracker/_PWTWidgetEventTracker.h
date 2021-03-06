//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PETDistributionEventTracker, PETGoalConversionEventTracker, PETScalarEventTracker;

@interface _PWTWidgetEventTracker : NSObject
{
    NSString *_identifier;
    PETScalarEventTracker *_resizeTracker;
    PETGoalConversionEventTracker *_conversionTracker;
    PETScalarEventTracker *_updateTracker;
    PETDistributionEventTracker *_screenLingerTracker;
    PETScalarEventTracker *_foregroundingTracker;
    _Bool _hasReceivedActiveDisplayModeChangeNotificationOnce;
    _Bool _isCurrentlyVisible;
    _Bool _willBecomeVisible;
    _Bool _didBecomeVisibleWhileLocked;
    _Bool _widgetIsForeground;
    _Bool _widgetWasEverForeground;
    long long _activeDisplayMode;
    double _lastAppearTime;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)userEngagedWithWidget;
- (void)widgetDidBecomeForeground:(_Bool)arg1;
- (void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(struct CGSize)arg2;
- (void)widgetPerformedUpdateWithResult:(unsigned long long)arg1;
- (void)widgetDidDisappear;
- (void)widgetWillDisappear;
- (void)widgetDidAppear;
- (void)widgetWillAppear;
- (id)initWithIdentifier:(id)arg1;

@end

