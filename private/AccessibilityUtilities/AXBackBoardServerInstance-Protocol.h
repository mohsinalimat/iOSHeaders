//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityUtilities/NSObject-Protocol.h>

@protocol AXBackBoardServerInstance, AXBackBoardServerInstanceDelegate;

@protocol AXBackBoardServerInstance <NSObject>
+ (id <AXBackBoardServerInstance>)backBoardServerInstanceIfExists;
- (void)resetAccessibilityFeatures;
- (void)forceLoadGAXBundle;
- (_Bool)supportsAdaptation;
- (_Bool)adaptationEnabled;
- (void)restoreCachedBrightnessFilters;
- (_Bool)blueLightStatusEnabled;
- (_Bool)brightnessFiltersEnabled;
- (void)disableBrightnessFilters;
- (_Bool)supportsBlueLightReduction;
- (_Bool)_sessionIsLoginSession;
- (_Bool)_inPreBoardMode;
- (id <AXBackBoardServerInstanceDelegate>)delegate;
@end

