//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLKUIMmapFile : NSObject
{
    int _descriptor;
    NSString *_path;
    unsigned long long _length;
    const void *_bytes;
}

+ (id)mmapFileWithPath:(id)arg1;
@property(readonly, nonatomic) const void *bytes; // @synthesize bytes=_bytes;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) int descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPath:(id)arg1 descriptor:(int)arg2 length:(unsigned long long)arg3 bytes:(const void *)arg4;

@end

