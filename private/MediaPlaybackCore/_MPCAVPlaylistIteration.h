//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSCoding-Protocol.h>

@class MPSparseArray;

@interface _MPCAVPlaylistIteration : NSObject <NSCoding>
{
    MPSparseArray *_sourceContexts;
    unsigned long long _iterationIndex;
    unsigned long long _count;
    unsigned long long _indexToFaultIn;
}

@property(nonatomic) unsigned long long indexToFaultIn; // @synthesize indexToFaultIn=_indexToFaultIn;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long iterationIndex; // @synthesize iterationIndex=_iterationIndex;
@property(retain, nonatomic) MPSparseArray *sourceContexts; // @synthesize sourceContexts=_sourceContexts;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

