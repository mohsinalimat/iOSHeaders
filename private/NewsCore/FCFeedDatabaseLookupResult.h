//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCFeedRange, NSArray, NSData;

@interface FCFeedDatabaseLookupResult : NSObject
{
    _Bool _exhaustedRange;
    NSArray *_feedItems;
    FCFeedRange *_feedRange;
    NSData *_ckFromCursor;
    unsigned long long _ckFromOrder;
    unsigned long long _ckToOrder;
    id _insertionToken;
}

@property(retain, nonatomic) id insertionToken; // @synthesize insertionToken=_insertionToken;
@property(nonatomic) unsigned long long ckToOrder; // @synthesize ckToOrder=_ckToOrder;
@property(nonatomic) unsigned long long ckFromOrder; // @synthesize ckFromOrder=_ckFromOrder;
@property(copy, nonatomic) NSData *ckFromCursor; // @synthesize ckFromCursor=_ckFromCursor;
@property(nonatomic) _Bool exhaustedRange; // @synthesize exhaustedRange=_exhaustedRange;
@property(copy, nonatomic) FCFeedRange *feedRange; // @synthesize feedRange=_feedRange;
@property(copy, nonatomic) NSArray *feedItems; // @synthesize feedItems=_feedItems;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool hasCKCursor;

@end

