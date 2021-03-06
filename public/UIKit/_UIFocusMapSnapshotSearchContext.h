//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIFocusRegionSearchContext-Protocol.h>

@class NSMutableArray, NSString, UIScreen, _UIFocusMapSnapshotOptions;
@protocol _UIFocusMapArea;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSnapshotSearchContext : NSObject <_UIFocusRegionSearchContext>
{
    _Bool _hasResultsContainer;
    _Bool _isSearchingResultsContainer;
    _UIFocusMapSnapshotOptions *_options;
    NSMutableArray *_focusRegionContainers;
    NSMutableArray *_allFocusRegions;
    NSMutableArray *_resultFocusRegions;
}

@property(readonly, nonatomic) NSMutableArray *resultFocusRegions; // @synthesize resultFocusRegions=_resultFocusRegions;
@property(readonly, nonatomic) NSMutableArray *allFocusRegions; // @synthesize allFocusRegions=_allFocusRegions;
@property(readonly, nonatomic) NSMutableArray *focusRegionContainers; // @synthesize focusRegionContainers=_focusRegionContainers;
@property(readonly, copy, nonatomic) _UIFocusMapSnapshotOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)addRegionsInContainers:(id)arg1;
- (void)addRegionsInContainer:(id)arg1;
- (void)addRegionsInRootContainer;
- (void)addRegions:(id)arg1;
- (void)addRegion:(id)arg1;
@property(readonly, nonatomic) id <_UIFocusMapArea> searchArea;
@property(readonly, nonatomic) __weak UIScreen *screen;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

