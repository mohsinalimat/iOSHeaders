//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface _PASBloomFilter : NSObject
{
    NSData *_data;
    unsigned int _numBits;
    int _numHashFunctions;
}

+ (id)bloomFilterWithPathToFile:(id)arg1;
- (void).cxx_destruct;
- (id)combineHashesWithSeed:(int)arg1 hashA:(id)arg2 hashB:(id)arg3 reuse:(id)arg4;
- (_Bool)getWithHashes:(id)arg1;
- (id)computeHashesWithSeed:(int)arg1 forData:(id)arg2 reuse:(id)arg3;
- (id)computeHashesForString:(id)arg1 reuse:(id)arg2;
- (int)numHashes;
- (id)newHashesArray;
- (id)initDummy;
- (id)initWithData:(id)arg1 numBits:(unsigned int)arg2 numHashFunctions:(int)arg3;

@end

