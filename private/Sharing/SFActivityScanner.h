//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/SFContinuityScanManagerObserver-Protocol.h>

@class NSString, NSUUID;
@protocol SFActivityScannerDelegate;

@interface SFActivityScanner : NSObject <SFContinuityScanManagerObserver>
{
    id <SFActivityScannerDelegate> _delegate;
    NSUUID *_identifier;
}

@property(retain) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)scanManager:(id)arg1 pairedDevicesChanged:(id)arg2;
- (void)scanManager:(id)arg1 lostDeviceWithDevice:(id)arg2;
- (void)scanManager:(id)arg1 foundDeviceWithDevice:(id)arg2;
- (void)scanManager:(id)arg1 receivedAdvertisement:(id)arg2;
- (void)activityPayloadFromDevice:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)activityPayloadFromDevice:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)scanForTypes:(unsigned long long)arg1;
@property(readonly) id <SFActivityScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

