//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSArray, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPStorageChildEnumerator : NSEnumerator
{
    unsigned int _index;
    TSWPStorage *_storage;
    NSArray *_charOffsetArray;
}

@property(retain, nonatomic) NSArray *charOffsetArray; // @synthesize charOffsetArray=_charOffsetArray;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(retain, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithStorage:(id)arg1;

@end

