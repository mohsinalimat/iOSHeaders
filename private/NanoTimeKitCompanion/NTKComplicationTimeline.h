//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer, _TimelineEntryNode, _TimelineGapNode, _TimelineWindow;
@protocol NTKComplicationTimelineDelegate;

@interface NTKComplicationTimeline : NSObject
{
    _TimelineEntryNode *_leftmostNode;
    _TimelineEntryNode *_rightmostNode;
    _TimelineGapNode *_gapNode;
    _TimelineWindow *_nowWindow;
    _TimelineWindow *_timeTravelWindow;
    NSTimer *_timer;
    _Bool _paused;
    id <NTKComplicationTimelineDelegate> _delegate;
    NSDate *_timeTravelDate;
    NSDate *_timeTravelLeftBoundary;
    NSDate *_timeTravelRightBoundary;
}

@property(retain, nonatomic) NSDate *timeTravelRightBoundary; // @synthesize timeTravelRightBoundary=_timeTravelRightBoundary;
@property(retain, nonatomic) NSDate *timeTravelLeftBoundary; // @synthesize timeTravelLeftBoundary=_timeTravelLeftBoundary;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) NSDate *timeTravelDate; // @synthesize timeTravelDate=_timeTravelDate;
@property(nonatomic) __weak id <NTKComplicationTimelineDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_recycleAllNodes;
- (id)_effectiveTimeTravelDate;
- (void)_updateTimeTravelWindow;
- (void)_updateNowWindow;
- (id)_timeTravelNode;
- (id)_nowNode;
- (struct NSArray *)_sortedEntries:(struct NSArray *)arg1;
- (id)_timelineSegmentFromSortedEntries:(struct NSArray *)arg1 withLowerBound:(id)arg2 upperBound:(id)arg3;
- (void)_setupWithEntry:(id)arg1;
- (void)_trimTimeline;
- (id)_afterGapDate;
- (id)_beforeGapDate;
- (id)_rightmostDate;
- (id)_leftmostDate;
- (void)_timerFired;
- (void)_updateTimer;
- (id)endOfVisibilityForNowEntry;
- (id)timeTravelWindow;
- (id)nowWindow;
- (id)timeTravelEntry;
- (id)nowEntry;
- (void)extendLeftFromDate:(id)arg1 withEntries:(struct NSArray *)arg2;
- (void)extendRightFromDate:(id)arg1 withEntries:(struct NSArray *)arg2;
- (void)resetWithEntry:(id)arg1;
- (void)clearTimeTravelCache;
- (void)dealloc;
- (id)initWithEntry:(id)arg1;
- (long long)timeTravelWindowNodeCapacity;
- (long long)nowWindowNodeCapacity;

@end

