//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCFeedItemFeature, FCFeedRange, NSString;

@interface FCFeedDatabaseLookup : NSObject
{
    _Bool _cachedOnly;
    NSString *_feedID;
    FCFeedRange *_feedRange;
    unsigned long long _maxCount;
    FCFeedItemFeature *_requiredFeature;
}

@property(copy, nonatomic) FCFeedItemFeature *requiredFeature; // @synthesize requiredFeature=_requiredFeature;
@property(nonatomic) _Bool cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(copy, nonatomic) FCFeedRange *feedRange; // @synthesize feedRange=_feedRange;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (void).cxx_destruct;

@end

