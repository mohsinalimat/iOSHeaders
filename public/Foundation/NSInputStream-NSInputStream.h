//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInputStream.h>

@interface NSInputStream (NSInputStream)
+ (id)inputStreamWithURL:(id)arg1;
+ (id)inputStreamWithFileAtPath:(id)arg1;
+ (id)inputStreamWithData:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_cfTypeID;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
@end

