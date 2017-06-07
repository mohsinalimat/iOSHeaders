//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMPanoramaCaptureRequest.h>

#import <CameraUI/CAMMutableCaptureRequestLocation-Protocol.h>
#import <CameraUI/CAMMutableCaptureRequestOrigin-Protocol.h>
#import <CameraUI/CAMMutableCaptureRequestPersistence-Protocol.h>
#import <CameraUI/CAMMutableCaptureRequestPower-Protocol.h>

@class CLLocation, NSString, NSURL;
@protocol CAMPanoramaCaptureRequestDelegate;

@interface CAMMutablePanoramaCaptureRequest : CAMPanoramaCaptureRequest <CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPower, CAMMutableCaptureRequestOrigin>
{
}

@property(nonatomic) unsigned int assertionIdentifier;
@property(nonatomic) long long origin;
@property(retain, nonatomic) CLLocation *location;
@property(nonatomic) _Bool shouldDelayRemotePersistence;
@property(nonatomic) _Bool shouldPersistDiagnosticsToSidecar;
@property(nonatomic) _Bool shouldExtractDiagnosticsFromMetadata;
@property(copy, nonatomic) NSURL *localDestinationURL;
@property(nonatomic) long long temporaryPersistenceOptions;
@property(nonatomic) unsigned long long deferredPersistenceOptions;
@property(nonatomic) long long persistenceOptions;
@property(copy, nonatomic) NSString *persistenceUUID;
@property(nonatomic) unsigned short sessionIdentifier; // @dynamic sessionIdentifier;
@property(nonatomic) long long physicalButtonType; // @dynamic physicalButtonType;
@property(nonatomic) long long captureMode; // @dynamic captureMode;
@property(nonatomic) long long captureDevice; // @dynamic captureDevice;
@property(nonatomic) long long captureOrientation; // @dynamic captureOrientation;
@property(nonatomic) __weak id <CAMPanoramaCaptureRequestDelegate> delegate; // @dynamic delegate;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

