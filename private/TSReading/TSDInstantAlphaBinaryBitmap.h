//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TSDInstantAlphaBinaryBitmap : NSObject
{
    long long mWidth;
    long long mHeight;
    long long mRowBytes;
    char *mData;
}

- (void)unionWithBitmap:(id)arg1;
- (void)dealloc;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2;

@end
