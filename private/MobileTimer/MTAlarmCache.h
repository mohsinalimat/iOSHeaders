//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTAlarm, NSMutableArray;
@protocol NAScheduler;

@interface MTAlarmCache : NSObject
{
    _Bool _needsUpdate;
    CDUnknownBlockType _updateBlock;
    NSMutableArray *_orderedAlarms;
    MTAlarm *_sleepAlarm;
    MTAlarm *_nextAlarm;
    id <NAScheduler> _serializer;
}

@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) MTAlarm *nextAlarm; // @synthesize nextAlarm=_nextAlarm;
@property(retain, nonatomic) MTAlarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property(retain, nonatomic) NSMutableArray *orderedAlarms; // @synthesize orderedAlarms=_orderedAlarms;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
- (void).cxx_destruct;
- (void)getCachedAlarmsWithCompletion:(CDUnknownBlockType)arg1;
- (void)markNeedsUpdate;
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;

@end

