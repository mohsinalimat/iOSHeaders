//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODDIteratorAttributes : NSObject
{
    int mAxis;
    int mPointType;
    _Bool mHideLastTransition;
    int mStart;
    unsigned int mCount;
    int mStep;
}

- (void)setStep:(int)arg1;
- (int)step;
- (void)setCount:(unsigned int)arg1;
- (unsigned int)count;
- (void)setStart:(int)arg1;
- (int)start;
- (void)setHideLastTransition:(_Bool)arg1;
- (_Bool)hideLastTransition;
- (void)setPointType:(int)arg1;
- (int)pointType;
- (void)setAxis:(int)arg1;
- (int)axis;

@end

