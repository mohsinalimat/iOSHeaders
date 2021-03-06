//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _HMCameraSource;
@protocol OS_dispatch_queue;

@interface HMCameraSource : NSObject
{
    _HMCameraSource *_source;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) _HMCameraSource *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)aspectRatio;
- (id)initWithSource:(id)arg1;

@end

