//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSUtility/SFUInputStream-Protocol.h>

@class NSString;

@interface SFUFileInputStream : NSObject <SFUInputStream>
{
    int mFd;
    _Bool mIsCachingDisabled;
    long long mStartOffset;
    long long mCurrentOffset;
    long long mEndOffset;
}

- (id)closeLocalStream;
- (void)close;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (void)seekToOffset:(long long)arg1;
- (_Bool)canSeek;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (long long)offset;
- (void)dealloc;
- (id)initWithPath:(id)arg1 offset:(long long)arg2;
- (id)initWithPath:(id)arg1 offset:(long long)arg2 length:(long long)arg3;
- (id)initWithFileDescriptor:(int)arg1 offset:(long long)arg2 length:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

