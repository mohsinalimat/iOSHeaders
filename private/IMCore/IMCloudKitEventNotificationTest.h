//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMSharedUtilities/IMRuntimeTestCase.h>

#import <IMCore/IMCloudKitEventHandler-Protocol.h>

@class IMCloudKitHookTestSingleton, NSString;

@interface IMCloudKitEventNotificationTest : IMRuntimeTestCase <IMCloudKitEventHandler>
{
    IMCloudKitHookTestSingleton *_cloudKitHooks;
}

@property(retain, nonatomic) IMCloudKitHookTestSingleton *cloudKitHooks; // @synthesize cloudKitHooks=_cloudKitHooks;
- (void).cxx_destruct;
- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;
- (void)cloudKitEventNotificationManager:(id)arg1 syncStateDidChange:(id)arg2;
- (void)tearDown;
- (void)setUp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

