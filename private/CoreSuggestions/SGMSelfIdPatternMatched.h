//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMSelfIdPatternMatched : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)arg1 patternType:(struct SGMSIPatternType_)arg2 patternHash:(id)arg3 nameTokens:(unsigned long long)arg4 nameClass:(struct SGMSINameClassification_)arg5 messageIndex:(unsigned long long)arg6;
- (id)init;

@end
