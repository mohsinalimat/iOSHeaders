//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDCAAnimationContextCacheProtocol-Protocol.h>

@class CAMediaTimingFunction, NSString;

__attribute__((visibility("hidden")))
@interface TSDCAAnimationContextCache : NSObject <TSDCAAnimationContextCacheProtocol>
{
    CAMediaTimingFunction *_timingFunction;
    double _beginTime;
    double _timeOffset;
    double _duration;
    NSString *_fillMode;
}

@property(readonly, nonatomic) NSString *fillMode; // @synthesize fillMode=_fillMode;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
@property(readonly, nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(readonly, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
- (void)verifyCacheWithAnimation:(id)arg1;
- (id)initWithAnimation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

