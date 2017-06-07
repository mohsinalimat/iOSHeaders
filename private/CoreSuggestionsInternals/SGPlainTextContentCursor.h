//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface SGPlainTextContentCursor : NSObject
{
    NSIndexSet *_quoted;
    struct _NSRange _sig;
    struct __CFString *_str;
    unsigned long long _len;
    struct {
        unsigned short buffer[64];
        struct __CFString *theString;
        unsigned short *directUniCharBuffer;
        char *directCStringBuffer;
        struct {
            long long location;
            long long length;
        } rangeToBuffer;
        long long bufferedRangeStart;
        long long bufferedRangeEnd;
    } _ib;
    unsigned long long _pos;
}

@property(nonatomic) unsigned long long pos; // @synthesize pos=_pos;
- (void).cxx_destruct;
- (void)seekToEnd;
- (void)seekToStart;
- (_Bool)backwardToString:(id)arg1 consume:(_Bool)arg2;
- (_Bool)forwardToString:(id)arg1 consume:(_Bool)arg2;
- (void)backwardWhile:(CDUnknownBlockType)arg1;
- (void)forwardWhile:(CDUnknownBlockType)arg1;
- (_Bool)backward;
- (_Bool)forward;
- (void)dealloc;
- (id)init;
- (id)initWithEntity:(id)arg1;

@end

