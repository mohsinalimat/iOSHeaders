//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@class TSUTemporaryDirectory;

__attribute__((visibility("hidden")))
@interface TSPTemporaryDataStorageURL : NSURL
{
    TSUTemporaryDirectory *_parentDirectory;
}

@property(readonly, nonatomic) TSUTemporaryDirectory *parentDirectory; // @synthesize parentDirectory=_parentDirectory;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initFileURLWithPath:(id)arg1 parentDirectory:(id)arg2;

@end

