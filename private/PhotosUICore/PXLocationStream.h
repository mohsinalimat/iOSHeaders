//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSString;

@interface PXLocationStream : NSObject <CLLocationManagerDelegate>
{
    unsigned long long _state;
    double _accuracy;
    CDUnknownBlockType _handler;
    CLLocationManager *_locationManager;
}

- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_cleanup;
- (void)_closeStreamWithError;
- (void)_emitLocation:(id)arg1;
- (void)_requestLocation;
- (void)_requestAuthorization;
- (void)_open;
@property(nonatomic, getter=isClosed) _Bool closed;
- (void)dealloc;
- (id)initWithAccuracy:(double)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

