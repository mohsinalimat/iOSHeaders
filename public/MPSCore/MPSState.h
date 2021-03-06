//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLResource;

@interface MPSState : NSObject
{
    unsigned long long _readCount;
    id <MTLResource> _resource;
    struct MPSAutoCache *_cache;
}

@property(nonatomic) unsigned long long readCount; // @synthesize readCount=_readCount;
@property(copy) NSString *label;
- (id)debugDescription;
@property(readonly, nonatomic) _Bool isTemporary;
- (void)dealloc;
- (id)initWithResource:(id)arg1 cache:(struct MPSAutoCache *)arg2;

@end

