//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMFoundation/NSObject-Protocol.h>

@class IMPerfProfiler;

@protocol IMPerfProfilerSink <NSObject>
- (void)perfProfiler:(IMPerfProfiler *)arg1 measurementDidFinish:(struct IMPerfMeasurement_t *)arg2;
@end

