//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVRouteDetectorInternal;

@interface AVRouteDetector : NSObject
{
    AVRouteDetectorInternal *_routeDetectorInternal;
}

+ (void)initialize;
- (void)_updateMultipleRoutesDetected;
@property(readonly) _Bool multipleRoutesDetected;
@property(getter=isRouteDetectionEnabled) _Bool routeDetectionEnabled;
- (void)dealloc;
- (id)init;

@end

