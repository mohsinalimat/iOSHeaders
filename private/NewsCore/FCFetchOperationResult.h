//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface FCFetchOperationResult : NSObject
{
    _Bool _anyMissingObjects;
    id _fetchedObject;
    unsigned long long _status;
    unsigned long long _fetchResult;
    NSError *_error;
}

+ (id)resultWithStatus:(unsigned long long)arg1 fetchedObject:(id)arg2 error:(id)arg3;
@property(nonatomic) _Bool anyMissingObjects; // @synthesize anyMissingObjects=_anyMissingObjects;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long fetchResult; // @synthesize fetchResult=_fetchResult;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) id fetchedObject; // @synthesize fetchedObject=_fetchedObject;
- (void).cxx_destruct;
- (id)initWithStatus:(unsigned long long)arg1 fetchedObject:(id)arg2 fetchResult:(unsigned long long)arg3 error:(id)arg4;

@end

