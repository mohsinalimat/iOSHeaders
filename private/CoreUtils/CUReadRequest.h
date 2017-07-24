//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSMutableData;

@interface CUReadRequest : NSObject
{
    char *_bufferPtr;
    NSError *_error;
    unsigned long long _length;
    void *_bufferBytes;
    NSMutableData *_bufferData;
    CDUnknownBlockType _completion;
    unsigned long long _minLength;
    unsigned long long _maxLength;
}

@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) unsigned long long minLength; // @synthesize minLength=_minLength;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableData *bufferData; // @synthesize bufferData=_bufferData;
@property(nonatomic) void *bufferBytes; // @synthesize bufferBytes=_bufferBytes;
- (void).cxx_destruct;

@end

