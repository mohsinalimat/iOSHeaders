//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface AVTimeMarkerObservation : NSObject
{
    id _observer;
    NSArray *_times;
    id _context;
    int _currentIndex;
}

- (int)currentIndex;
- (id)context;
- (id)observer;
- (double)prevInterestingTime;
- (double)nextInterestingTime;
- (_Bool)gotoTime:(double)arg1;
- (void)dealloc;
- (id)initWithObserver:(id)arg1 times:(id)arg2 context:(id)arg3 currentIndex:(int)arg4;

@end

