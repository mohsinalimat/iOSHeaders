//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface SGIntervalTreeNode : NSObject
{
    unsigned long long _index;
    SGIntervalTreeNode *_left;
    unsigned long long _leftIndex;
    SGIntervalTreeNode *_right;
    unsigned long long _rightIndex;
    NSMutableSet *_keys;
}

- (void).cxx_destruct;
- (_Bool)isSpannedByRight:(unsigned long long)arg1;
- (_Bool)isSpannedByLeft:(unsigned long long)arg1;
- (unsigned long long)getMax;
- (unsigned long long)getMin;
- (_Bool)isSpannedBy:(struct _NSRange)arg1;
- (void)insertIndex:(unsigned long long)arg1;
- (void)assignKey:(id)arg1 forRange:(struct _NSRange)arg2;
- (void)queryRange:(struct _NSRange)arg1 toResults:(id)arg2;
- (id)queryRange:(struct _NSRange)arg1;
- (void)storePosition:(unsigned long long)arg1;
- (id)init;

@end

