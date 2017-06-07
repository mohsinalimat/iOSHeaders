//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HFDeallocationWatchdog : NSObject
{
    id _object;
    CDUnknownBlockType _finalizer;
}

+ (void)stopMonitoringTargetObject:(id)arg1 key:(const void *)arg2;
+ (void)startMonitoringTargetObject:(id)arg1 key:(const void *)arg2 finalizer:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType finalizer; // @synthesize finalizer=_finalizer;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithTargetObject:(id)arg1 finalizer:(CDUnknownBlockType)arg2;

@end

