//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUTWeakReference, NSDate;

@interface IMDInconsistency : NSObject
{
    CUTWeakReference *_contextWeakReference;
    NSDate *_firstOccurrence;
    unsigned long long _count;
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly) NSDate *firstOccurrence; // @synthesize firstOccurrence=_firstOccurrence;
- (_Bool)shouldJettison:(id *)arg1;
@property(nonatomic) __weak id context;
- (id)init;

@end

