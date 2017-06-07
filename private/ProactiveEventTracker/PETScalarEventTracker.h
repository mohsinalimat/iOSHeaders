//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProactiveEventTracker/PETEventTracker.h>

@class NSString;

@interface PETScalarEventTracker : PETEventTracker
{
    NSString *_event;
}

@property(readonly, nonatomic) NSString *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (void)_logValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4;
- (void)trackEventWithPropertyValues:(id)arg1 value:(unsigned long long)arg2;
- (void)trackEventWithPropertyValues:(id)arg1;
- (id)initWithFeatureId:(id)arg1 event:(id)arg2 registerProperties:(id)arg3 propertySubsets:(id)arg4;
- (id)initWithFeatureId:(id)arg1 event:(id)arg2 registerProperties:(id)arg3;

@end

