//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _HDSourceManagerCacheItem : NSObject
{
    _Bool _userOrdered;
    NSArray *_sources;
    NSArray *_sourceIDs;
}

@property(nonatomic) _Bool userOrdered; // @synthesize userOrdered=_userOrdered;
@property(retain, nonatomic) NSArray *sourceIDs; // @synthesize sourceIDs=_sourceIDs;
@property(retain, nonatomic) NSArray *sources; // @synthesize sources=_sources;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSources:(id)arg1 IDs:(id)arg2 userOrdered:(_Bool)arg3;
- (id)init;

@end

