//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSUProgress.h>

@class TSUBasicProgressStorage;

__attribute__((visibility("hidden")))
@interface TSUBasicProgress : TSUProgress
{
    TSUBasicProgressStorage *mStorage;
}

@property(getter=isIndeterminate) _Bool indeterminate;
- (double)maxValue;
@property double value;
- (void)dealloc;
- (id)init;
- (id)initWithMaxValue:(double)arg1;

@end

