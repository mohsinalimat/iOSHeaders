//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface _NSClStr : NSString
{
    unsigned long long length;
    unsigned short *characters;
}

- (const unsigned short *)_fastCharacterContents;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithUTF8String:(const char *)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;

@end

