//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol PXVideoScrubberControllerTarget;

@interface PXScrubberSeekRequest : NSObject
{
    NSDate *_dateCreated;
    double _seekTime;
    id <PXVideoScrubberControllerTarget> _target;
}

@property(nonatomic) __weak id <PXVideoScrubberControllerTarget> target; // @synthesize target=_target;
@property(nonatomic) double seekTime; // @synthesize seekTime=_seekTime;
@property(copy, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 seekTime:(double)arg2;
- (id)init;

@end
