//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WebGeolocationPositionInternal;

@interface WebGeolocationPosition : NSObject
{
    WebGeolocationPositionInternal *_internal;
}

- (void)dealloc;
- (id)initWithGeolocationPosition:(RefPtr_f6a7fd22 *)arg1;
- (id)initWithTimestamp:(double)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4;

@end

