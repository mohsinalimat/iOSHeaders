//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIFocusRegion.h>

@protocol _UIFocusGuideRegionDelegate;

@interface _UIFocusGuideRegion : _UIFocusRegion
{
    id <_UIFocusGuideRegionDelegate> _delegate;
}

@property(nonatomic) __weak id <_UIFocusGuideRegionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (long long)_visualRepresentationPatternType;
- (id)_visualRepresentationColor;
- (id)_debugAssociatedObject;
- (id)_delegatePreferredFocusEnvironmentsForMovementRequest:(id)arg1;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1;
- (long long)_preferredDistanceComparisonType;
- (unsigned long long)_focusableBoundaries;
- (id)_fallbackFocusItemForMovementRequest:(id)arg1 inFocusMap:(id)arg2;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2;
- (_Bool)_canOccludeRegionsBelow;
- (_Bool)_isEnabledForFocusedRegion:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

