//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MDM/CLLocationManagerDelegate-Protocol.h>

@class CLLocation, CLLocationManager, NSError, NSString;
@protocol OS_dispatch_semaphore;

@interface MCMDMLostDeviceLocationManager : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    CLLocation *_currentLocation;
    NSError *_currentError;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSError *currentError; // @synthesize currentError=_currentError;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_getCurrentDeviceLocation;
- (id)lastLocationRequestedDateMessageForServer:(id)arg1;
- (void)clearLastLocationRequestedDate;
- (id)currentDeviceLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

