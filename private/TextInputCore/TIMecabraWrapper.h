//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TIMecabraWrapper : NSObject
{
    struct __Mecabra *_mecabraRef;
}

@property(readonly) struct __Mecabra *mecabraRef; // @synthesize mecabraRef=_mecabraRef;
- (void)dealloc;
- (id)initWithMecabraRef:(struct __Mecabra *)arg1;

@end

