//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSUtility/SFUInputStream-Protocol.h>

@protocol SFUBufferedInputStream <SFUInputStream>
- (_Bool)seekWithinBufferToOffset:(long long)arg1;
- (unsigned long long)readToOwnBuffer:(const char **)arg1 size:(unsigned long long)arg2;
@end

